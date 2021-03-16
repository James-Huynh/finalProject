//
// Created by hello on 2021-03-13.
//

#ifndef FINALPROJECTWEEK5_POTION_H
#define FINALPROJECTWEEK5_POTION_H


#include "../Item.h"

class Potion : public Item{


protected:
    string type="potion";
    int basePoint=100;

public:
    void printInfo() override;


    Potion(const string &name, const string &description, int buyPrice, int level, int basePoint);

    const string &getType() const;

    void setType(const string &type);


    int getBasePoint() const;

    void setBasePoint(int basePoint);


};


#endif //FINALPROJECTWEEK5_POTION_H
