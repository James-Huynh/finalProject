//
// Created by hello on 2021-03-13.
//

#include "Potion.h"

Potion::Potion(const string &name, const string &description, int buyPrice, int level, int basePoint) : Item(name,
                                                                                                             description,
                                                                                                             buyPrice),
                                                                                                        level(level),
                                                                                                        basePoint(
                                                                                                                basePoint) {}

int Potion::getLevel() const {
    return level;
}

void Potion::setLevel(int level) {
    Potion::level = level;
}

int Potion::getBasePoint() const {
    return basePoint;
}

void Potion::setBasePoint(int basePoint) {
    Potion::basePoint = basePoint;
}
