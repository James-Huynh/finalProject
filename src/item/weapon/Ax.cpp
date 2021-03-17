//
// Created by hello on 2021-03-13.
//

#include "Ax.h"


void Ax::printInfo() {
    Weapon::printInfo();
}

Ax::Ax(const string &name, const string &description, int buyPrice, int level, int dmgValue,
        double hitProbability) : Weapon(name, description, buyPrice, level, dmgValue, 0,
                                                       true), hitProbability(hitProbability) {}



double Ax::getHitProbability() const {
    return hitProbability;
}

void Ax::setHitProbability(double hitProbability) {
    Ax::hitProbability = hitProbability;
}


int Ax::getAttackValue(){

    int result=dmgValue;
    if(getProbability()<hitProbability){    // if the random number is small, then the attack not hit the target;
//        cout<<"fail to hit on the target."<<endl;
        return 0;
    }
    for (Diamond* d : diamondPlace) {
        result+=d->getBasePoint();
    }
    return result;
}



int Ax::getDefenceValue(){
    return 0;
}
