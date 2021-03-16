/*
 * Levels.cpp
 *
 *  Created on: Mar. 15, 2021
 *      Author: samuel
 */

#include "Levels.h"

Levels::Levels(): isBossAlive(false){

}

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

void Levels::setBossStatus(bool bossStatus){
	isBossAlive = bossStatus;
}

void Levels::setChestState(bool chestState){
	int currNb = currRoom.getRoomNumber();

	for(size_t i = 0; i < level.size(); i++){
			if(level.at(i).getRoomNumber() == currNb){
				level.at(i).setChestState(chestState);
				break;
			}
		}
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
		while(userInput != 'F' && userInput != 'R' && userInput != 'L' && userInput != 'B' &&
				userInput != 'f' && userInput != 'r' && userInput != 'l' && userInput != 'b'){
			//If not, ask a good output
			cout << "Invalid output, please choose (F, R, L or B)" << endl;
			cin >> userInput;
		}
		tempRoom = level.at(index).nextRoom(userInput);
	}

	currRoom = *tempRoom;

}

void Levels::addRoom(Room newRoom){
	level.push_back(newRoom);

	if(level.size() == 1){
		currRoom = level.at(0);
	}

}
