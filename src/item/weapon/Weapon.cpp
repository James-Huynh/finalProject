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


