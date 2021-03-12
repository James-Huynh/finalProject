//
// Created by hello on 2021-03-13.
//

#include "Sword.h"

Sword::Sword(const string &name, const string &description, int buyPrice, int dmgValue, int protectValue,
             int dmgOnArmor) : Weapon(name, description, buyPrice, dmgValue, protectValue), dmgOnArmor(dmgOnArmor) {
    this->isAttack= true;
}

int Sword::getDmgOnArmor() const {
    return dmgOnArmor;
}

void Sword::setDmgOnArmor(int dmgOnArmor) {
    Sword::dmgOnArmor = dmgOnArmor;
}


void Sword::printInfo() {
    cout << Item::description<<endl;
}

