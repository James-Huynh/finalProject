#pragma once
#include <string>
#include <map>
#include <vector>
#include <iostream>

using namespace std;

// Each role assigns different starting attributes for the character


class Role {
    private:
        static map<string, vector<int>> listRoles;
    protected:
        string roleName; // Can either be a warrior or an assassin for now
        double baseAtt;  // Base damage value
        double baseDef;  // Base defense value


    public:
        Role();                 // Chooses the first role by default
        Role(char roleIndex);   // Given an index chosen from the console, a role is asign for the character
        static void printRoles();
        static void initializeRoles();
};