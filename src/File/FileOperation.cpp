//
// Created by hello on 2021-03-18.
//

#include <fstream>
#include "FileOperation.h"

void FileOperation::saveGame(const Character &character, int level_i) {

//    string filePath = character.getCharName()+".txt";
    string filePath = "myFile.txt";
    ofstream ofs;
    ofs.open(filePath, ios::binary);
    ofs.write((const char *) &character, sizeof(Character));
    ofs.write((const char *) &level_i, sizeof(int));

    ofs.close();
}

void FileOperation::loadGame(const string &filePath, Character &c, int &i) {
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

void FileOperation::saveGame(const Character &character, int level_i, const Merchandise &merchandise) {
    string filePath = "myFile2.txt";
    ofstream ofs;

    ofs.open(filePath, ios::binary);


    ofs.write((const char *) &character, sizeof(Character));

    ofs.write((const char *) &merchandise, sizeof(Merchandise));

    ofs.write((const char *) &level_i, sizeof(int));


    ofs.close();
}

void
FileOperation::loadGame(const string &filePath, const Character &character, Merchandise &merchandise, int &level_i) {
    ifstream ifs;
    ifs.open(filePath, ios::binary);

    if (!ifs.is_open()) {
        cout << "failed to open File!";
    } else {
        Merchandise merchandise1;
        ifs.read((char *) &character, sizeof(Character));
        ifs.read((char *) &merchandise1, sizeof(Merchandise));
        ifs.read((char *) &level_i, sizeof(int));
        merchandise.setName(merchandise1.getName());
        merchandise.setDescription(merchandise1.getDescription());
        merchandise.setSaleList(merchandise1.getSaleList());
        ifs.close();
    }
}


