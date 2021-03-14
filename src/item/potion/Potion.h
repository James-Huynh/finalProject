//
// Created by hello on 2021-03-13.
//

#ifndef FINALPROJECTWEEK5_POTION_H
#define FINALPROJECTWEEK5_POTION_H


#include "../Item.h"

class Potion : public Item{


protected:
    int level=1;
    int basePoint=100;



public:
    Potion(const string &name, const string &description, int buyPrice, int level, int basePoint);

    int getLevel() const;

    void setLevel(int level);

    int getBasePoint() const;

    void setBasePoint(int basePoint);


};


#endif //FINALPROJECTWEEK5_POTION_H
