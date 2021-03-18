#include "Equipment.h"

Equipment::Equipment() {
	mainWeapon = nullptr;
	secWeapon = nullptr;
	armor = nullptr;
}

void Equipment::setMainWeapon(Weapon *main) {
	mainWeapon = main;
}

void Equipment::setSecWeapon(Weapon *sec) {
	secWeapon = sec;
}

void Equipment::setArmor(Weapon *armor) {
	this->armor = armor;
}

void Equipment::printEquipment() {
	if (mainWeapon == nullptr && secWeapon == nullptr && armor == nullptr) {
		cout << "\tYou have no equipment. Buona fortuna..." << endl;
	} else {
		if (mainWeapon != nullptr) {
			cout << "\tMain Weapon: " << mainWeapon->getName() << " - " << mainWeapon->getDescription() << endl;
		} else {
			cout << "\tMain Weapon: None" << endl;
		}

		if (secWeapon != nullptr) {
			cout << "\tSecondary Weapon: " << secWeapon->getName() << " - " << secWeapon->getDescription() << endl;
		} else {
			cout << "\tSecondary Weapon: None" << endl;
		}

		if (armor != nullptr) {
			cout << "\tArmor: " << armor->getName() << " - " << armor->getDescription() << endl;
		} else {
			cout << "\tArmor: None" << endl;
		}
	}

}

Weapon* Equipment::getArmor() {
	return armor;
}

Weapon* Equipment::getMainWeapon() {
	return mainWeapon;
}

Weapon* Equipment::getSecWeapon() {
	return secWeapon;
}
