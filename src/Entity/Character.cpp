#include "Character.h"


Character::Character(string name, char roleId) : Role(roleId) {
    charName = name;
    xp = 0.0;
    hp = 100.0;
    isAlive = true;
}

void Character::printCharacter() {
    cout << "Name: " << charName << endl;
    printRoles();
}


void Character::printEquipment() {
	myEquipment.printEquipment();
}


void Character::equipMainWeapon(Weapon *mainWeap) {
	myEquipment.setMainWeapon(mainWeap);
}

void Character::equipSecWeapon(Weapon *secWeap) {
	myEquipment.setSecWeapon(secWeap);
}

void Character::equipArmor(Weapon *armor) {
	myEquipment.setArmor(armor);
}

void Character::buyItems() {

}

void Character::sellItems() {

}
