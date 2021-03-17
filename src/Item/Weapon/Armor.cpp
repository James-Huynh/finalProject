//
// Created by hello on 2021-03-13.
//

#include <limits.h>
#include "Armor.h"


void Armor::printInfo() {
    Weapon::printInfo();
    cout <<endl;
}

double Armor::getDodgeProbability() const {
    return dodgeProbability;
}

void Armor::setDodgeProbability(double dodgeProbability) {
    this->dodgeProbability = dodgeProbability;
}


Armor::Armor(const string &name, const string &description, int buyPrice, int level, int protectValue,
              double dodgeProbability) : Weapon(name, description, buyPrice, level, 0,
                                                                  protectValue, false),
                                         dodgeProbability(dodgeProbability) {
}



int Armor::getDefenceValue(){
    int result=protectValue;
    if(getProbability()<dodgeProbability){    // if the random number is small, then the attack not hit the target;
//        cout<<name<< " success to avoid the hit."<<endl;
        return INT_MAX;
    }
    for (Diamond* d : diamondPlace) {
        result+=d->getBasePoint();
    }
//    cout<<name<< " support "<< result<<" points protection against hit."<<endl;
    return result;
}



int Armor::getAttackValue() {
    return 0;
}
