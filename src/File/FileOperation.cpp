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
    string filePath = "merchandiseOnly.txt";
    ofstream ofs;

    ofs.open(filePath,  ios::out | ios::binary);
    ofs>>character.getCharName()>>character.

    ofs.close();
}

