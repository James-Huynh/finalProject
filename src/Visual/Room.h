/*
 * Room.h
 *
 *  Created on: Mar. 15, 2021
 *      Author: samuel
 */

#ifndef VISUAL_ROOM_H_
#define VISUAL_ROOM_H_

#include "Graphics.h"
#include "../Entity/Character.h"

class Room {
public:
	Room(Graphics inDesign, int inRoomNb, Character enemyIn);
	Room(Graphics inDesign, int inRoomNb);
	Room();
	virtual ~Room();

	//Return the next room taking input from user
	//User input should always be F, B, L or R
	Room* nextRoom(char userInput);

	//Setters & getters
	void setNorthRoom(Room& newRoom);
	void setSouthRoom(Room& newRoom);
	void setEastRoom(Room& newRoom);
	void setWestRoom(Room& newRoom);

	void setChestState(bool chestState);

	int getRoomNumber();

	Character getEnemy();

	//Get the design of the current room
	Graphics getDesign();



private:
	//Room to every direction from this room
	Room* northRoom;
	Room* southRoom;
	Room* eastRoom;
	Room* westRoom;

	//Design and some info about the room
	Graphics design;

	//Enemy in the room
	Character enemy;

	//To identify the rooms
	int roomNb;
};

#endif /* VISUAL_ROOM_H_ */
