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

void Equipment::printEquipment() const {
	if (mainWeapon == nullptr && secWeapon == nullptr && armor == nullptr) {
		cout << "You have no equipment. Buona fortuna..." << endl;
	} else {
		if (mainWeapon != nullptr) {
			cout << "Main Weapon: " << mainWeapon->getDescription() << endl;
		} else {
			cout << "Main Weapon: None" << endl;
		}

		if (secWeapon != nullptr) {
			cout << "Secondary Weapon: " << secWeapon->getDescription() << endl;
		} else {
			cout << "Secondary Weapon: None" << endl;
		}

		if (armor != nullptr) {
			cout << "Armor: " << armor->getDescription() << endl;
		} else {
			cout << "Armor: None" << endl;
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
