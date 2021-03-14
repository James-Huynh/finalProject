//
// Created by hello on 2021-03-13.
//

#ifndef FINALPROJECTWEEK5_SHIELD_H
#define FINALPROJECTWEEK5_SHIELD_H

#pragma once
#include "Weapon.h"
#include "../potion/Diamond.h"


class Shield : public Weapon {

private:
    double dodgeProbability;

public:
    Shield(const string &name, const string &description, int buyPrice, int level, int protectValue,
           double weakenDmgProbability);

    double getWeakenDmgProbability() const;

    void setWeakenDmgProbability(double weakenDmgProbability);

    void printInfo() override;

    int getDefenceValue() override;

    int getAttackValue() override;

};

#endif //FINALPROJECTWEEK5_SHIELD_H
