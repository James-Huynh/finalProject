//
// Created by hello on 2021-03-13.
//

#ifndef FINALPROJECTWEEK5_AX_H
#define FINALPROJECTWEEK5_AX_H


#include "Weapon.h"

class Ax : public Weapon {

private:


    double dmgOnProtection;
public:

    Ax(const string &name, const string &description, int buyPrice, int level, int dmgValue, double dmgOnProtection);

    double getDmgOnProtection() const;

    void setDmgOnProtection(double dmgOnProtection);

    void printInfo() override;
};


#endif //FINALPROJECTWEEK5_AX_H
