//
// Created by hello on 2021-03-13.
//

#include "Shield.h"




void Shield::printInfo() {
    cout << Item::description<<endl;
}


double Shield::getWeakenDmgProbability() const {
    return weakenDmgProbability;
}

void Shield::setWeakenDmgProbability(double weakenDmgProbability) {
    Shield::weakenDmgProbability = weakenDmgProbability;
}

Shield::Shield(const string &name, const string &description, int buyPrice, int level, int protectValue,
                double weakenDmgProbability) : Weapon(name, description, buyPrice, level, 0,
                                                                    protectValue, false),
                                                             weakenDmgProbability(weakenDmgProbability) {}

