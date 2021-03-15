#include "Character.h"


Character::Character(string name, char roleId) : Role(roleId) {
    charName = name;
    xp = 0;
    isAlive = true;
}

void Character::printCharacter() {
    cout << "Name: " << charName << endl;
    printRoles();
}
