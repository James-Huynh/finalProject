//
// Created by hello on 2021-03-18.
//

#include <fstream>
#include "FileOperation.h"

void FileOperation::saveGame(const Character& character, int level_i) {

//    string filePath = character.getCharName()+".txt";
    string filePath ="myFile";
    ofstream ofs;
    ofs.open(filePath, ios::binary );
    ofs.write((const char *) &character, sizeof(Character));
    ofs.write((const char *) &level_i, sizeof(int));

    ofs.close();
}

void FileOperation::loadGame(const string& filePath  ,Character&c, int &i) {
    ifstream ifs;
    ifs.open(filePath, ios::in);

    if (!ifs.is_open()) {
        cout << "failed to open File!";
    } else {
        ifs.read((char *) &c, sizeof(Character));

        ifs.read((char *) &i, sizeof(int));


        ifs.close();
    }
}
