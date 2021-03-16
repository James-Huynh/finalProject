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
#include <iostream>
#include "Entity/Character.h"
#include "Entity/Role.h"
#include "Entity/Equipment.h"
#include "town/Merchandise.h"
#include "item/weapon/Shield.h"
#include "item/weapon/Sword.h"
#include "item/weapon/Ax.h"
#include "item/weapon/Armor.h"
#include "item/potion/HP_Potion.h"

using namespace std;


//James' part
void testEquipment() {
    Role::initializeRoles();
    Character kingSam("Sam", '1');

//    Sword mySword("iron sword","level 2 with 20% pierce through armor",500,2,500,0.65);
//    Armor myArmor("Bamen","level 4 with 80% against the damage",10000,4,5000,0.8);
//    Shield myShield("iron shield","level 2 with 20% pierce through armor",500,2,500,0.10);

    kingSam.printEquipment();
    cout << endl;

	Weapon* mySword = new Sword("iron sword","level 2 with 20% pierce through armor",500,2,500,0.65);
	Weapon* myArmor = new Armor("Bamen","level 4 with 80% against the damage",10000,4,5000,0.8);
	Weapon* myShield = new Shield("iron shield","level 2 with 20% pierce through armor",500,2,500,0.10);

    kingSam.equipMainWeapon(mySword);
    kingSam.equipArmor(myArmor);
    kingSam.equipSecWeapon(myShield);

    kingSam.printEquipment();
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

	Character kingJames("James", '1');
	Character queenSam("Sam", '1');

	Weapon* mySword = new Sword("wood sword","level 1 with 5% pierce through armor",100,1,100,0.55);
	Weapon* myArmor = new Armor("cloth armor ","level 2 with 10% against the damage",500,2,180,0.1);	// testing values

	kingJames.equipMainWeapon(mySword);
	queenSam.equipArmor(myArmor);

	// This is physical abuse
	cout << "Initial HP of Sam: " << queenSam.getHp() << endl;
	for (int i = 0; i < 10; ++i) {
		cout << "Round: " << i+1 << endl;
		kingJames.basicAttack(&queenSam);
		cout << "HP of Sam: " << queenSam.getHp() << endl << endl;
	}


}

void entityMain() {
    testRoles();
    cout << endl;
    testCharacter();
    cout << endl;
    testEquipment();
    cout << endl;
    testCombat();
}
//END of James' part





int main() {

	srand (time(NULL));
//	//Sam' part
//
//	Levels level1;
//	createLevelOne(level1);
//
//	Levels level2;
//	createLevelTwo(level2);
//
//
//	Room currRoom = level1.getCurrRoom();
//	Graphics currDisplay = currRoom.getDesign();
//	char directionUser;
//	system("clear");
//
//
//	do{
//
//		cout << endl << endl << "\t\t\t\tYou are in Room #" << currRoom.getRoomNumber() << endl;
//		//Print the first screen
//		currDisplay.PrintDisplay();
//
//		//Check if there are monsters
//		if(currDisplay.GetMonsters()){
//			//If there are, fight them then continue
//
//			//IMPLEMENT FIGHT MECHANICS
//		}
//		//Check if there is a chest
//		//else,(and after fight) continue
//		//ask the user which direction he wants to go
//		cout << "\tWhich direction would you like to go ? ('F' (Forward), 'R' (Right), 'L' (Left), 'B' (backward))" << endl;
//
//		cin >> directionUser;
//		//Verify that the input is ok
//		while(directionUser != 'F' && directionUser != 'R' && directionUser != 'L' && directionUser != 'B' &&
//				directionUser != 'f' && directionUser != 'r' && directionUser != 'l' && directionUser != 'b'){
//			//If not, ask a good output
//			cout << "Invalid output, please choose (F, R, L or B)" << endl;
//			cin >> directionUser;
//		}
//		//If it is, verify that he can go to this room ( not *nullptr)
//		//Done in the nextRoom of Levels
//		//If he can, switch room
//		level1.nextRoom(directionUser);
//
//
//		//Reassign the current Room and Display to work with them
//		currRoom = level1.getCurrRoom();
//		currDisplay = currRoom.getDesign();
//
//		//Clear the real terminal screen
//		//For linux
//		system("clear");
//		//For windows
//		//system("CLS");
//
//
//	}while(!level1.getBossStatus());
//
//	//When boss is defeated, we should go to the town.
//	//When the player is done buying things, we should go to the next level.
//
//	//END of Sam's part



	//James' part
	entityMain();
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
