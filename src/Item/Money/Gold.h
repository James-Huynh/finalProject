//
// Created by hello on 2021-03-16.
//

#ifndef FINALPROJECTWEEK5_GOLD_H
#define FINALPROJECTWEEK5_GOLD_H


#include "../Potion/Potion.h"

class Gold : public Item {
    private:
    string type="money";

    int value;
public:
    void printInfo() override;

    int getValue() const;

    Gold(const string &name, const string &description, int value);

    void setValue(int value);

    const string &getType() const;



};


#endif //FINALPROJECTWEEK5_GOLD_H
