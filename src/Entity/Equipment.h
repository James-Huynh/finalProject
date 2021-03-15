#pragma once
#include "../town/Merchandise.h"
#include "../item/weapon/Weapon.h"
#include "../item/weapon/Shield.h"
#include "../item/weapon/Sword.h"
#include "../item/weapon/Ax.h"
#include "../item/weapon/Armor.h"


// The wearable equipment on a character's body
class Equipment {
    private:
        Weapon* mainWeapon;
        Weapon* secWeapon;
        Weapon* armor;
    public:
        Equipment();
        void setMainWeapon(Weapon* mainW);
        void setSecWeapon(Weapon* secW);
        void setArmor(Weapon* armor);
        void printEquipment();
};
