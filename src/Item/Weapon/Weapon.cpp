//
// Created by hello on 2021-03-13.
//

#include "Weapon.h"





int Weapon::getDmgValue() const {
    return dmgValue;
}

void Weapon::setDmgValue(int dmgValue) {
    Weapon::dmgValue = dmgValue;
}

int Weapon::getProtectValue() const {
    return protectValue;
}

void Weapon::setProtectValue(int protectValue) {
    Weapon::protectValue = protectValue;
}

int Weapon::getSellValue() const {
    return sellValue;
}

void Weapon::setSellValue(int sellValue) {
    Weapon::sellValue = sellValue;
}

bool Weapon::isAttack1() const {
    return isAttack;
}

void Weapon::setIsAttack(bool isAttack) {
    Weapon::isAttack = isAttack;
}

Weapon::Weapon(const string &name, const string &description, int buyPrice, int level, int dmgValue, int protectValue,
               bool isAttack) : Item(name, description, buyPrice, level), dmgValue(dmgValue),
                                protectValue(protectValue), isAttack(isAttack) {
    this->sellValue=buyPrice/2;
}

const vector<Diamond *> &Weapon::getDiamondPlace() const {
    return diamondPlace;
}

void Weapon::setDiamondPlace(const vector<Diamond *> &diamondPlace) {
    Weapon::diamondPlace = diamondPlace;
}

void Weapon::embedDiamond(Diamond* diamond) {
    if(diamondPlace.size()<level ){      // Weapon has enough place to embed diamond
        if(diamond->getLevel() <= this->getLevel()){
            diamondPlace.push_back(diamond);
        }else{
//            cout <<"diamond level should be lower than the Weapon level"<<endl;
        }
    }else{
//        cout <<"there is no place to hold the diamond"<<endl;
    }
}

double Weapon::getProbability(){
//    srand (time(NULL));
    double result=0;
    for(int i=0;i<3 ;i++){
        result+=rand()%100;
    }
    return result/300;
}

void Weapon::printInfo() {
    cout <<Item::name<<": " <<Item::description;
}

const string &Weapon::getType() const {
    return type;
}

bool Weapon::isAttack2() const {
    return isAttack;
}

void Weapon::setType1(const string &type) {
    Weapon::type = type;
}


