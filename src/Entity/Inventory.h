// #include "Item.h"

#include "../item/Item.h"
#include "../item/potion/Potion.h"
#include "../item/weapon/Weapon.h"
#include "../item/Money/Gold.h"
#include <typeinfo>
#include <map>
#include <iostream>

using namespace std;

class Inventory {
private:
    int maxPlace=10; // init value
    string name;
    map<Item *, int> myItemMap;
public:
    Inventory(const string &name = "None");

    void upgradeInventory();

    int getMaxPlace() const;

    const map<Item *, int> &getMyItemMap() const;

    void setMyItemMap(const map<Item *, int> &myItemMap);

    void setMaxPlace(int maxPlace);

    const string &getName() const;

    void setName(const string &name);

    void showPotions();

    void showWeapons();

    void showMyMoney();

    void addItem(Item *item, int quantity);

    int getTotalItemQuantity();
};
