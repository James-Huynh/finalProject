//
// Created by hello on 2021-03-13.
//

#include "Ax.h"


void Ax::printInfo() {
    cout << Item::description<<endl;
}

Ax::Ax(const string &name, const string &description, int buyPrice, int dmgValue,
       double dmgOnProtection) : Weapon(name, description, buyPrice, dmgValue, 0),
                                 dmgOnProtection(dmgOnProtection) {}

double Ax::getDmgOnProtection() const {
    return dmgOnProtection;
}

void Ax::setDmgOnProtection(double dmgOnProtection) {
    Ax::dmgOnProtection = dmgOnProtection;
}
