/*
 * Levels.h
 *
 *  Created on: Mar. 15, 2021
 *      Author: samuel
 */

#ifndef VISUAL_LEVELS_H_
#define VISUAL_LEVELS_H_

#include <vector>
#include "Room.h"

using namespace std;

class Levels {
public:
	Levels();
	Levels(vector<Room> theLevel, bool isBossAliveIn = false);
	virtual ~Levels();

	//Getters and setters
	Room getCurrRoom();
	bool getBossStatus();
	void setBossStatus(bool bossStatus);
	void setChestState(bool chestState);

	//Change Room based on userInput
	//userInput should always be F, L, R or B
	void nextRoom(char userInput);

	//add a new room to the vector of rooms
	void addRoom(Room newRoom);

private:
	//vector of every room and how they are connected
	vector<Room> level;
	//if the boss is dead, we should get to the town
	bool isBossAlive;
	//current room we are in right now
	Room currRoom;
};

#endif /* VISUAL_LEVELS_H_ */
