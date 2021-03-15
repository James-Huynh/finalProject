//
// Created by hello on 2021-03-13.
//

#ifndef FINALPROJECTWEEK5_WEAPON_H
#define FINALPROJECTWEEK5_WEAPON_H


#include "../Item.h"
#include "../potion/Diamond.h"
#include <vector>
#include <cstdlib>
#include <iostream>
#include <ctime>


class Weapon : public Item {
protected:
    int dmgValue;
    int protectValue;
    int sellValue;
    bool isAttack = false;
    vector<Diamond*>diamondPlace;
public:

    const vector<Diamond *> &getDiamondPlace() const;

    void setDiamondPlace(const vector<Diamond *> &diamondPlace);

    Weapon(const string &name, const string &description, int buyPrice, int level, int dmgValue, int protectValue,
           bool isAttack);

    int getDmgValue() const;

    void setDmgValue(int dmgValue);

    int getProtectValue() const;

    void setProtectValue(int protectValue);

    int getSellValue() const;

    void setSellValue(int sellValue);

    bool isAttack1() const;

    void printInfo() override;

    void setIsAttack(bool isAttack);

    virtual int getDefenceValue()= 0;
    virtual int getAttackValue()= 0;
    void embedDiamond(Diamond* diamond);

   static double getProbability();
};


#endif //FINALPROJECTWEEK5_WEAPON_H
