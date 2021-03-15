#pragma once
#include "Inventory.h"
#include "Equipment.h"
#include "Role.h"
// #include "Item.h"

class Character : public Role {
    private:
        double hp;
        double xp;
        bool isAlive;
        string charName;
        Inventory myInventory;
        Equipment myEquipment;

    public:
        Character(string name = "TestName", char roleId = '1');
        void basicAttack(Character* opponent);
        void printCharacter();
        // bool pickUpItem(Item* theItem);
        

    
};