#include "Role.h"

Role::Role(char roleIndex) {
    switch(roleIndex) {
        case '1': {
            roleName = "Warrior";
            baseAtt = 100;
            baseDef = 100;
        } break;

        case '2': {
            roleName = "Assassin";
            baseAtt = 150;
            baseDef = 50;
        } break;

        default:
            break;
    }
}