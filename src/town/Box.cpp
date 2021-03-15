//
// Created by hello on 2021-03-15.
//

#include "Box.h"

#include <utility>



int Box::getRandomIndex(int size){
    srand (time(nullptr));
    return rand()%size;
}

vector<Item*> Box::getItemByLevel(vector<Item*> itemList,int level){
    vector<Item*> resultList;
    if(level<=0){
        resultList.push_back(nullptr);
        return resultList;
    }
    for (Item* item: itemList){
        if(item->getLevel()<=level){
            resultList.push_back(item);
        }
    }
    return resultList;
}


Item *Box::openBox()  {

    switch (boxType) {
        case small:{
            vector<Item*> itemListByLevel=getItemByLevel(std::move(itemList),1);
            if(!itemListByLevel.empty()){
//                random_shuffle(itemList.begin(), itemList.end());
                Item* item=itemListByLevel.at(getRandomIndex(itemListByLevel.size()));
                item->printInfo();
                return item;
            }else{
                cout<<"you have bad luck, there is nothing in the box"<<endl;
                return nullptr;
            }
        }
        case normal:{
            vector<Item*> itemListByLevel=getItemByLevel(std::move(itemList),2);
            if(!itemListByLevel.empty()){
                Item* item=itemListByLevel.at(getRandomIndex(itemListByLevel.size()));
                item->printInfo();
                return item;
            }else{
                cout<<"you have bad luck, there is nothing in the box"<<endl;
                return nullptr;
            }
        }

        case large:{
            vector<Item*> itemListByLevel=getItemByLevel(std::move(itemList),3);
            if(!itemListByLevel.empty()){
                Item* item=itemListByLevel.at(getRandomIndex(itemListByLevel.size()));
                cout << "Your Bonus:\n";
                item->printInfo();
                return item;
            }else{
                cout<<"you have bad luck, there is nothing in the box"<<endl;
                return nullptr;
            }
        }

        case huge:{
            vector<Item*> itemListByLevel=getItemByLevel(std::move(itemList),4);
            if(!itemListByLevel.empty()){
                Item* item=itemListByLevel.at(getRandomIndex(itemListByLevel.size()));
                item->printInfo();
                return item;
            }else{
                cout<<"you have bad luck, there is nothing in the box"<<endl;
                return nullptr;
            }
        }

        default:{
            cout << "Error with the type of Box"<<endl;
            return nullptr;
        }
    }
}



string Box::getBoxType() const {
    string boxTypeStr[4]={"small","normal","large","huge"};
    switch (boxType) {
        case small:{
            return boxTypeStr[0];
        }
        case normal:{
            return boxTypeStr[1];
        }

        case large:{
            return boxTypeStr[2];
        }

        case huge:{
            return boxTypeStr[3];
        }
    }
}

void Box::printInfo() {

    cout <<"this is "<<getBoxType()<<". Good luck after opening the box."<<endl;
}

Box::Box(const string &name, const string &description, const vector<Item *> &itemList) : Town(name, description),
                                                                                          itemList(itemList) {
    srand (time(NULL));
    int result=rand() % 5;
    if(result<2){
        boxType=small;
    }else if (result<3){
        boxType=normal;
    }else if (result<4){
        boxType=large;
    }else {
        boxType=huge;
    }
}



