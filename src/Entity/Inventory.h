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
    //int is quantity
    map<Item *, int> myItemMap;
public:
    Inventory(const string &name = "None");

    void upgradeInventory();

    int getMaxPlace() const;

    void setMaxPlace(int maxPlace);

    const string &getName() const;

    void setName(const string &name);

    int showPotions();

    double drinkPotion(int potionNb);

    void showWeapons();

    void showMyMoney();

    void addItem(Item *item, int quantity);

    int getTotalItemQuantity();
};
