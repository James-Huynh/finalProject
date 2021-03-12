//
// Created by hello on 2021-03-13.
//

#ifndef FINALPROJECTWEEK5_WEAPON_H
#define FINALPROJECTWEEK5_WEAPON_H


#include "../Item.h"

class Weapon : public Item {
protected:
    int dmgValue;
    int protectValue;
    int sellValue;
    bool isAttack = false;
public:
    Weapon(const string &name, const string &description, int buyPrice, int dmgValue, int protectValue);

    int getDmgValue() const;

    void setDmgValue(int dmgValue);

    int getProtectValue() const;

    void setProtectValue(int protectValue);

    int getSellValue() const;

    void setSellValue(int sellValue);

    bool isAttack1() const;

    void setIsAttack(bool isAttack);


};


#endif //FINALPROJECTWEEK5_WEAPON_H
