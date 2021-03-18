#include "Role.h"
map<string, vector<int>> Role::listRoles;		// very important to allow for static data members

Role::Role(): Role(1) {}

Role::Role(char roleIndex) {
	baseMaxHp = 100;
    switch(roleIndex) {
        case '1': {
            roleName = "Warrior";
            baseAtt = listRoles["Warrior"].at(0);
            baseDef = listRoles["Warrior"].at(1);
        } break;

        case '2': {
            roleName = "Assassin";
             baseAtt = listRoles["Assassin"].at(0);
             baseDef = listRoles["Assassin"].at(1);
        } break;

        case '3': {
            roleName = "Sentinel";
             baseAtt = listRoles["Sentinel"].at(0);
             baseDef = listRoles["Sentinel"].at(1);
        } break;

        default:
            throw "\tNot a valid choice of Role";
            break;
    }
}

void Role::initializeRoles() {
    Role::listRoles.emplace(pair<string, vector<int>>("Warrior", {100, 100}));
    Role::listRoles.emplace(pair<string, vector<int>>("Assassin", {110, 90}));
    Role::listRoles.emplace(pair<string, vector<int>>("Sentinel", {90, 110}));
}

void Role::printRoles() {
	int counter = 1;
    for(auto it = listRoles.cbegin(); it != listRoles.cend(); ++it) {
    	cout << "\t" << counter << "." << endl;
        cout << "\tRole name: " << it->first << endl;
        cout << "\tBase attack: " << it->second.at(0) << endl;
        cout << "\tBase defense: " << it->second.at(1) << endl;
        cout << endl;
        counter++;
    }
}

void Role::printMyRole() {
	cout << "\tRole name: " << roleName << endl;
}
