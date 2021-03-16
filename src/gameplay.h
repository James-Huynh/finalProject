/*
 * gameplay.h
 *
 *  Created on: Mar. 16, 2021
 *      Author: samuel
 */

#ifndef GAMEPLAY_H_
#define GAMEPLAY_H_
#include <iostream>
#include <vector>
#include "Visual/initGraph.h"
#include "Visual/initLevels.h"
#include "Visual/Room.h"
#include "Visual/Levels.h"


char inTown(Merchandise townMerchandise){
//Will probably need to receive the player to access his inventory
	char option;
	char buyOption;


	cout << "\tWhat would you like to do ?" << endl << endl;
	cout << "\th - Heal yourself" << endl;
	cout << "\tb - See what the merchands have to offer" << endl;
	cout << "\tn - Go to the next level" << endl;

	cin >> option;

	switch(option){
	case('h'):

			//Put the player's health to max health
			cout << "\tYour player's health is now at the max ! " << endl;
			break;

	case('b'):
		cout << "\tHere is what is in store for this town !" << endl << endl;
		townMerchandise.printInfo();
		cout << endl;
		cout << "\tWould you like to buy something ? (y/n)" << endl;
		cin >> buyOption;

		while(buyOption != 'y' && buyOption != 'n'){
			cout << "\tNot a valid option, choose between y and n" << endl;
			cin >> buyOption;
		}

		if(buyOption == 'y'){
			//IMPLEMENT MECHANICS TO BUY AN ITEM WHICH SHOULD BE :
			//Ask for the number of the item
			//Check that number is valid
			//Ask for the quantity
			//Check that the quantity is valid
			//Check if player has enough money
			//if yes, buy. (remove from shop, put in his inventory, remove the money from his inventory)
			//if not, say that he doesn't have enough money and ask if he wants to buy something else
		} else {
			cout << "\tOk, no problem, good luck on your adventure !" << endl;
		}
		break;

	case('n'):
		break;

	default:

		cout << "\tNot a valid option" << endl;
		break;

	}
	return option;
}





#endif /* GAMEPLAY_H_ */
