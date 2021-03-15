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

	Room* roomOne = new Room{one, 1};
	Room* roomTwo = new Room{two, 2};
	Room* roomThree = new Room{three, 3};

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
	Graphics rightYY = emptyRoom();

	Room* roomOne = new Room{firstScreen, 1};
	Room* roomTwo = new Room{secondScreen, 2};
	Room* roomThree = new Room{leftY, 3};
	Room* roomFour = new Room{leftYY, 4};
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




#endif /* VISUAL_INITLEVELS_H_ */
