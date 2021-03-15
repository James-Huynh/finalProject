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



	Room currRoom = level1.getCurrRoom();
	Graphics currDisplay = currRoom.getDesign();
	char directionUser;


	do{

		//Print the first screen
		currDisplay.PrintDisplay();

		//Check if there are monsters
		if(currDisplay.GetMonsters()){
			//If there are, fight them then continue

			//IMPLEMENT FIGHT MECHANICS
		}
		//else,(and after fight) continue
		//ask the user which direction he wants to go
		cout << "Which direction would you like to go ? ('F' (Forward), 'R' (Right), 'L' (Left), 'B' (backward))" << endl;

		cin >> directionUser;
		//Verify that the input is ok
		while(directionUser != 'F' && directionUser != 'R' && directionUser != 'L' && directionUser != 'B' &&
				directionUser != 'f' && directionUser != 'r' && directionUser != 'l' && directionUser != 'b'){
			//If not, ask a good output
			cout << "Invalid output, please choose (F, R, L or B)" << endl;
			cin >> directionUser;
		}
		//If it is, verify that he can go to this room ( not *nullptr)
		//Done in the nextRoom of Levels
		//If he can, switch room
		level1.nextRoom(directionUser);


	}while(!level1.getBossStatus());

	//When boss is defeated, we should go to the town.
	//When the player is done buying things, we should go to the next level.



	/*
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
	*/

	return 0;
}
