//
// Created by hello on 2021-03-18.
//

#include <fstream>
#include <sstream>
#include "FileOperation.h"
#include "../Common/itemListTotal.h"






/* save character attributes excluding equipment and inventory*/

void FileOperation::saveChar( const Character &character) {
    string filePath = "../src/Saves/char.txt";
    ofstream ofs;
    ofs.open(filePath,  ios::out);
    string charBasic=character.toSave();    // get string of all attributes of char
    ofs <<charBasic;
    ofs.close();
}

/* save equipment*/
void FileOperation::saveEqu( const Character &character) {
    string filePath = "../src/Saves/equp.txt";
    ofstream ofs;
    ofs.open(filePath,  ios::out);
    ofs <<character.getMyEquipment().toSave(); // get string of all attributes of equp
    ofs.close();
}

/* save inventory*/
void FileOperation::saveInven(Character character) {
    string filePath = "../src/Saves/inve.txt";
    ofstream ofs;
    ofs.open(filePath,  ios::out);
    ofs <<character.getMyInventory().toSave();  // get string of all attributes of inventory
    ofs.close();
}

/* save merchandise*/
void FileOperation::saveMerchandise(Merchandise merchandise) {
    string filePath = "../src/Saves/merchendise.txt";
    ofstream ofs;
    ofs.open(filePath,  ios::out);
    ofs <<merchandise.toSave();  // get string of all attributes of inventory
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

/*
 *   load character with character itself and the equipment and inventory
 *
 * */

void FileOperation::loadChar(Character &character) {
    string filePath1 = "../src/Saves/char.txt";
    string filePath2 = "../src/Saves/equp.txt";
    string filePath3 = "../src/Saves/inve.txt";

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
    character.setHp(hp);
    character.setMaxHp(currMaxHp);
    character.setCurrAtt(currAtt);
    character.setCurrDef(currDef);
    character.setLvlDivision(lvlDivision);
    character.setMoney(money);
    character.setLevel(level);
    character.setXp(xp);
    character.setHp(hp);
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



void FileOperation::loadMerchandise(Merchandise &merchandise) {
    string filePath = "../src/Saves/merchendise.txt";

    std::ifstream input( filePath );
      string name;
    string description;
    map<Item*,int> itemMap;
    input>>name;
    merchandise.setName(name);
    getline(input,description);
    getline(input,name);
    merchandise.setDescription(description);

    string line;
    int pos;
    while(getline(input, line)) {
        pos=line.find(';');
        Item* item= getItemByName(line.substr(0,pos));
        itemMap.emplace(item,stoi(line.substr(pos+1)));
    }
    merchandise.setSaleList(itemMap);
    input.close();

}

void FileOperation::saveLevel(size_t level) {
    string filePath = "../src/Saves/level.txt";
    ofstream ofs;
    ofs.open(filePath,  ios::out);
    ofs <<level;
    ofs.close();

}

void FileOperation::loadLevel(size_t &level) {
    string filePath = "../src/Saves/level.txt";

    std::ifstream input( filePath );
    input>>level;

    input.close();
}
