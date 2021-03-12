//
// Created by hello on 2021-03-13.
//

#ifndef FINALPROJECTWEEK5_SHIELD_H
#define FINALPROJECTWEEK5_SHIELD_H


#include "Weapon.h"

class Shield : public Weapon {


private:
    int protectBonus;
    double weakenDmgProbability;
public:
    Shield(const string &name, const string &description, int buyPrice, int dmgValue, int protectValue,
           int protectBonus, double weakenDmgProbability);

    int getProtectBonus() const;

    void setProtectBonus(int protectBonus);

    void printInfo() override;
};

#endif //FINALPROJECTWEEK5_SHIELD_H
