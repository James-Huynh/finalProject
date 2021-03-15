/*
 * Room.cpp
 *
 *  Created on: Mar. 15, 2021
 *      Author: samuel
 */

#include "Room.h"

Room::Room(Graphics inDesign, int inRoomNb): northRoom(nullptr), southRoom(nullptr), eastRoom(nullptr), westRoom(nullptr), design(inDesign), roomNb(inRoomNb){}

Room::Room(): northRoom(nullptr), southRoom(nullptr), eastRoom(nullptr), westRoom(nullptr), roomNb(0) {}

Room::~Room() {
	// TODO Auto-generated destructor stub
}

Room Room::nextRoom(char userInput){
	if(userInput == 'F')
		return *northRoom;
	else if(userInput == 'B')
		return *southRoom;
	else if(userInput == 'L')
		return *westRoom;
	else if(userInput == 'R')
		return *eastRoom;
}

void Room::setNorthRoom(Room newRoom){
	northRoom = &newRoom;
}
void Room::setSouthRoom(Room newRoom){
	southRoom = &newRoom;
}
void Room::setEastRoom(Room newRoom){
	eastRoom = &newRoom;
}
void Room::setWestRoom(Room newRoom){
	westRoom = &newRoom;
}
int Room::getRoomNumber(){
	return roomNb;
}

Graphics Room::getDesign(){
	return design;
}
