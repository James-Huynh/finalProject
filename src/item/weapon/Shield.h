//
// Created by hello on 2021-03-13.
//

#ifndef FINALPROJECTWEEK5_SHIELD_H
#define FINALPROJECTWEEK5_SHIELD_H


#include "Weapon.h"

class Shield : public Weapon {

private:

    double weakenDmgProbability;

public:
    Shield(const string &name, const string &description, int buyPrice, int protectValue, double weakenDmgProbability);

    double getWeakenDmgProbability() const;

    void setWeakenDmgProbability(double weakenDmgProbability);

    void printInfo() override;
};

#endif //FINALPROJECTWEEK5_SHIELD_H
