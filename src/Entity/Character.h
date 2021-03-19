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

		void setHealth(double value);

     Inventory &getMyInventory() ;

    void setMyInventory(const Inventory &myInventory);

    const Equipment &getMyEquipment() const;

    void setMyEquipment(const Equipment &myEquipment);

    double getHp() const;



    double getCurrMaxHp() const;

    void setCurrMaxHp(double currMaxHp);

    double getCurrAtt() const;

    void setCurrAtt(double currAtt);

    double getCurrDef() const;

    void setCurrDef(double currDef);

    double getLvlDivision() const;

    void setLvlDivision(double lvlDivision);

    int getLevel() const;

    void setLevel(int level);

    int getXp() const;

    void setXp1(int xp);

    bool isAlive() const;

    int getMoney() const;

    void setMoney(int money);

    const string& getCharName() const;

    void addMoney(int addedMoney);
		void removeMoney(int minusMoney);

		int getLvl();

    string toSave()const;


    double getMaxHp();
};
