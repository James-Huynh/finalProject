#include <iostream>
#include "Character.h"
#include "Role.h"
#include "Equipment.h"
#include "../item/weapon/Weapon.h"
#include "../item/weapon/Shield.h"
#include "../item/weapon/Sword.h"
#include "../item/weapon/Ax.h"
#include "../item/weapon/Armor.h"

void testEquipment() {
    Role::initializeRoles();
    Character kingSam("Sam", '1');

    Sword mySword("iron sword","level 2 with 20% pierce through armor",500,500,0.2);
    Armor myArmor("Leather armor ","level 1 with 5% against the damage",100,100,0.05);
    Shield myShield("iron ax","level 2 with 20% pierce through armor",500,500,0.2);

    // Weapon* ironSwordPtr = new Sword("iron sword","level 2 with 20% pierce through armor",500,500,0.2);
    // Weapon* leatherArmorPtr = new Armor("Leather armor ","level 1 with 5% against the damage",100,100,0.05);
    // Weapon* ironShieldPtr = new Shield("iron ax","level 2 with 20% pierce through armor",500,500,0.2);



    // kingSam;
}

void testCharacter() {
    Role::initializeRoles();
    Character kingSam("Sam", '1');
    kingSam.printCharacter();
}

void testRoles() {
    Role::initializeRoles();
    Role::printRoles();
}



int main() {
    testRoles();
    cout << endl;
    testCharacter();
    cout << endl;
    testEquipment();

    return 0;
}