//
// Created by hello on 2021-03-13.
//

#ifndef FINALPROJECTWEEK5_SWORD_H
#define FINALPROJECTWEEK5_SWORD_H
#pragma once

#include "Weapon.h"
#include "../potion/Diamond.h"


class Sword : public Weapon{
private:
    double hitProbability;
public:
    Sword(const string &name, const string &description, int buyPrice, int level, int dmgValue,
           double hitProbability);

    void printInfo() override;

    double getHitProbability() const;

    void setHitProbability(double hitProbability);

    int getDefenceValue() override;

    int getAttackValue() override;
};


#endif //FINALPROJECTWEEK5_SWORD_H
