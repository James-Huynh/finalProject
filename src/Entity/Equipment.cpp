#include "Equipment.h"

Equipment::Equipment() {
    mainWeapon = nullptr;
    secWeapon = nullptr;
    armor = nullptr;
}

void Equipment::setMainWeapon(Weapon* main) {
    mainWeapon = main;
}

void Equipment::setSecWeapon(Weapon* sec) {
    secWeapon = sec;
}

void Equipment::setArmor(Weapon* armor) {
    this->armor = armor;
}