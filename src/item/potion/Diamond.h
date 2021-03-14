//
// Created by hello on 2021-03-13.
//

#ifndef FINALPROJECTWEEK5_DIAMOND_H
#define FINALPROJECTWEEK5_DIAMOND_H


#include "Potion.h"



class Diamond : public Potion  {
    double addtionalProbility=0;
public:
    Diamond(const string &name, const string &description, int buyPrice, int level, int basePoint,
            double addtionalProbility);

    void printInfo();

    double getAddtionalProbility() const;

    void setAddtionalProbility(double addtionalProbility);


};


#endif //FINALPROJECTWEEK5_DIAMOND_H
