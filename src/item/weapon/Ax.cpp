//
// Created by hello on 2021-03-13.
//

#include "Ax.h"

int Ax::getProtectBonus() const {
    return protectBonus;
}

void Ax::setProtectBonus(int protectBonus) {
    Ax::protectBonus = protectBonus;
}

Ax::Ax(const string &name, const string &description, int buyPrice, int dmgValue, int protectValue,
             int protectBonus) : Weapon(name, description, buyPrice, dmgValue, protectValue),
                                 protectBonus(protectBonus) {}
void Ax::printInfo() {
    cout << Item::description<<endl;
}
