#pragma once
#include "../Town/Merchandise.h"
#include "../Item/Weapon/Weapon.h"
#include "../Item/Weapon/Shield.h"
#include "../Item/Weapon/Sword.h"
#include "../Item/Weapon/Ax.h"
#include "../Item/Weapon/Armor.h"


// The wearable equipment on a character's body
class Equipment {
    private:
        Weapon* mainWeapon;
        Weapon* secWeapon;
        Weapon* armor;
    public:
        Equipment();
        void printEquipment() const;

        // Setters
        void setMainWeapon(Weapon* mainW);
        void setSecWeapon(Weapon* secW);
        void setArmor(Weapon* armor);

        // Getters
		Weapon* getArmor();
		Weapon* getMainWeapon();
		Weapon* getSecWeapon();
};
