//
// Created by hello on 2021-03-13.
//

#ifndef FINALPROJECTWEEK5_AX_H
#define FINALPROJECTWEEK5_AX_H


#include "Weapon.h"
#include "../potion/Diamond.h"
//#include "../../Common/tool.cpp"

class Ax : public Weapon {

private:

    double hitProbability;
public:

    Ax(const string &name, const string &description, int buyPrice, int level, int dmgValue, double hitProbability);


    void printInfo() override;

    int getDefenceValue();


    double getHitProbability() const;

    void setHitProbability(double hitProbability);

    int getAttackValue();


};


#endif //FINALPROJECTWEEK5_AX_H
