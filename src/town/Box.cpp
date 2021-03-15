#include "Box.h"




int Box::getRandomIndex(const vector<Item*>& itemList) {
    srand(time(nullptr));
    return rand() % itemList.size();
}




Item *Box::openBox(const vector<Item*>& itemList) {
    if (!itemList.empty()) {
        Item *item = itemList.at(getRandomIndex(itemList));
        item->printInfo();
        return item;
    } else {
        cout << "you have bad luck, there is nothing in the box" << endl;
        return nullptr;
    }

}



void Box::printInfo() {

    cout << "Good luck after opening the box." << endl;
}



Box::Box(const string &name, const string &description) : Town(name, description)
{

}
