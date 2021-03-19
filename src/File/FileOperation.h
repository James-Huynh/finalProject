//
// Created by hello on 2021-03-18.
//

#ifndef FINALPROJECTWEEK5_FILEOPERATION_H
#define FINALPROJECTWEEK5_FILEOPERATION_H


#include "../Entity/Character.h"
#include "../Item/Weapon/Armor.h"
#include "../Item/Weapon/Sword.h"
#include "../Item/Weapon/Ax.h"
#include "../Item/Weapon/Shield.h"
#include "../Item/Potion/HP_Potion.h"
#include "../Item/Money/Gold.h"
#include "../Item/Potion/Diamond.h"
#include <vector>

class FileOperation {

public:




    static void saveChar(const Character &character);



    static void loadChar(Character &character);


    static Item *getItemByName(const string &name);

    static void saveEqu(const Character &character);

    static void saveInven(Character character);

    static void saveMerchandise(Merchandise merchandise);

    static void loadMerchandise(Merchandise &merchandise);

    static void saveLevel(size_t level);

    static void loadLevel(size_t &level);


};


#endif //FINALPROJECTWEEK5_FILEOPERATION_H
