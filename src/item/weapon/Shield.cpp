//
// Created by hello on 2021-03-13.
//

#include "Shield.h"
int Shield::getProtectBonus() const {
    return protectBonus;
}

void Shield::setProtectBonus(int protectBonus) {
    Shield::protectBonus = protectBonus;
}


void Shield::printInfo() {
    cout << Item::description<<endl;
}

Shield::Shield(const string &name, const string &description, int buyPrice, int dmgValue, int protectValue,
               int protectBonus, double weakenDmgProbability) : Weapon(name, description, buyPrice, dmgValue,
                                                                       protectValue), protectBonus(protectBonus),
                                                                weakenDmgProbability(weakenDmgProbability) {}
