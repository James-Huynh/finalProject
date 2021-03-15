/*
 * Graphics.cpp
 *
 *  Created on: Mar. 12, 2021
 *      Author: samuel
 */

#include "Graphics.h"

Graphics::Graphics(string inType, bool monst): type(inType), monster(monst){}
Graphics::Graphics(): type("None"), display(""), monster(false){}

void Graphics::SetDisplay(string newDisp){
	display = newDisp;
}

bool Graphics::GetMonsters(){
	return monster;
}

void Graphics::PrintDisplay(){
	cout << display << endl << endl;
}

Graphics::~Graphics(){}
