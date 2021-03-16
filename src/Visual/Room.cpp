/*
 * Room.cpp
 *
 *  Created on: Mar. 15, 2021
 *      Author: samuel
 */

#include "Room.h"

Room::Room(Graphics inDesign, int inRoomNb, Character enemyIn): design(inDesign), roomNb(inRoomNb){
	northRoom = nullptr;
	southRoom = nullptr;
	eastRoom  = nullptr;
	westRoom  = nullptr;
	enemy = enemyIn;
}

Room::Room(Graphics inDesign, int inRoomNb): design(inDesign), roomNb(inRoomNb){
	northRoom = nullptr;
	southRoom = nullptr;
	eastRoom  = nullptr;
	westRoom  = nullptr;
}

Room::Room(): northRoom(nullptr), southRoom(nullptr), eastRoom(nullptr), westRoom(nullptr), roomNb(0) {
	Character enemyIn("None", '1');
	enemy = enemyIn;
}

Room::~Room() {
	// TODO Auto-generated destructor stub
}

Room* Room::nextRoom(char userInput){
	if(userInput == 'F' || userInput == 'f')
		return northRoom;
	else if(userInput == 'B' || userInput == 'b')
		return southRoom;
	else if(userInput == 'L' || userInput == 'l')
		return westRoom;
	else if(userInput == 'R' || userInput == 'r')
		return eastRoom;
}

void Room::setNorthRoom(Room& newRoom){
	northRoom = &newRoom;
}
void Room::setSouthRoom(Room& newRoom){
	southRoom = &newRoom;
}
void Room::setEastRoom(Room& newRoom){
	eastRoom = &newRoom;
}
void Room::setWestRoom(Room& newRoom){
	westRoom = &newRoom;
}
void Room::setChestState(bool chestState){
	design.SetChest(chestState);
}
int Room::getRoomNumber(){
	return roomNb;
}

Character Room::getEnemy(){
	return enemy;
}

Graphics Room::getDesign(){
	return design;
}
