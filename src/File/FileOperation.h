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

//    template<class T>
//    static void saveGame(const T &t);
//
//    template<class T>
//    static void loadGame(T &t);

    void saveChar(const Character &character);
};


#endif //FINALPROJECTWEEK5_FILEOPERATION_H
