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
//    ofs.write((const char *) &level_i, sizeof(int));

    ofs.close();
}

void FileOperation::loadGame(Character &c, int &i) {
    ifstream ifs;
    string filePath = "myFile.txt";
    ifs.open(filePath, ios::in | ios::trunc);

    if (!ifs.is_open()) {
        cout << "failed to open File!";
    } else {

        ifs.read((char *) &c, sizeof(Character));
//        ifs.read((char *) &i, sizeof(int));
        ifs.close();
    }
}

void FileOperation::saveGame(const Merchandise &merchandise) {
    string filePath = "merchandiseOnly.txt";
    ofstream ofs;
    ofs.open(filePath, ios::binary);
    ofs.write((const char *) &merchandise, sizeof(Merchandise));
    ofs.close();
}

void FileOperation::loadGame(Merchandise &merchandise) {
    ifstream ifs;
    string filePath = "merchandiseOnly.txt";
    ifs.open(filePath, ios::in |ios::binary  );

    if (!ifs.is_open()) {
        cout << "failed to open File!";
    } else {
        ifs.read((char *) &merchandise, sizeof(Merchandise));
        merchandise.printInfo();
        ifs.close();
    }
}



void FileOperation::loadGame(Merchandise &merchandise, int &i) {
    ifstream ifs;
    string filePath = "merchandiseOnly.txt";
    ifs.open(filePath, ios::in | ios::trunc);

    if (!ifs.is_open()) {
        cout << "failed to open File!";
    } else {
        ifs.read((char *) &merchandise, sizeof(Merchandise));
        ifs.read((char *) &i, sizeof(int));
        ifs.close();
    }
}

void FileOperation::saveGame(const Merchandise &merchandise, int level_i) {
//    string filePath = character.getCharName()+".txt";
    string filePath = "merchandiseOnly.txt";
    ofstream ofs;
    ofs.open(filePath, ios::binary | ios::out);
    ofs.write((const char *) &merchandise, sizeof(Merchandise));
    ofs.write((const char *) &level_i, sizeof(int));

    ofs.close();
}


