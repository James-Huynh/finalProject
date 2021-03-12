#pragma once
#include "../Inventory.h"
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
        Character(char roleIndex, string name = "TestName");
        void basicAttack(Character* opponent);
        // bool pickUpItem(Item* theItem);
        

    
};