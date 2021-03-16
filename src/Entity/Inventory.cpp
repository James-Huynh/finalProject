
#include "Inventory.h"


void Inventory::showPotions() {
    for (auto pair : myItemMap) {
        if (typeid(pair.first) == typeid(Potion)) {
            pair.first->printInfo();
            cout << " quantity:" << pair.second << std::endl;
        }
    }
}


void Inventory::showWeapons() {
    for (auto pair : myItemMap) {
        if (typeid(pair.first) == typeid(Weapon)) {
            pair.first->printInfo();
            cout << " quantity:" << pair.second << std::endl;
        }
    }
}

void Inventory::showMyMoney() {
    for (auto pair : myItemMap) {
        if (typeid(pair.first) == typeid(Gold)) {
            pair.first->printInfo();
            cout << " quantity:" << pair.second << std::endl;
        }
    }
}

void Inventory::addItem(Item *item, int quantity=1) {  // add item(+). consume/embed item(-) like diamond hp.  sale (-)
    for (auto pair : myItemMap) {
        if (pair.first->getName() == item->getName()) {
            pair.second=pair.second+quantity;
            cout << "You have put item" <<quantity<<" "<< pair.first->getName() <<""<< "in the bag."<<endl;
            break;
        }
    }
    myItemMap.emplace(item,quantity);
    cout << "You have put item" <<quantity<<" "<< item->getName() <<""<< "in the bag."<<endl;
}



Inventory::Inventory(const string &name) : name(name) {}

const string &Inventory::getName() const {
    return name;
}

void Inventory::setName(const string &name) {
    Inventory::name = name;
}



int Inventory::getMaxPlace() const {
    return maxPlace;
}

void Inventory::setMaxPlace(int maxPlace) {
    Inventory::maxPlace = maxPlace;
}



int Inventory::upgradeInventory() {   // upgrade the inventory by consume xp

}




