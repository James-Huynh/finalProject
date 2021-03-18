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

//temporary
#include "gameplay.h"


using namespace std;


//James' part
void testEquipment() {
    Role::initializeRoles();
    Character kingSam("Sam", '1');

    kingSam.printEquipment();
    cout << endl;

    Weapon *mySword = new Sword("iron sword", "level 2 with 20% pierce through armor", 500, 2, 500, 0.65);
    Weapon *myArmor = new Armor("iron armor", "level 3 with 20% against the damage", 1000, 3, 700, 0.2);
    Weapon *myShield = new Shield("iron shield", "level 2 with 20% pierce through armor", 500, 2, 500, 0.10);

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
    testEquipment();
    cout << endl;
    testCombat();
}
//END of James' part


/*-------------------qin----------------------*/

void gameSave() {
    vector<Item *> totalListItem = getTotalListItem();
    Merchandise merchandise("hello world", "this",totalListItem);
    Character kingSam("tom");
    int level_i = 1;
    Weapon *mySword = new Sword("iron sword", "level 2 with 20% pierce through armor", 500, 2, 500, 0.65);
    Weapon *myArmor = new Armor("iron armor", "level 3 with 20% against the damage", 1000, 3, 700, 0.2);
    Weapon *myShield = new Shield("iron shield", "level 2 with 20% pierce through armor", 500, 2, 500, 0.10);

    kingSam.equipMainWeapon(mySword);
    kingSam.equipArmor(myArmor);
    kingSam.equipSecWeapon(myShield);

    Inventory inventory("default bag");

    inventory.addItem(totalListItem.at(17), 5);
    inventory.addItem(totalListItem.at(2), 1);
    inventory.addItem(totalListItem.at(3), 1);
    inventory.addItem(totalListItem.at(15), 1);

    kingSam.setMyInventory(inventory);
    inventory.addItem(totalListItem.at(1), 100);
    kingSam.getMyInventory().showWeapons();
    kingSam.getMyInventory().showPotions();
    kingSam.getMyInventory().showMyMoney();
}
void gameLoad() {
    Character kingSam("tom");
    int level_j;
    Merchandise m("711", "this is for test");
    Character c("tom");
    int level_j;

    FileOperation::loadGame("myFile2.txt", c, m, level_j);
    c.getMyEquipment().printEquipment();
    c.getMyInventory().showPotions();
    c.getMyInventory().showWeapons();

    cout << level_j<<endl;

    m.printInfo();



}


int main() {

    //For random values
    srand(time(NULL));
    //Initialize the roles
    Role::initializeRoles();

    //Sam's part

    //mainGameplay();

    //END of Sam's part



    //James' part
//    entityMain();

    //END of James' part



    //Qin' part

    gameSaveAndLoad();
    //END of Qin's part


    /*
    for (auto & i : itemListTotal){
        delete i;
    }
     */
    return 0;
}
