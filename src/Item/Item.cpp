//
// Created by hello on 2021-03-13.
//

#include "Item.h"

#include <utility>


const string &Item::getName() const {
    return name;
}

void Item::setName(const string &name) {
    Item::name = name;
}

const string &Item::getDescription() const {
    return description;
}

void Item::setDescription(const string &description) {
    Item::description = description;
}

int Item::getBuyPrice() const {
    return buyPrice;
}

void Item::setBuyPrice(int buyPrice) {
    Item::buyPrice = buyPrice;
}

Item::Item(const string &name, const string &description, int buyPrice, int level) : name(name),
                                                                                     description(description),
                                                                                     buyPrice(buyPrice), level(level) {}

int Item::getLevel() const {
    return level;
}

void Item::setLevel(int level) {
    Item::level = level;
}

Item::~Item() {

}

const string &Item::getType() const {
    return type;
}

void Item::setType(const string &type) {
    Item::type = type;
}


