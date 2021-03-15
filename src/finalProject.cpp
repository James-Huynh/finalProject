//============================================================================
// Name        : finalProject.cpp
// Authors      : Samuel Lamontagne, James Huynh, Qin
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <vector>
#include "Visual/initGraph.h"
#include "Visual/Room.h"
#include "Visual/Levels.h"

using namespace std;

int main() {

	vector<Room> lvl1;
	Graphics one = straightLine();
	Graphics two = straightLine();
	Graphics three = endRoom();
	Graphics town1 = town();

	Room roomOne(one, 1);
	Room roomTwo(two, 2);
	Room roomThree(three, 3);

	roomOne.setNorthRoom(roomTwo);
	roomTwo.setSouthRoom(roomOne);
	roomTwo.setNorthRoom(roomThree);
	roomThree.setSouthRoom(roomTwo);

	lvl1.push_back(roomOne);
	lvl1.push_back(roomTwo);
	lvl1.push_back(roomThree);

	Levels level1(lvl1);

	do{



	}while(!level1.getBossStatus());


	char output;

	one.PrintDisplay();
	cout << "do you want to continue ? y/n" << endl;
	cin >> output;
	//Clear the real terminal screen
	//For linux
	system("clear");
	//For windows
	//system("CLS");
	town1.PrintDisplay();

	return 0;
}
