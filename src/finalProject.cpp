//============================================================================
// Name        : finalProject.cpp
// Authors      : Samuel Lamontagne, James Huynh, Qin
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <vector>
#include "Visual/initGraph.h"
#include "Visual/initLevels.h"
#include "Visual/Room.h"
#include "Visual/Levels.h"
#include "item/Item.h"
#include "town/Box.h"
#include "common/itemListTotal.h"
#include "item/Money/Gold.h"
#include "town/Merchandise.h"
#include "Entity/Character.h"

//temporary
#include "gameplay.h"


using namespace std;

int main() {


	//Sam' part
	//For random values
	srand (time(NULL));
	//Initialize the roles
	Role::initializeRoles();

	//Creating the game
	vector<Levels> wholeGame;
	cout << "Before" << endl;
	Levels level1;
	cout << "i'm here" << endl;
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

	//When the player encounters a chest
	vector<Item*> itemListTotal = getTotalListItem();
	Item* randomItemChest;
	Box chestInRoom{"Random Chest", "A random chest in a room"};
	int randomGoldValue;
	Gold randomGold{"Random Gold in chest", "A random amount of gold found in a chest", 0};

	//Variable for the game
	char directionUser;
	char useless;
	char optionChest;
	bool isFightingBoss;
	char townOutput;

	//Everything to do with the town
	Graphics townDisplay = town();
	Merchandise townMerchandise("Town", "Town in between the levels");
	map<Item *, int> townSaleList;

	//Initializing the character


	string playersName;
	char charRole;

	cout << "\tWelcome to the world of....." << endl;
	cout << "Please enter a name for your Character: ";
	cin >> playersName;
	cout << "Great, now what role would you like ? " << endl << endl;
	//Print the roles
	//cin >> charRole;
	//Create character with role
	Character mainPlayer(playersName, '1');

	cout << "Greetings ! ";

	mainPlayer.printCharacter();

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
				cout << "\tThere is a monster in this room !!" << endl;
				//Get the monster in the room
				currMonster = currRoom.getEnemy();

				//check if the monster is the boss
				isFightingBoss = currDisplay.GetBoss();

				//If there are, fight them then continue



				//IMPLEMENT FIGHT MECHANICS

				//we won and it was the boss, say boss is dead in the level
				if(isFightingBoss /*&& we won or are still alive*/){
					currLevel.setBossStatus(false);
					cout << "\tCongratulation ! The boss is dead ! Let's go to a town to celebrate ! (Press any key then enter to go to the town)" << endl;
					cin >> useless;
					break;
				}
			}
			//Check if there is a chest
			if(currDisplay.GetChest()){
				//If there is a chest, ask the player if he wants to open it
				cout << "\t There is a chest in this room ! Would you like to open it ? (y/n)" << endl;
				cin >> optionChest;
				cout << endl << endl;

				if(optionChest == 'y' ||optionChest == 'Y'){

					//Generate the random item
					cout << "\tIn the box, you found: " << endl;
					cout << "\t";
					randomItemChest = chestInRoom.openBox(itemListTotal);

					//Generate the random amount of money
					randomGoldValue = rand() % 1000;
					cout << "\tAnd " << randomGoldValue << " gold !" << endl << endl;
					randomGold.setValue(randomGoldValue);

					//Add those to the player inventory

					//Mark the chest as opened or something

					//BUG TO FIX
					//MARK THE CHEST AS OPEN SO THE PLAYER CAN'T CONTINUOUSLY OPEN IT
					//BY GETTING IN AND OUT OF THE ROOM

				}
			}

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

		//When boss is defeated, we should go to the town.
		system("clear");
		townDisplay.PrintDisplay();

		cout << "\tYou reached a town. You must be exhausted !" << endl;

		//Clear old sale list of the town
		townSaleList.clear();

		//Generate the inventory of the Town
		for (Item *item: itemListTotal) {
			townSaleList.emplace(item, Merchandise::getRandomNumByLevel(item));
		}

		townMerchandise.setSaleList(townSaleList);

		do{
			//Call to inTown while output is not n
			townOutput = inTown(townMerchandise);
		}while(townOutput != 'n');
	}

	//END of Sam's part



	//James' part

	//entityMain();

	//END of James' part



	//Qin' part

	//END of Qin's part

	return 0;
}
