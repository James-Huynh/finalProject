//
// Created by hello on 2021-03-13.
//

#include "Sword.h"



Sword::Sword(const string &name, const string &description, int buyPrice, int level, int dmgValue,
            double dmgOnProtection) : Weapon(name, description, buyPrice, level, dmgValue, 0,
                                                             true), dmgOnProtection(dmgOnProtection) {

}


void Sword::printInfo() {
    cout << Item::description<<endl;
}

double Sword::getDmgOnProtection() const {
    return dmgOnProtection;
}

void Sword::setDmgOnProtection(double dmgOnProtection) {
    Sword::dmgOnProtection = dmgOnProtection;
}

