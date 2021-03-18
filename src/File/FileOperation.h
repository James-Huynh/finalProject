//
// Created by hello on 2021-03-18.
//

#ifndef FINALPROJECTWEEK5_FILEOPERATION_H
#define FINALPROJECTWEEK5_FILEOPERATION_H


#include "../Entity/Character.h"

class FileOperation {
public:
   static void saveGame(const Character &character, int level_i);
   static void loadGame(Character&c, int &i);

    static void saveGame(const Merchandise &merchandise, int level_i);

    static void loadGame(Merchandise &merchandise, int &i);

    static void saveGame(const Merchandise &merchandise);

    static void loadGame(Merchandise &merchandise);
};


#endif //FINALPROJECTWEEK5_FILEOPERATION_H
