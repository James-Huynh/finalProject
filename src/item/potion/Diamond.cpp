//
// Created by hello on 2021-03-13.
//

#include "Diamond.h"




void Diamond::printInfo() {
   Potion::printInfo();
    cout <<endl;
}

Diamond::Diamond(const string &name, const string &description, int buyPrice, int level, int basePoint,
                 double addtionalProbility) : Potion(name, description, buyPrice, level, basePoint),
                                              addtionalProbility(addtionalProbility) {}

double Diamond::getAddtionalProbility() const {
    return addtionalProbility;
}

void Diamond::setAddtionalProbility(double addtionalProbility) {
    Diamond::addtionalProbility = addtionalProbility;
}
