#include "Chest.h"




int Chest::getRandomIndex(const vector<Item*>& itemList) {
    srand(time(nullptr));
    return rand() % itemList.size();
}




Item *Chest::openBox(const vector<Item*>& itemList) {    // openBox to get random bonus item
    if (!itemList.empty()) {
        Item *item = itemList.at(getRandomIndex(itemList));
        item->printInfo();
        return item;
    } else {
        cout << "you have bad luck, there is nothing in the box" << endl;
        return nullptr;
    }

}



void Chest::printInfo() {

    cout << "Good luck after opening the box." << endl;
}



Chest::Chest(const string &name, const string &description) : Town(name, description)
{

}
