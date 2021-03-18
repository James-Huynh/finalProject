//
// Created by hello on 2021-03-13.
//

#include "Sword.h"



Sword::Sword(const string &name, const string &description, int buyPrice, int level, int dmgValue,
            double hitProbability) : Weapon(name, description, buyPrice, level, dmgValue, 0,
                                                             true), hitProbability(hitProbability) {

}


void Sword::printInfo() {
    Weapon::printInfo();
}

double Sword::getHitProbability() const {
    return hitProbability;
}

void Sword::setHitProbability(double hitProbability) {
    Sword::hitProbability = hitProbability;
}

int Sword::getDefenceValue() {
    return 0;
}

int Sword::getAttackValue() {
    int result=dmgValue;
    if(getProbability()>hitProbability){    // if the random number is small, then the attack not hit the target;
//        cout<<name <<" fail to hit on the target."<<endl;
        return 0;
    }
    for (Diamond* d : diamondPlace) {
        result+=d->getBasePoint();
    }
//    cout<<name <<" gave " << result<<" points hit on the target."<<endl;
    return result;
}


