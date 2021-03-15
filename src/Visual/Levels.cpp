/*
 * Levels.cpp
 *
 *  Created on: Mar. 15, 2021
 *      Author: samuel
 */

#include "Levels.h"

Levels::Levels(vector<Room> theLevel, bool isBossAliveIn): level(theLevel), isBossAlive(isBossAliveIn) {
	currRoom = level.at(0);
}

Levels::~Levels() {
	// TODO Auto-generated destructor stub
}


Room Levels::getCurrRoom(){
	return currRoom;
}
bool Levels::getBossStatus(){
	return isBossAlive;
}

void Levels::nextRoom(char userInput){
	int currNb = currRoom.getRoomNumber();

	for(size_t i = 0; i < level.size(); i++){
		if(level.at(i).getRoomNumber() == currNb){
			currRoom = level.at(i).nextRoom(userInput);
			break;
		}
	}

}
