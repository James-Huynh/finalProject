//
// Created by hello on 2021-03-13.
//

#ifndef FINALPROJECTWEEK5_HP_POTION_H
#define FINALPROJECTWEEK5_HP_POTION_H


#include "Potion.h"

class HP_Potion : public Potion {
public:
    HP_Potion(const string &name, const string &description, int buyPrice, int level, int basePoint);
    void printInfo();
};


#endif //FINALPROJECTWEEK5_HP_POTION_H
