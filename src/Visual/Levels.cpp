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
	Room* tempRoom;
	int currNb = currRoom.getRoomNumber();
	int index;

	for(size_t i = 0; i < level.size(); i++){
		if(level.at(i).getRoomNumber() == currNb){
			tempRoom = level.at(i).nextRoom(userInput);
			index = i;
			break;
		}
	}

	while(tempRoom == nullptr){
		cout << "There is no room this way! Choose another option." << endl;
		cin >> userInput;
		tempRoom = level.at(index).nextRoom(userInput);
	}

	currRoom = *tempRoom;

}
