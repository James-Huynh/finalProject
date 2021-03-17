#pragma once

#include <string>
#include <algorithm>

#include "Equipment.h"
#include "Inventory.h"
#include "Role.h"


// #include "Item.h"

class Character : public Role {
    private:
        double hp, maxHp, xp;
        bool alive;
        string charName;
        Inventory myInventory;
        Equipment myEquipment;
        double computeDamageDealt(Weapon* currWeapon);		// helper function that computes the total gross damage depending on what is used
        double computeDamageReceived(double dmgIn);
        int money;


    public:
        Character(string name = "TestName", char roleId = '1');


        double basicAttack(Character* opponent);		// Basic attack uses the main weapon, returns the final damage done
        double takeDamage(double attackerDamage);		// Reduces the life of the character according the attacker and its defense, returns the final damage taken

        void printCharacter();
        void printEquipment();

        void equipMainWeapon(Weapon* mainWeap);
        void equipSecWeapon(Weapon* secWeap);
        void equipArmor(Weapon* armor);

        /*  character can buy/sell in merchandise*/
        void buyItems();
        void sellItems();

        bool pickUpItem(Item* theItem);
        void addHealth(double plusHealth);
        void drinkPotion();
        
        // Accessors and mutators
		string& getCharName();
		void setHealth(double value);
		double getHp();
		bool isAlive();
		double getMaxHp();
		Equipment& getMyEquipment();
		Inventory getMyInventory();
		double getXp();
		int getMoney();
		void addMoney(int addedMoney);
		void removeMoney(int minusMoney);

};
