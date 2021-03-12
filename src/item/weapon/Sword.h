//
// Created by hello on 2021-03-13.
//

#ifndef FINALPROJECTWEEK5_SWORD_H
#define FINALPROJECTWEEK5_SWORD_H


#include "Weapon.h"

class Sword : public Weapon{
private:
    int dmgOnArmor;
public:
    Sword(const string &name, const string &description, int buyPrice, int dmgValue, int protectValue, int dmgOnArmor);

    int getDmgOnArmor() const;

    void setDmgOnArmor(int dmgOnArmor);

    void printInfo() override;
};


#endif //FINALPROJECTWEEK5_SWORD_H
