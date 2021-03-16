/*
 * Graphics.cpp
 *
 *  Created on: Mar. 12, 2021
 *      Author: samuel
 */

#include "Graphics.h"

Graphics::Graphics(string inType, bool monst, bool isBoss, bool box): type(inType), monster(monst), chest(box), boss(isBoss){}
Graphics::Graphics(): type("None"), display(""), monster(false), chest(false), boss(false){}

void Graphics::SetDisplay(string newDisp){
	display = newDisp;
}

void Graphics::SetChest(bool chestState){
	chest = chestState;
}

bool Graphics::GetMonsters(){
	return monster;
}

bool Graphics::GetChest(){
	return chest;
}

bool Graphics::GetBoss(){
	return boss;
}

void Graphics::PrintDisplay(){
	cout << display << endl << endl;
}

Graphics::~Graphics(){}
