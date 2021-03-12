//
// Created by hello on 2021-03-13.
//

#ifndef FINALPROJECTWEEK5_AX_H
#define FINALPROJECTWEEK5_AX_H


#include "Weapon.h"

class Ax : public Weapon {

private:
    int protectBonus;
public:
    Ax(const string &name, const string &description, int buyPrice, int dmgValue, int protectValue,
          int protectBonus);
    int getProtectBonus() const;
    void setProtectBonus(int protectBonus);

    void printInfo() override;
};


#endif //FINALPROJECTWEEK5_AX_H
