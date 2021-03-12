//
// Created by hello on 2021-03-13.
//

#include "Item.h"

#include <utility>

Item::Item(string name, string description, int buyPrice) : name(std::move(name)), description(std::move(description)),
                                                                          buyPrice(buyPrice) {}

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
