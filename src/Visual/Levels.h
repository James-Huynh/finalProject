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
	Levels(vector<Room> theLevel, bool isBossAliveIn = false);
	virtual ~Levels();

	//Getters and setters
	Room getCurrRoom();
	bool getBossStatus();

	//Change Room based on userInput
	//userInput should always be F, L, R or B
	void nextRoom(char userInput);

private:
	//vector of every room and how they are connected
	vector<Room> level;
	//if the boss is daed, we should get to the town
	bool isBossAlive;
	//current room we are in right now
	Room currRoom;
};

#endif /* VISUAL_LEVELS_H_ */
