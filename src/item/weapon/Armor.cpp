//
// Created by hello on 2021-03-13.
//

#include "Armor.h"






void Armor::printInfo() {
    cout << Item::description<<endl;
}

double Armor::getWeakenDmgProbability() const {
    return weakenDmgProbability;
}

void Armor::setWeakenDmgProbability(double weakenDmgProbability) {
    Armor::weakenDmgProbability = weakenDmgProbability;
}

Armor::Armor(const string &name, const string &description, int buyPrice, int level, int protectValue,
              double weakenDmgProbability) : Weapon(name, description, buyPrice, level, 0,
                                                                  protectValue, false),
                                                           weakenDmgProbability(weakenDmgProbability) {}

