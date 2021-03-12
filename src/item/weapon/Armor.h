//
// Created by hello on 2021-03-13.
//

#ifndef FINALPROJECTWEEK5_ARMOR_H
#define FINALPROJECTWEEK5_ARMOR_H


#include "Weapon.h"

class Armor : public Weapon {

private:
    double weakenDmgProbability;
public:

    Armor(const string &name, const string &description, int buyPrice, int protectValue,
          double weakenDmgProbability);


    double getWeakenDmgProbability() const;

    void setWeakenDmgProbability(double weakenDmgProbility);

    void printInfo() override;
};


#endif //FINALPROJECTWEEK5_ARMOR_H
