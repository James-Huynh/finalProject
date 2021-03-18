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
        int money;
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

        bool pickUpItem(Item* theItem);
        void addHealth(double plusHealth);
        void drinkPotion();

        void addXp(double xpValue);
        void updateLevel();			// Check if there was a level up, and adjust the character's attributes accordingly

        // Accessors and mutators
        void setHp(double hp);
        void setMaxHp(double maxHp);
        void setXp(double xp);
		void setAlive(bool alive);
		void setCharName(const string &charName);
		void setMyEquipment(const Equipment &myEquipment);
		void setHealth(double value);
		void setMyInventory(const Inventory &myInventory);

		bool isAlive();

		const string& getCharName() const;

		double getHp();

		double getMaxHp();

		Equipment& getMyEquipment();
		Inventory getMyInventory();

		double getXp();

		int getMoney();

		void addMoney(int addedMoney);
		void removeMoney(int minusMoney);

		int getLvl();

};
