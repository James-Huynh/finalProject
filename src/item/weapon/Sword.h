//
// Created by hello on 2021-03-13.
//

#ifndef FINALPROJECTWEEK5_SWORD_H
#define FINALPROJECTWEEK5_SWORD_H


#include "Weapon.h"

class Sword : public Weapon{
private:
    double dmgOnProtection;
public:


    Sword(const string &name, const string &description, int buyPrice, int level, int dmgValue,
           double dmgOnProtection);

    void printInfo() override;

    double getDmgOnProtection() const;

    void setDmgOnProtection(double dmgOnProtection);
};


#endif //FINALPROJECTWEEK5_SWORD_H
