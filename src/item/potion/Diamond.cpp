//
// Created by hello on 2021-03-13.
//

#include "Diamond.h"

Diamond::Diamond(const string &name, const string &description, int buyPrice, int level, int basePoint)
        : Potion(name, description, buyPrice, level, basePoint) {}
void Diamond::printInfo() {
    cout << Item::description<<endl;
}