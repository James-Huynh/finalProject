/*
 * Graphics.cpp
 *
 *  Created on: Mar. 12, 2021
 *      Author: samuel
 */

#include "Graphics.h"

Graphics::Graphics(string inType, bool monst): type(inType), monster(monst){}

void Graphics::SetDisplay(string newDisp){
	display = newDisp;
}
void Graphics::SetDirections(string newDir){
	possibleDirections = newDir;
}

bool Graphics::GetMonsters(){
	return monster;
}

bool Graphics::ValidateDirection(char userInput){
	bool canGo = false;

	for(char c: possibleDirections){
		if(userInput == c)
			canGo = true;
	}

	return canGo;
}

void Graphics::PrintDisplay(){
	cout << display << endl << endl;
}

Graphics::~Graphics(){}
