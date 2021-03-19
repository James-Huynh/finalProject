/*
 * initLevels.h
 *
 *  Created on: Mar. 15, 2021
 *      Author: samuel
 */

#ifndef VISUAL_INITLEVELS_H_
#define VISUAL_INITLEVELS_H_
#include "initGraph.h"
#include "Levels.h"

void createLevelOne(Levels& currLevel){

	Graphics one = straightLine();
	Graphics two = chestRoomWithExit();
	Graphics three = endRoom();

	Character boss("Ragnar", '3');
	Weapon* myArmor = new Armor("Cloth Armor ","Some armor is better than no armor", 500, 1, 80, 0.0);
	boss.equipArmor(myArmor);
	Weapon* mySword = new Sword("Wood Sword","Some weapon is better than no weapon", 800, 1, 100, 0.6);
	boss.equipMainWeapon(mySword);

	Room* roomOne = new Room{one, 1};
	Room* roomTwo = new Room{two, 2};
	Room* roomThree = new Room{three, 3, boss};

	roomOne->setNorthRoom(*roomTwo);

	roomTwo->setSouthRoom(*roomOne);
	roomTwo->setNorthRoom(*roomThree);

	roomThree->setSouthRoom(*roomTwo);

	currLevel.addRoom(*roomOne);
	currLevel.addRoom(*roomTwo);
	currLevel.addRoom(*roomThree);

}

void createLevelTwo(Levels& currLevel){

	Graphics firstScreen = straightLine();
	Graphics secondScreen = twoWayY();
	Graphics leftY = straightLine();
	Graphics rightYBack = straightLineEnemy();
	Graphics leftYY  = endRoom();
	Graphics rightY = straightLine();
	Graphics rightYY = chestRoom();

	Character boss("Alexander the great", '2');

	Weapon* myArmor = new Armor("Cloth Armor ","Some armor is better than no armor", 500, 1, 85, 0.0);
	boss.equipArmor(myArmor);
	Weapon* mySword = new Sword("Wood Sword","Some weapon is better than no weapon", 800, 1, 105, 0.6);
	boss.equipMainWeapon(mySword);
	boss.addXp(100);

	Character commonMonster("Ghost", '3');
	Weapon* mySecondArmor = new Armor("Cloth Armor ","Some armor is better than no armor", 500, 1, 75, 0.0);
	commonMonster.equipArmor(mySecondArmor);
	Weapon* mySecondSword = new Sword("Wood Sword","Some weapon is better than no weapon", 800, 1, 95, 0.6);
	commonMonster.equipMainWeapon(mySecondSword);

	Room* roomOne = new Room{firstScreen, 1};
	Room* roomTwo = new Room{secondScreen, 2};
	Room* roomThree = new Room{leftY, 3};
	Room* roomFour = new Room{leftYY, 4, boss};
	Room* roomFive = new Room{rightY, 5};
	Room* roomFivePoint = new Room{rightYBack, 7, commonMonster};
	Room* roomSix = new Room{rightYY, 6};

	roomOne->setNorthRoom(*roomTwo);

	roomTwo->setEastRoom(*roomFivePoint);
	roomTwo->setWestRoom(*roomThree);
	roomTwo->setSouthRoom(*roomOne);

	roomThree->setSouthRoom(*roomTwo);
	roomThree->setNorthRoom(*roomFour);

	roomFour->setSouthRoom(*roomThree);

	roomFive->setNorthRoom(*roomSix);
	roomFive->setSouthRoom(*roomTwo);

	roomSix->setSouthRoom(*roomFive);

	roomFivePoint->setSouthRoom(*roomTwo);
	roomFivePoint->setNorthRoom(*roomSix);

	currLevel.addRoom(*roomOne);
	currLevel.addRoom(*roomTwo);
	currLevel.addRoom(*roomThree);
	currLevel.addRoom(*roomFour);
	currLevel.addRoom(*roomFive);
	currLevel.addRoom(*roomSix);
	currLevel.addRoom(*roomFivePoint);

}

//Level 3
/*Character boss("Genghis Khan", '1');

	Weapon* myArmor = new Armor("leather armor ","level 2 with 10% against the damage",500,2,90,0.1);
	boss.equipArmor(myArmor);
	Weapon* mySword = new Sword("iron sword","level 1 with 5% pierce through armor",100,1,110,0.55);
	boss.equipMainWeapon(mySword);*/




#endif /* VISUAL_INITLEVELS_H_ */
