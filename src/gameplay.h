/*
 * gameplay.h
 *
 *  Created on: Mar. 16, 2021
 *      Author: samuel
 */

#ifndef GAMEPLAY_H_
#define GAMEPLAY_H_
#include <iostream>
#include <vector>
#include <cstdio>
#include <iomanip>
#include "Visual/initGraph.h"
#include "Visual/initLevels.h"
#include "Visual/Room.h"
#include "Visual/Levels.h"
#include "Item/Item.h"

char normalMenu(Character& mainPlayer, Room currRoom, Graphics currDisplay){

	char option;
	int optionAW;
	Inventory playerInventory = mainPlayer.getMyInventory();
	Equipment playerEquipment = mainPlayer.getMyEquipment();
	Weapon* mainWeapon = playerEquipment.getMainWeapon();
	Weapon* mainArmor = playerEquipment.getArmor();
	Weapon* newAW;


	cout << "\tWhat would you like to do ?" << endl << endl;
	cout << "\th - Drink a potion" << endl;
	cout << "\tw - Change your main weapon" << endl;
	cout << "\ta - Change your armor" << endl;
	cout << "\tm - Move to another room" << endl;

	cin >> option;

	system("clear");

	cout << endl << endl << "\t\t\t\t\tYou are in Room #" << currRoom.getRoomNumber() << endl;
	//Print the first screen
	currDisplay.PrintDisplay();

	switch(option){
	case('h'):
		//Show the potions and ask which one he wants to use
		mainPlayer.drinkPotion();
		break;
	case('w'):
		//Show the weapons and ask which one he wants to use as his main weapon
		cout << "Your main weapon is currently : " << endl;
		mainWeapon->printInfo();
		cout << endl << "These are the ones in your inventory. Which number would like to equip ?" << endl << endl;
		playerInventory.showWeapons();
		cin >> optionAW;

		newAW = dynamic_cast<Weapon*>(playerInventory.findItem(optionAW));
		mainPlayer.equipMainWeapon(newAW);

		break;
	case('a'):
		//Show the armor and ask which one he wants to use as his main weapon
		cout << "Your armor is currently : " << endl;
		mainArmor->printInfo();
		cout << "These are the ones in your inventory. Which number would like to equip ?" << endl << endl;
		playerInventory.showWeapons();
		cin >> optionAW;

		newAW = dynamic_cast<Weapon*>(playerInventory.findItem(optionAW));
		mainPlayer.equipArmor(newAW);

		break;
	case('m'):
		break;
	default:
		cout << "Not a valid option." << endl;
		break;
	}

	return option;
}


char inTown(Merchandise& townMerchandise, Character& mainPlayer, Graphics currDisplay){
//Will probably need to receive the player to access his inventory
	char option;
	char buyOption;
	size_t itemToBuy;
	int quantityToBuy;
	int totalPrice;
	Item* itemToBuyObject;
	int qteObject;
	map<Item *, int>::iterator it;
	size_t i = 0;
	map<Item*, int> townSalesList = townMerchandise.getSaleList();
	Inventory playerInventory = mainPlayer.getMyInventory();
	int qteRemaining;

	char sellCategory;
	int sellOption;
	Item* itemToSell;
	Equipment playerEquipment = mainPlayer.getMyEquipment();
	Weapon* mainWeapon = playerEquipment.getMainWeapon();
	Weapon* mainArmor = playerEquipment.getArmor();



	cout << "\tWhat would you like to do ?" << endl << endl;
	cout << "\th - Heal yourself" << endl;
	cout << "\tb - See what the merchands have to offer" << endl;
	cout << "\ts - Sell items to the merchands" << endl;
	cout << "\ti - See your inventory" << endl;
	cout << "\tn - Go to the next level" << endl;


	cin >> option;

	system("clear");

	cout << endl << endl << "\t\t\t\t\tYou are in the town" << endl;
	//Print the first screen
	currDisplay.PrintDisplay();

	switch(option){
	case('h'):

					//Put the player's health to max health
					mainPlayer.setHealth(mainPlayer.getMaxHp());
	cout << "\tYour player's health is now at the max ! " << endl;
	break;

	case('b'):

		cout << "\tHere is what is in store for this Town !" << endl << endl;
		townMerchandise.printInfo();
		cout << endl;
		cout << "\tWould you like to buy something ? (y/n)" << endl;
		cin >> buyOption;

		while(buyOption != 'y' && buyOption != 'n'){
			cout << "\tNot a valid option, choose between y and n" << endl;
			cin >> buyOption;
		}

	if(buyOption == 'y'){
		//IMPLEMENT MECHANICS TO BUY AN ITEM WHICH SHOULD BE :
		//Ask for the number of the item
		cout << "Enter the index number of the item you would like to buy" << endl;
		cin >> itemToBuy;

		//Check that number is valid
		while(itemToBuy > townMerchandise.getSaleList().size()){
			cout << "\tNot a valid option, choose a number smaller than" << townMerchandise.getSaleList().size() << endl;
			cin >> itemToBuy;
		}

		for (it = townSalesList.begin(); it != townSalesList.end(); it++){
			if(it->second>0)
				i++;
			if(i == itemToBuy){
				qteObject = it->second;
				itemToBuyObject = it->first;
				break;
			}
		}

		//Ask for the quantity
		cout << "How many of these would you like to buy ?" << endl;
		cin >> quantityToBuy;

		//Check that the quantity is valid
		while(quantityToBuy > qteObject){
			cout << "\tNot a valid option, choose a number smaller than " << qteObject << endl;
			cin >> quantityToBuy;
		}

		qteRemaining = qteObject - quantityToBuy;

		totalPrice = itemToBuyObject->getBuyPrice() * quantityToBuy;

		//Check if player has enough money
		if(mainPlayer.getMoney() > totalPrice){
			//if yes, buy. (remove from shop, put in his inventory, remove the money from his inventory)
			mainPlayer.removeMoney(totalPrice);
			for(int j = 0; j < quantityToBuy; j++)
				mainPlayer.pickUpItem(itemToBuyObject);

			//BUG WITH THE MERCHAND
			for (it = townSalesList.begin(); it != townSalesList.end(); it++){
				if(it->second>0)
					i++;
				if(i == itemToBuy){
					if(qteRemaining == 0)
						townSalesList.erase(itemToBuyObject);
					else
						it->second = it->second - quantityToBuy;
				}
			}
			townMerchandise.setSaleList(townSalesList);

		} else{
			cout << "\tYou don't have enough money to buy item # " << itemToBuy << " " << quantityToBuy << " times" << endl;
		}

		//if not, say that he doesn't have enough money and ask if he wants to buy something else
	} else {
		cout << "\tOk, no problem, good luck on your adventure !" << endl;
	}
	break;

	case('s'):

		//Show inventory
		cout << "\tHere are your potions: " << endl << endl;
		playerInventory.showPotions();
		cout << endl;
		cout << "\tHere are your weapons: " << endl << endl;
		playerInventory.showWeapons();
		cout << endl;
		cout << "\tHere is your gold: " << endl << endl;
		playerInventory.showMyMoney();
		cout << endl;
		cout << "\tAnd you have this amount of money: " << endl << endl;
		cout << "\t" << mainPlayer.getMoney() << "$";
		cout << endl << endl;

		//What do you want to sell
		//Potions, gold or weapons ?
		cout << "\tIn which category is the item you want to sell ?" << endl;
		cout << "\tp - Potions" << endl;
		cout << "\tw - Weapons" << endl;
		cout << "\tg - Gold" << endl;

		cin >> sellCategory;

		while(sellCategory != 'p' && sellCategory != 'w' && sellCategory != 'g'){
			cout << "\tNot a valid option, choose between p, w and g" << endl;
			cin >> sellCategory;
		}

		//show the category and ask for the index number

		if(sellCategory == 'p'){
			cout << "\tHere are your potions: " << endl << endl;
			playerInventory.showPotions();
			cout << endl;
		} else if(sellCategory == 'w'){
			cout << "\tHere are your weapons: " << endl << endl;
			playerInventory.showWeapons();
			cout << endl;
		} else if (sellCategory == 'g'){
			cout << "\tHere is your gold: " << endl << endl;
			playerInventory.showMyMoney();
			cout << endl;
		}

		cout << "\tWrite the number of the item you want to sell" << endl;

		cin >> sellOption;

		itemToSell = playerInventory.findItem(sellOption);

		if(itemToSell->getName() == mainWeapon->getName())
			mainPlayer.equipMainWeapon(nullptr);
		else if(itemToSell->getName() == mainArmor->getName())
			mainPlayer.equipArmor(nullptr);

		//Remove the item from the dude

		playerInventory.removeItem(itemToSell, 1);

		mainPlayer.setMyInventory(playerInventory);

		//make his money go up from the pricedValue of the item

		mainPlayer.addMoney(itemToSell->getBuyPrice());


		//Maybe put it in the shop

		break;

	case('i'):
				//Show the player's inventory
				cout << "\tHere are your potions: " << endl << endl;
	playerInventory.showPotions();
	cout << endl;
	cout << "\tHere are your weapons: " << endl << endl;
	playerInventory.showWeapons();
	cout << endl;
	cout << "\tHere is your gold: " << endl << endl;
	playerInventory.showMyMoney();
	cout << endl;
	cout << "\tAnd you have this amount of money: " << endl << endl;
	cout << "\t" << mainPlayer.getMoney() << "$";
	cout << endl << endl;

	break;

	case('n'):
				break;

	default:

		cout << "\tNot a valid option" << endl;
		break;

	}
	return option;
}

char inFight(Character& enemy, Character& player, bool isBoss, Room currRoom, Graphics currDisplay){

	char option;

	//Prompt the player
	// for drink a potion, fighting or running
	//if (Boss), you can't run

	cout << "\tWhat would you like to do ?" << endl << endl;
	cout << "\tf - Attack the monster" << endl;
	cout << "\th - Drink a potion from your inventory" << endl;
	//TO BE IMPLEMENTED
	cout << "\tr - Run away from the monster" << endl;

	cin >> option;

	system("clear");

	cout << endl << endl << "\t\t\t\t\tYou are in Room #" << currRoom.getRoomNumber() << endl;
	//Print the first screen
	currDisplay.PrintDisplay();



	//if fight
	//attack the enemy
	if(option == 'f'){
		player.basicAttack(&enemy);
		cout << endl;
	}
	//else if run

	else if(option == 'r'){
		//FOR NOW YOU CAN'T
		if(isBoss){
			cout << "\tThis is the boss, you can't run !" << endl;
		}
	}
	//else if you drink a potion

	else if(option == 'h'){
		//your health goes up
		player.drinkPotion();
	}
	//Not a valid option
	else{
		cout << "\tNot a valid option" << endl;
	}
	if(!enemy.isAlive())
		return option;

	//Then the enemy attacks you
	enemy.basicAttack(&player);
	cout << endl;

	return option;
}

void restartGameplay(size_t& lvlIndex, Character& mainPlayer, string charName, char roleIndex, bool& firstTime) {
	lvlIndex = -1;
	firstTime = true;
	Character newPlayer(charName, roleIndex);
	mainPlayer = newPlayer;

}

void mainGameplay(){
	//Creating the game
	vector<Levels> wholeGame;
	Levels level1;
	Levels level2;
	Levels currLevel;
	Character currMonster;

	createLevelOne(level1);
	createLevelTwo(level2);

	wholeGame.push_back(level1);
	wholeGame.push_back(level2);


	//current Room and display of the level
	Room currRoom;
	Graphics currDisplay;

	//First chest encountered
	HP_Potion* hpPotionStart = new HP_Potion("small hp","level 1 hp potion",100,1,25);
	Weapon* myFirstSword = new Sword("Wood Sword","Some weapon is better than no weapon", 800, 1, 100, 0.6);
	Weapon* myFirstArmor = new Armor("Cloth Armor ","Some armor is better than no armor", 500, 1, 80, 0.0);

	//When the player encounters a chest
	vector<Item*> itemListTotal = getTotalListItem();
	Item* randomItemChest;
	Chest chestInRoom{"Random Chest", "A random chest in a room"};
	int randomGoldValue;

	//Variable for the game
	char directionUser;
	char normal;
	char useless;
	char optionChest;
	bool isFightingBoss;
	char townOutput;
	bool isPlayerAlive = true;
	bool first = true;
	int playOrQuit;
	int restartOrQuit;

	//Everything to do with the Town
	Graphics townDisplay = town();
	Merchandise townMerchandise("Town", "Town in between the levels");
	map<Item *, int> townSaleList;

	//Menus
	Graphics mainScreen = mainMenu();
	Graphics deathScreen = deathVisuals();

	//Initializing the character
	string playersName;
	char charRole = '1';


	system("clear");
	mainScreen.PrintDisplay();

	cin >> playOrQuit;

	while(playOrQuit != 1 && playOrQuit != 2){
		cout << "Not a valid option. Enter 1 or 2" << endl;
		cin >> playOrQuit;
	}

	if(playOrQuit == 2)
		exit(EXIT_SUCCESS);

	system("clear");


	cout << "\tPlease enter a name for your Character: ";
	cin >> playersName;
	cout << "\tGreat, now what role would you like ? " << endl << endl;
	//Print the roles
	Role::printRoles();
	cin >> charRole;
	//Create character with role
	Character mainPlayer(playersName, charRole);


	cout << "\tGreetings ! " << endl;

	mainPlayer.printCharacter();

	cout << "\tPress any key and then enter to start playing the game" << endl;

	cin >> useless;

	for(size_t i = 0; i < wholeGame.size(); i++){

		currLevel = wholeGame.at(i);
		currRoom = currLevel.getCurrRoom();
		currDisplay = currRoom.getDesign();

		system("clear");


		do{

			cout << endl << endl << "\t\t\t\t\tYou are in Room #" << currRoom.getRoomNumber() << endl;
			//Print the first screen
			currDisplay.PrintDisplay();

			//Check if there are monsters
			if(currDisplay.GetMonsters()){
				cout << "\tThere is a monster in this room !!" << endl << endl;
				//Get the monster in the room
				currMonster = currRoom.getEnemy();

				//check if the monster is the boss
				isFightingBoss = currDisplay.GetBoss();

				//If there are, fight them then continue

				//IMPLEMENT FIGHT MECHANICS

				cout << "\tThe monster in this room is:" << endl << endl;
				currMonster.printCharacter();

				//while(the enemy is alive)
				while(currMonster.isAlive()){
					//Prompt the player
					// for drink a potion, fighting or running
					//if (Boss), you can't run

					cout << "\tYou have : " << setw(15) << mainPlayer.getHp() << " health points" << endl;
					cout << "\tAnd the enemy has : " << setw(6) << currMonster.getHp() << " health points" << endl << endl;

					inFight(currMonster, mainPlayer, isFightingBoss, currRoom, currDisplay);

					//is the player alive

					isPlayerAlive = mainPlayer.isAlive();
					//if not cout dead balbalbla
					if(!isPlayerAlive){
						cout << "\tYou died !" << endl;
						break;
					}
					//if yes loop again
				}

				//we won and it was the boss, say boss is dead in the level
				if(isFightingBoss && isPlayerAlive){
					currLevel.setBossStatus(false);
					cout << "\tCongratulations ! The boss is dead ! Let's go to a town to celebrate ! (Press any key then enter to go to the town)" << endl;
					//Xp from killing a boss
					mainPlayer.addXp(80);
					cin >> useless;
					break;
				}
				if(isPlayerAlive){
					cout << "\tCongratulations ! You won against the monster !" << endl;
					//Xp from killing a monster
					mainPlayer.addXp(20);
				}
			}
			if(!isPlayerAlive)
				break;
			//Check if there is a chest
			if(currDisplay.GetChest()){
				//If there is a chest, ask the player if he wants to open it
				cout << "\t There is a chest in this room ! Would you like to open it ? (y/n)" << endl;
				cin >> optionChest;
				cout << endl << endl;

				if(optionChest == 'y' ||optionChest == 'Y'){

					if(first){
						first = false;

						cout << "\tIn the box, you found: " << endl;
						cout << "\t";
						myFirstSword->printInfo();
						cout << endl;
						cout << "\t";
						myFirstArmor->printInfo();
						cout << endl << "\t, 2 small health potions of 25 hp each and 250$!" << endl << endl;

						mainPlayer.pickUpItem(myFirstArmor);
						mainPlayer.pickUpItem(myFirstSword);
						mainPlayer.addMoney(250);

						mainPlayer.equipArmor(myFirstArmor);
						mainPlayer.equipMainWeapon(myFirstSword);

						cout << "\tYour sword and cloth armor are now equipped !" << endl;

						mainPlayer.pickUpItem(hpPotionStart);
						mainPlayer.pickUpItem(hpPotionStart);




					} else {
						//Generate the random item
						cout << "\tIn the box, you found: " << endl;
						cout << "\t";
						randomItemChest = chestInRoom.openBox(itemListTotal);
						cout << endl;
						mainPlayer.pickUpItem(randomItemChest);

						//Generate the random amount of money
						randomGoldValue = rand() % 1000;
						cout << "\tAnd " << randomGoldValue << " gold !" << endl << endl;
						mainPlayer.addMoney(randomGoldValue);
						cout << endl;
					}

					//Add those to the player inventory
					//add randomItemChest
					//randomGold

					//Mark the chest as opened or something
					wholeGame.at(i).setChestState(false);

					//BUG TO FIX
					//MARK THE CHEST AS OPEN SO THE PLAYER CAN'T CONTINUOUSLY OPEN IT
					//BY GETTING IN AND OUT OF THE ROOM

				}
			}

			//DOES THE PLAYER WANTS TO ACCESS HIS INVENTORY(NOW IT'LL JUST BE DRINK POTIONS) OR GO TO ANOTHER ROOM

				do{
					normal = normalMenu(mainPlayer, currRoom, currDisplay);
				}while(normal != 'm');

				//ask the user which direction he wants to go
				cout << "\tWhich direction would you like to go ? ('F' (Forward), 'R' (Right), 'L' (Left), 'B' (backward))" << endl;

			cin >> directionUser;
			//Verify that the input is ok
			while(directionUser != 'F' && directionUser != 'R' && directionUser != 'L' && directionUser != 'B' &&
					directionUser != 'f' && directionUser != 'r' && directionUser != 'l' && directionUser != 'b'){
				//If not, ask a good output
				cout << "Invalid output, please choose (F, R, L or B)" << endl;
				cin >> directionUser;
			}
			//If it is, verify that he can go to this room ( not *nullptr)
			//Done in the nextRoom of Levels
			//If he can, switch room
			currLevel.nextRoom(directionUser);


			//Reassign the current Room and Display to work with them
			currRoom = currLevel.getCurrRoom();
			currDisplay = currRoom.getDesign();

			//Clear the real terminal screen
			//For linux
			system("clear");
			//For windows
			//system("CLS");


		}while(1);
		//while(!currLevel.getBossStatus());

		if(!isPlayerAlive) {
			//Need to check user input and display death screen
			deathScreen.PrintDisplay();

			cin >> restartOrQuit;

			while(restartOrQuit != 1 && restartOrQuit != 2){
				cout << "Not a valid option. Enter 1 or 2" << endl;
				cin >> restartOrQuit;
			}

			if(restartOrQuit == 1)
				restartGameplay(i, mainPlayer, mainPlayer.getCharName(), charRole, first);
			//Quit Game
			if(restartOrQuit == 2)
				break;
		} else {
			//When boss is defeated, we should go to the town.
			system("clear");
			townDisplay.PrintDisplay();

			cout << "\tYou reached a Town. You must be exhausted !" << endl;

			//Clear old sale list of the Town
			townSaleList.clear();

			//Generate the inventory of the Town
			for (Item *item: itemListTotal) {
				townSaleList.emplace(item, Merchandise::getRandomNumByLevel(item));
			}

			townMerchandise.setSaleList(townSaleList);

			do{
				//Call to inTown while output is not n
				townOutput = inTown(townMerchandise, mainPlayer, townDisplay);
			}while(townOutput != 'n');
		}

	}
}

// @James
//void mainScreen(){
//	initGraph.mainMenu();
//}



#endif /* GAMEPLAY_H_ */
