//
// Created by hello on 2021-03-13.
//

#include "Weapon.h"

Weapon::Weapon(const string &name, const string &description, int buyPrice, int dmgValue, int protectValue) : Item(name,
                                                                                                                   description,
                                                                                                                   buyPrice),
                                                                                                              dmgValue(
                                                                                                                      dmgValue),
                                                                                                              protectValue(
                                                                                                                      protectValue){
    this->sellValue=buyPrice/2;
}

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
