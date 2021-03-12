//
// Created by hello on 2021-03-13.
//

#include "Shield.h"




void Shield::printInfo() {
    cout << Item::description<<endl;
}

Shield::Shield(const string &name, const string &description, int buyPrice, int protectValue,
               double weakenDmgProbability) : Weapon(name, description, buyPrice, 0, protectValue),
                                              weakenDmgProbability(weakenDmgProbability) {}

double Shield::getWeakenDmgProbability() const {
    return weakenDmgProbability;
}

void Shield::setWeakenDmgProbability(double weakenDmgProbability) {
    Shield::weakenDmgProbability = weakenDmgProbability;
}

