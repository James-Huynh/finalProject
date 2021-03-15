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
#include "Visual/initLevels.h"
#include "Visual/Room.h"
#include "Visual/Levels.h"

using namespace std;

int graphicMain() {

	Levels level1;
	createLevelOne(level1);

	Levels level2;
	createLevelTwo(level2);


	Room currRoom = level1.getCurrRoom();
	Graphics currDisplay = currRoom.getDesign();
	char directionUser;
	system("clear");


	do{

		cout << endl << endl << "\t\t\t\tYou are in Room #" << currRoom.getRoomNumber() << endl;
		//Print the first screen
		currDisplay.PrintDisplay();

		//Check if there are monsters
		if(currDisplay.GetMonsters()){
			//If there are, fight them then continue

			//IMPLEMENT FIGHT MECHANICS
		}
		//else,(and after fight) continue
		//ask the user which direction he wants to go
		cout << "\tWhich direction would you like to go ? ('F' (Forward), 'R' (Right), 'L' (Left), 'B' (backward))" << endl;

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


		//Reassign the current Room and Display to work with them
		currRoom = level1.getCurrRoom();
		currDisplay = currRoom.getDesign();

		//Clear the real terminal screen
		//For linux
		system("clear");
		//For windows
		//system("CLS");


	}while(!level1.getBossStatus());

	//When boss is defeated, we should go to the town.
	//When the player is done buying things, we should go to the next level.



	/*
	char output;

	one.PrintDisplay();
	cout << "do you want to continue ? y/n" << endl;
	cin >> output;
	town1.PrintDisplay();
	*/

	return 0;
}
