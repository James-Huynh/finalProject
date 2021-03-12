//
// Created by hello on 2021-03-13.
//

#include "Armor.h"

int Armor::getProtectBonus() const {
    return protectBonus;
}

void Armor::setProtectBonus(int protectBonus) {
    Armor::protectBonus = protectBonus;
}

Armor::Armor(const string &name, const string &description, int buyPrice, int dmgValue, int protectValue,
             int protectBonus, double weakenDmgProbability) : Weapon(name, description, buyPrice, dmgValue, protectValue),
                                                            protectBonus(protectBonus),
                                                            weakenDmgProbability(weakenDmgProbability) {}

void Armor::printInfo() {
    cout << Item::description<<endl;
}

double Armor::getWeakenDmgProbability() const {
    return weakenDmgProbability;
}

void Armor::setWeakenDmgProbability(double weakenDmgProbability) {
    Armor::weakenDmgProbability = weakenDmgProbability;
}
