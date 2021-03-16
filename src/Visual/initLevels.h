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
	Graphics two = straightLine();
	Graphics three = endRoom();

	Character boss("Ragnar", '1');

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
	Graphics leftYY  = endRoom();
	Graphics rightY = straightLine();
	Graphics rightYY = chestRoom();

	Character boss("Ragnar", '1');

	Weapon* mySword = new Sword("wood sword","level 1 with 5% pierce through armor",100,1,100,0.55);
	// testing values
	boss.equipMainWeapon(mySword);

	Room* roomOne = new Room{firstScreen, 1};
	Room* roomTwo = new Room{secondScreen, 2};
	Room* roomThree = new Room{leftY, 3};
	Room* roomFour = new Room{leftYY, 4, boss};
	Room* roomFive = new Room{rightY, 5};
	Room* roomSix = new Room{rightYY, 6};

	roomOne->setNorthRoom(*roomTwo);

	roomTwo->setEastRoom(*roomFive);
	roomTwo->setWestRoom(*roomThree);
	roomTwo->setSouthRoom(*roomOne);

	roomThree->setSouthRoom(*roomTwo);
	roomThree->setNorthRoom(*roomFour);

	roomFour->setSouthRoom(*roomThree);

	roomFive->setNorthRoom(*roomSix);
	roomFive->setSouthRoom(*roomTwo);

	roomSix->setSouthRoom(*roomFive);

	currLevel.addRoom(*roomOne);
	currLevel.addRoom(*roomTwo);
	currLevel.addRoom(*roomThree);
	currLevel.addRoom(*roomFour);
	currLevel.addRoom(*roomFive);
	currLevel.addRoom(*roomSix);

}

//Level 3
/*Weapon* mySword = new Sword("wood sword","level 1 with 5% pierce through armor",100,1,100,0.55);
	Weapon* myArmor = new Armor("cloth armor ","level 2 with 10% against the damage",500,2,180,0.1);
	// testing values
	kingJames.equipMainWeapon(mySword);
	queenSam.equipArmor(myArmor);
	*/




#endif /* VISUAL_INITLEVELS_H_ */
