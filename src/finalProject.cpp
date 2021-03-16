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
#include "town/Chest.h"
#include "common/itemListTotal.h"
#include "town/Merchandise.h"
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

	//mainGameplay();

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
