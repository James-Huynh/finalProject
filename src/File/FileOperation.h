//
// Created by hello on 2021-03-18.
//

#ifndef FINALPROJECTWEEK5_FILEOPERATION_H
#define FINALPROJECTWEEK5_FILEOPERATION_H


#include "../Entity/Character.h"

class FileOperation {
public:
   static void saveGame(const Character &character, int level_i);
   static void loadGame(const string& filePath , Character&c, int &i);

    static void saveGame(const Character &character, int level_i,const Merchandise &merchandise);
    static void loadGame(const string& filePath ,const Character &character, Merchandise& Merchandise, int &level_i);

};


#endif //FINALPROJECTWEEK5_FILEOPERATION_H
