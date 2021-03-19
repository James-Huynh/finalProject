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
#include "File/FileOperation.h"
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

//void testSound() {
//	GameSounds::playTestSound();
//}

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
//    testCombat();
//    cout << endl;
//	testXp();
//	cout << endl;
	testMainMenu();
	cout << endl;
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

void loadAndSaveTest() {

    //For random values
    srand(time(NULL));

    vector<Item *> totalListItem = getTotalListItem();
    Role::initializeRoles();

    Character kingJames("James", '1');
    auto*  clothArmor= new Armor("Cloth Armor ","Some armor is better than no armor", 500, 1, 80, 0.0);
    auto*  leatherArmor= new Armor("Leather Armor","Common leather armor with basic defense", 1000, 3, 500, 0.1);

    // Swords have balanced attributes
    auto* woodSword= new Sword("Wood Sword","Some weapon is better than no weapon", 800, 1, 100, 0.6);
    auto* brassSword = new Sword("Brass Sword","Forged with care, popular with commoners", 1600, 3, 550, 0.7);

    // Axes have higher damage and less hit rate
    auto* woodAxe = new Ax("Wood axe","How much wood would a woodchuck chuck?", 900, 1, 120, 0.5);
    auto* brassAxe = new Ax("Brass axe","Weird axe, but it works and hurts", 1800, 3, 600, 0.6);

    // NOT used, special feature that allows to you to dodge and block again
    auto* woodShield= new Shield("Wood shield","Basic wooden shield, cheap to make", 100, 1, 100, 0.1);

    auto* hpPotion1= new HP_Potion("Small health potion","Heals for 50 hp",100, 1, 50);

    // NOT used, special feature that allows you to apply runes and buff your equipment
    auto* amethyst= new Diamond("Amethyst", "level 1, embed on defensive Weapon will increase 100 points of defence", 1000, 1, 100, 0.1);

    auto* bigGold= new Gold ("Big Gold", "Worth 1000",1000);



    kingJames.equipMainWeapon(brassAxe);
    kingJames.equipArmor(leatherArmor);
    kingJames.pickUpItem(hpPotion1);
    kingJames.pickUpItem(amethyst);
    kingJames.pickUpItem(clothArmor);
    kingJames.getMyInventory().showPotions();
    kingJames.getMyInventory().showWeapons();
    Character tt("tt", '2');

    FileOperation::saveChar(kingJames);
    FileOperation::saveEqu(kingJames);
    FileOperation::saveInven(kingJames);
    FileOperation::loadChar(tt);

    tt.getMyInventory().showPotions();
    tt.getMyInventory().showWeapons();


    Merchandise merchandise("uhhhh","heuheuguegherg erugherugh ",totalListItem );

    FileOperation::saveMerchandise(merchandise);

    Merchandise mm("tttttt","heu5555555555555555" );

    FileOperation::loadMerchandise(mm);

    mm.printInfo();
    merchandise.printInfo();

    int leve=99;

    FileOperation::saveLevel(leve);

    int new_leve;
    FileOperation::loadLevel(new_leve);
    cout << new_leve<<endl;


}

/*------------------------finish--------------------------*/


int main() {

	//For random values
	srand (time(NULL));
	//Initialize the roles
	Role::initializeRoles();

	//Sam's part

//	mainGameplay();

	//END of Sam's part



	//James' part
	entityMain();

	//END of James' part



	//Qin' part


//    loadAndSaveTest();
	//END of Qin's part


	/*
	for (auto & i : itemListTotal){
        delete i;
    }
	 */
	return 0;
}
