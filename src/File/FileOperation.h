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
   static void saveGame(const Character &character, int level_i);
   static void loadGame(Character&c, int &i);

    static void saveGame(const Merchandise &merchandise, int level_i);

    static void loadGame(Merchandise &merchandise, int &i);

//    template<class T>
//    static void saveGame(const T &t);
//
//    template<class T>
//    static void loadGame(T &t);

    static void saveChar(const Character &character);



    static void loadChar(Character &character);


    static Item *getItemByName(const string &name);

    static void saveEqu(const Character &character);

    static void saveInven(Character character);
};


#endif //FINALPROJECTWEEK5_FILEOPERATION_H
