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
	Graphics(string inType, bool monst, bool box = false);
	Graphics();

	//Setters
	void SetDisplay(string newDisp);

	//Getters
	bool GetMonsters();
	bool GetChest();

	//PrintFunction
	void PrintDisplay();

	//Destructor
	virtual ~Graphics();

private:
	//Name or type of panel
	string type;
	//The display of the panel
	string display;
	//If there is a monster or not on the map
	bool monster;
	//If there is a chest or not in the map
	bool chest;

};

#endif /* GRAPHICS_H_ */
