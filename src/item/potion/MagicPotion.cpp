//
// Created by hello on 2021-03-13.
//

#include "MagicPotion.h"

MagicPotion::MagicPotion(const string &name, const string &description, int buyPrice, int level, int basePoint)
        : Potion(name, description, buyPrice, level, basePoint) {}

void MagicPotion::printInfo() {
    cout << MagicPotion::description << endl;
}