//
// Created by hello on 2021-03-18.
//

#include <fstream>
#include <sstream>
#include "FileOperation.h"
#include "../Common/itemListTotal.h"

void FileOperation::saveGame(const Character &character, int level_i) {

//    string filePath = character.getCharName()+".txt";
    string filePath = "myFile.txt";
    ofstream ofs;
    ofs.open(filePath, ios::binary);
    ofs.write((const char *) &character, sizeof(Character));
//    ofs.write((const char *) &level_i, sizeof(int));

    ofs.close();
}

void FileOperation::loadGame(Character &c, int &i) {
    ifstream ifs;
    string filePath = "myFile.txt";
    ifs.open(filePath, ios::in);

    if (!ifs.is_open()) {
        cout << "failed to open File!";
    } else {

        ifs.read((char *) &c, sizeof(Character));
//        ifs.read((char *) &i, sizeof(int));
        ifs.close();
    }
}

//template<typename T>
//void FileOperation::saveGame(const T &t) {
//    string filePath = "T.txt";
//    ofstream ofs;
//    ofs.open(filePath, ios::binary);
//    ofs.write((const char *) &t, sizeof(T));
//    ofs.close();
//}
//
//template<typename T>
//void FileOperation::loadGame(T &t) {
//    ifstream ifs;
//    string filePath = "T.txt";
//    ifs.open(filePath, ios::in | ios::binary  );
//    T temp;
//    if (!ifs.is_open()) {
//        cout << "failed to open File!";
//    } else {
//        ifs.read((char *) &t, sizeof(T));
//        t=temp;
//        ifs.close();
//    }
//}



void FileOperation::loadGame(Merchandise &merchandise, int &i) {
    ifstream ifs;
    string filePath = "merchandiseOnly.txt";
    ifs.open(filePath, ios::in | ios::binary);

    if (!ifs.is_open()) {
        cout << "failed to open File!";
    } else {
        Merchandise temp;
        ifs.read((char *) &temp, sizeof(Merchandise));
        ifs.read((char *) &i, sizeof(int));

        merchandise.setSaleList(temp.getSaleList());

        ifs.close();
    }
}

void FileOperation::saveGame( const Merchandise &merchandise, int level_i) {
    string filePath = "merchandiseOnly.txt";
    ofstream ofs;

    ofs.open(filePath,  ios::out | ios::binary);
    ofs.write((char *) &merchandise, sizeof(Merchandise));
    ofs.write((char *) &level_i, sizeof(int));

    ofs.close();
}


void FileOperation::saveChar( const Character &character) {
    string filePath = "char.txt";
    ofstream ofs;

    ofs.open(filePath,  ios::out);

    string charBasic=character.toSave();
    ofs <<charBasic;

    ofs.close();
}

void FileOperation::saveEqu( const Character &character) {
    string filePath = "equp.txt";
    ofstream ofs;

    ofs.open(filePath,  ios::out);

    ofs <<character.getMyEquipment().toSave();


    ofs.close();
}

void FileOperation::saveInven(Character character) {
    string filePath = "inve.txt";
    ofstream ofs;
    ofs.open(filePath,  ios::out);
    ofs <<character.getMyInventory().toSave();
    ofs.close();
}



Item* FileOperation::getItemByName(const string& name){
    vector<Item *> totalListItem = getTotalListItem();
    for (Item* item: totalListItem){
        if(item->getName()==name){
            return item;
        }
    }
}



void FileOperation::loadChar(Character &character) {
    string filePath1 = "char.txt";
    string filePath2 = "equp.txt";
    string filePath3 = "inve.txt";

    std::ifstream input( filePath1 );
    std::ifstream input2( filePath2 );
    std::ifstream input3( filePath3 );
    double hp, currMaxHp, currAtt, currDef, lvlDivision;  //double
    int level, xp;//int
    bool alive;//bool
    string charName;

    int money;
    char roleIndex;
    string  mainWeapon;
    string secWeapon;
    string armor;

    string invenName;
    int maxPlace;
    map<Item*,int> itemMap;




    input>>charName;
    input>>roleIndex;
    Character temp(charName,roleIndex);
    character=temp;
    input>>hp;
    input>>currMaxHp;
    input>>currAtt;
    input>>currDef;
    input>>lvlDivision;
    input>>money;
    input>>level;
    input>>xp;
    input>>alive;

    getline(input2,mainWeapon);
    getline(input2,secWeapon);
    getline(input2,armor);


    character.setCharName(charName);
    character.setMaxHp(currMaxHp);
    character.setCurrAtt(currAtt);
    character.setCurrDef(currDef);
    character.setLvlDivision(lvlDivision);
    character.setMoney(money);
    character.setLevel(level);
    character.setXp(xp);
    character.setAlive(alive);
    if(mainWeapon!="nullptr")
        character.equipMainWeapon(dynamic_cast<Weapon *>(getItemByName(mainWeapon)));
    if(secWeapon!="nullptr")
        character.equipSecWeapon(dynamic_cast<Weapon *>(getItemByName(secWeapon)));
    if(armor!="nullptr")
        character.equipArmor(dynamic_cast<Weapon *>(getItemByName(armor)));

    getline(input3,invenName);
    input3>>maxPlace;
    getline(input3,invenName);
    character.getMyInventory().setName(invenName);
    character.getMyInventory().setMaxPlace(maxPlace);
    string line;
    int pos;
    while(getline(input3, line)) {
       pos=line.find(';');
        Item* item= getItemByName(line.substr(0,pos));
        character.getMyInventory().loadItem(item,stoi(line.substr(pos+1)));

    }

    input.close();
    input2.close();
    input3.close();
}

