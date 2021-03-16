/*
 * Graphics.cpp
 *
 *  Created on: Mar. 12, 2021
 *      Author: samuel
 */

#include "Graphics.h"

Graphics::Graphics(string inType, bool monst, bool box): type(inType), monster(monst), chest(box){}
Graphics::Graphics(): type("None"), display(""), monster(false), chest(false){}

void Graphics::SetDisplay(string newDisp){
	display = newDisp;
}

bool Graphics::GetMonsters(){
	return monster;
}

bool Graphics::GetChest(){
	return chest;
}

void Graphics::PrintDisplay(){
	cout << display << endl << endl;
}

Graphics::~Graphics(){}
