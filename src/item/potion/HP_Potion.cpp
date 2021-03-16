//
// Created by hello on 2021-03-13.
//

#include "HP_Potion.h"

HP_Potion::HP_Potion(const string &name, const string &description, int buyPrice, int level, int basePoint) : Potion(
        name, description, buyPrice, level, basePoint) {}

void HP_Potion::printInfo() {
    Potion::printInfo();
    cout <<endl;
}