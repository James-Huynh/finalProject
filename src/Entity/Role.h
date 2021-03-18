#pragma once
#include <string>
#include <map>
#include <vector>
#include <iostream>

using namespace std;

// Each role assigns different starting attributes for the character


class Role {
    private:
        static map<string, vector<int>> listRoles;		// Game defined, predetermined
    protected:
        string roleName;
        double baseAtt;  	// Base damage value from the role
        double baseDef;  	// Base defense value from the role
        double baseMaxHp; 	// Base max health points from all roles


    public:
        Role();                 			// Chooses the first role by default
        Role(char roleIndex);   			// Given an index chosen from the console, a role is assigned for the character
        void printMyRole();				// Prints the role of the current character
        static void printRoles();			// Prints all the roles available in the game
        static void initializeRoles();	// Must be called at the start of the program
};
