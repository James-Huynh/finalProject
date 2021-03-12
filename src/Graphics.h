/*
 * Graphics.h
 *
 *  Created on: Mar. 12, 2021
 *      Author: samuel
 */

#ifndef GRAPHICS_H_
#define GRAPHICS_H_
#include <iostream>

using namespace std;

class Graphics {

public:
	//Basic constructors
	Graphics(string inType, bool monst);

	//Setters
	void SetDisplay(string newDisp);
	void SetDirections(string newDir);

	//Getters
	bool GetMonsters();

	//PrintFunction
	void PrintDisplay();

	//Validate if the userDirection is valid
	bool ValidateDirection(char userInput);

	//Destructor
	virtual ~Graphics();

private:
	//Name or type of panel
	string type;
	//The display of the panel
	string display;
	//If there is a monster or not on the map
	bool monster;
	//In what direction can you go from this panel (F, L, R, B)
	string possibleDirections;

};

#endif /* GRAPHICS_H_ */
