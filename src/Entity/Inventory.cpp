
#include "Inventory.h"
#include <cmath>


// show the potions Play have
int Inventory::showPotions() {
    int i = 0;
    for (auto pair : myItemMap) {
        i++;
        if (pair.first->getType() == "Potion") {   // check is potion  then print out
            cout << "\t" << i << ": ";
            pair.first->printInfo();
            cout << ", quantity:" << pair.second + 1 << std::endl;
        }
    }
    return i;
}

// consume the potion Play have  and return value
double Inventory::drinkPotion(int potionNb) {
    int i = 0;
    Potion *tempPotion;
    double basePtsPotions;

	for (auto &pair : myItemMap) {
		i++;
		if (pair.first->getType() == "Potion"){
	        if (i == potionNb) {
	        	tempPotion = dynamic_cast<Potion*> (pair.first);
	        	basePtsPotions = tempPotion->getBasePoint();
	        	pair.second--;
	        	if(pair.second < 0)
	        		myItemMap.erase(pair.first);
	        	return basePtsPotions;
	        }
		}
	}
	return -1;
}

// show the potions Play have
void Inventory::showWeapons() {
    int i = 0;
    for (auto pair : myItemMap) {
        i++;
        if (pair.first->getType() == "Weapon") { // check if it is Weapon
            cout << "\t" << i << ": ";
            pair.first->printInfo();
            cout << ", quantity:" << pair.second + 1 << std::endl;
        }
    }
}

void Inventory::showMyMoney() {
    int i = 0;
    for (auto pair : myItemMap) {
    	i++;
        if (pair.first->getType() == "money") {
        	cout << "\t" << i << ": ";
            pair.first->printInfo();
            cout << ", quantity:" << pair.second + 1 << std::endl;
        }
    }
}

int Inventory::getTotalItemQuantity() {    //get total quantity of all items, the total could not larger than the max size of the inventory.
    int total = 0;
    for (auto pair : myItemMap) {
        total = total + pair.second;
    }
    return total;
}

void Inventory::addItem(Item *item, int quantity) {     // add item(+)
    int realAddNum = 0;
    map<Item *, int>::iterator it;
    for (int i = 0; i < quantity; ++i) {
        if (maxPlace <= getTotalItemQuantity()) {       // check have enough space for new item
            cout << "There is no space in the bag." << endl;
            return;
        }
        it = myItemMap.find(item);                       // find item
        if (it == myItemMap.end()) {                        // not exist in map
            myItemMap.emplace(item, i);
        } else {                                          // exist in map
            it->second = it->second + 1;
        }
        realAddNum++;
    }
    //it->second = realAddNum;
    cout << "\tYou have put " << realAddNum << " " << item->getName() << " in the bag." << endl;
}

void Inventory::loadItem(Item *item, int quantity) {     // add item(+)
    myItemMap.emplace(item, quantity);
}


Inventory::Inventory(const string &name) : name(name) {}


/*
 * getter and setter below
 */

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


void Inventory::upgradeInventory() {   // player increase the inventory max space by 5 per time by consume xp
    maxPlace += 5;
}

const map<Item *, int> &Inventory::getMyItemMap() const {
    return myItemMap;
}

void Inventory::setMyItemMap(const map<Item *, int> &myItemMap) {
    Inventory::myItemMap = myItemMap;
}

void Inventory::removeItem(Item * item, int quantity){
	for (auto pair : myItemMap) {
		if (pair.first->getName() == item->getName()) {
			myItemMap[item] = pair.second - quantity;
			if(myItemMap[item] < 0){
				myItemMap.erase(item);
				break;
			}
		}
	}
}

Item* Inventory::findItem(int index){
	int i = 0;
	for(auto pair : myItemMap){
		i++;
		if(i == index){
			return pair.first;
		}
	}
	return nullptr;
}


string Inventory::toSave() const {
    string temp;
    temp += name + "\n";
    temp += to_string(getMaxPlace()) + "\n";
    for (auto &pair : myItemMap) {
        temp += pair.first->getName() + ";" + to_string(pair.second) + "\n";
    }

    return temp;
}
