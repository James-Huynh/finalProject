//
// Created by hello on 2021-03-13.
//

#ifndef FINALPROJECTWEEK5_ARMOR_H
#define FINALPROJECTWEEK5_ARMOR_H


#include "Weapon.h"
#include "../potion/Diamond.h"



class Armor : public Weapon {

private:

    double dodgeProbability;
public:

    Armor(const string &name, const string &description, int buyPrice, int level, int protectValue,
          double weakenDmgProbability);



    void printInfo() override;


    int getDefenceValue();

    double getDodgeProbability() const;

    void setDodgeProbability(double dodgeProbability);

    int getAttackValue() override;
};


#endif //FINALPROJECTWEEK5_ARMOR_H
