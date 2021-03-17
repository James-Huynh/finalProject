//
// Created by hello on 2021-03-13.
//

#include "Town.h"

Town::Town(const string &name, const string &description) : name(name), description(description) {}

Town::Town() {}

const string &Town::getName() const {
    return name;
}

void Town::setName(const string &name) {
    Town::name = name;
}

const string &Town::getDescription() const {
    return description;
}

void Town::setDescription(const string &description) {
    Town::description = description;
}



