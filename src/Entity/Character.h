#pragma once

#include <string>
#include <algorithm>
#include <cmath>

#include "Equipment.h"
#include "Inventory.h"
#include "Role.h"


// #include "Item.h"

class Character : public Role {
    private:
        double hp, currMaxHp, currAtt, currDef, lvlDivision;
        int level, xp;
        bool alive;
        string charName;
        Inventory myInventory;
        Equipment myEquipment;
        double computeDamageDealt();					// helper function that computes the total attacking damage
        double computeDamageReceived(double dmgIn); 	// helper function that computes the final damage receives
        double computeTotalAttack();
        double computeTotalDefense();
        double takeDamage(double attackerDamage);		// Reduces the life of the character according the attacker and its defense, returns the final damage taken


    public:
        Character(string name = "TestName", char roleId = '1');

        double basicAttack(Character* opponent);		// Basic attack uses the main weapon, returns the final damage done

        void printCharacter();
        void printEquipment();

        void equipMainWeapon(Weapon* mainWeap);
        void equipSecWeapon(Weapon* secWeap);
        void equipArmor(Weapon* armor);

        /*  character can buy/sell in merchandise*/
        void buyItems();
        void sellItems();

        void addXp(double xpValue);
        void updateLevel();			// Check if there was a level up, and adjust the character's attributes accordingly

        // Accessors and mutators
		string& getCharName();
		void setHealth(double value);
		double getHp();
		bool isAlive();
		double getMaxHp();
		Equipment& getMyEquipment();
		Inventory getMyInventory();
		int getXp();
		int getLvl();
};
