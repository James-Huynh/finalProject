//============================================================================
// Name        : finalProject.cpp
// Authors      : Samuel Lamontagne, James Huynh, Qin
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <vector>
#include <iomanip>
#include "Visual/initGraph.h"
#include "Visual/initLevels.h"
#include "Visual/Room.h"
#include "Visual/Levels.h"
#include "Item/Item.h"
#include "Town/Chest.h"
#include "Common/itemListTotal.h"
#include "Town/Merchandise.h"
#include "Entity/Character.h"
#include "Entity/Role.h"
#include "Entity/Equipment.h"
#include "Common/GameSounds.h"
#include "gameplay.h"


using namespace std;


//James' part
void testEquipment() {
    Role::initializeRoles();
    Character kingSam("Sam", '1');

    kingSam.printEquipment();
    cout << endl;

    Weapon* myArmor = new Armor("Achilles Armor", "Legendary armor created by Hephaestus and said to be impenetrable", 10000, 10, 5000, 0.5);
	Weapon* mySword = new Sword("Excalibur","Legendary sword forged on the Isle of Avalon and said to belong to the true king", 16000, 10, 6000, 1.0);
	Weapon* myShield = new Shield("Brass shield","Fancy shield with decent protection", 1000, 5, 1000, 0.3);

    kingSam.equipMainWeapon(mySword);
    kingSam.equipArmor(myArmor);
    kingSam.equipSecWeapon(myShield);

    kingSam.printEquipment();
    kingSam.printCharacter();
    cout << endl;
}

void testCharacter() {
    Role::initializeRoles();
    Character kingSam("Sam", '1');
    kingSam.printCharacter();
}

void testRoles() {
    Role::initializeRoles();
    Role::printRoles();
}

void testCombat() {
	Role::initializeRoles();

	// warrior and sentinel
	Character kingJames("James", '3');
	Character queenSam("Sam", '2');

	Weapon* mySword = new Sword("Test Sword", "Some weapon is better than no weapon", 800, 1, 100, 0.5);
	Weapon* myArmor = new Armor("Test Armor", "Some armor is better than no armor", 500, 1, 80, 0.5);
	kingJames.equipMainWeapon(mySword);
	queenSam.equipArmor(myArmor);

	// This is physical abuse
	cout << "Initial HP of Sam: " << queenSam.getHp() << endl;
	for (int i = 0; i < 20; ++i) {
		cout << "Round: " << i+1 << endl;
		kingJames.basicAttack(&queenSam);
		cout << "\tHP of Sam: " << queenSam.getHp() << endl << endl;
	}

}

void testSound() {
	GameSounds::playTestSound();
}

void testXp() {
    Character kingSam("Sam", '1');
    cout << "\tInitial Character" << endl;
    kingSam.printCharacter();
    cout << endl;
    cout << "\tAfter a fight Character" << endl;
    kingSam.addXp(-1);
    kingSam.printCharacter();
}

void testMainMenu() {
	Graphics mainScreen = mainMenu();
	mainScreen.PrintDisplay();
}

void testDeathScreen() {
	Graphics deathScreen = deathVisuals();
	deathScreen.PrintDisplay();
}



void entityMain() {
//	cout << fixed << setprecision(0);
//    testRoles();
//    cout << endl;
//    testCharacter();
//    cout << endl;
//    testEquipment();
//    cout << endl;
    testCombat();
    cout << endl;
//	testXp();
//	cout << endl;
//	testMainMenu();
//	cout << endl;
//	testDeathScreen();
//	cout << endl;
}
//END of James' part


/*------------------------ qin--------------------------*/
void qinMain(){
    Merchandise merchandise("Depanneur711", "weapons and potions for sale");
    map<Item *, int> saleList;

    vector<Item *> itemListTotal = getTotalListItem();


    Inventory inventory("default Bag");
    for(int i =0 ; i <20 ; i+=3)
        inventory.addItem(itemListTotal.at(i),1);

    inventory.addItem(itemListTotal.at(18),3);


    inventory.showPotions();
    inventory.showMyMoney();
    inventory.showWeapons();
}
/*------------------------finish--------------------------*/


int main() {

	//For random values
	srand (time(NULL));
	//Initialize the roles
	Role::initializeRoles();

	//Sam's part

	mainGameplay();

	//END of Sam's part



	//James' part
	//entityMain();

	//END of James' part



	//Qin' part

	//END of Qin's part


	/*
	for (auto & i : itemListTotal){
        delete i;
    }
	 */
	return 0;
}
