//============================================================================
// Name        : finalProject.cpp
// Authors      : Samuel Lamontagne, James Huynh, Qin
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <vector>
#include "initGraph.h"

using namespace std;

int main() {

	vector<Graphics> lvl1[3];
	Graphics one = straightLine();
	Graphics two = straightLine();
	Graphics three = endRoom();
	Graphics town1 = town();

	char output;

	lvl1[two].push_back(one);
	lvl1[one].push_back(two);
	lvl1[two].push_back(three);
	lvl1[three].push_back(two);

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
