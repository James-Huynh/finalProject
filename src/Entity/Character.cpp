#include "Character.h"


Character::Character(string name, char roleId) : Role(roleId) {
	charName = name;
	xp = 0;
	level = 1;
	lvlDivision = 10.0;
	alive = true;
	currAtt = baseAtt;
	currDef = baseDef;
	currMaxHp = baseMaxHp;
	hp = currMaxHp;
	//	updateLevel();	// TO REMOVE
}

void Character::printCharacter() {
	cout << "\tName: " << charName << endl;
	printMyRole();
	cout << "\tTotal attack: " << computeTotalAttack() << endl;
	cout << "\tTotal defense: " << computeTotalDefense() << endl;
}


void Character::printEquipment() {
	myEquipment.printEquipment();
}

double Character::basicAttack(Character *opponent) {
	cout << charName << " uses basic attack on " << opponent->getCharName() << endl;	// May remove

	double maxDmg = computeDamageDealt();
	double finalDmg = opponent->takeDamage(maxDmg);

	cout << opponent->getCharName() << " lost " << finalDmg << " HP" << endl;

	return finalDmg;
}

double Character::takeDamage(double attackerDmg) {
	double finalDmg = computeDamageReceived(attackerDmg);
	hp = max(hp - finalDmg, 0.0);

	if (hp == 0) {
		alive = false;
		cout << charName << " has died" << endl;
	}

	return finalDmg;
}

// basic calculation for now
double Character::computeDamageDealt() {
	Weapon* currWeapon = myEquipment.getMainWeapon();
	double weaponDmg;
	double finalDmg;

	if(currWeapon != nullptr){
		weaponDmg = static_cast<double>(currWeapon->getAttackValue());
		if(weaponDmg == 0.0) {
			cout << "\tYour opponent's armor deflected the hit !" << endl;
			return 0;		// need to break because of a special condition when there's a deflection
		}
	}

	finalDmg = computeTotalAttack();

	return finalDmg;
}

// basic calculation for now
double Character::computeDamageReceived(double dmgIn) {
	double finalDefense = computeTotalDefense();
	double finalDmg = max(0.0, dmgIn - finalDefense);

	return finalDmg;
}

double Character::computeTotalAttack() {
	Weapon* mainWeapon = myEquipment.getMainWeapon();
	double weaponDmg = (mainWeapon == nullptr) ? 0.0 : static_cast<double>(mainWeapon->getAttackValue());
	double totalDmg = currAtt + weaponDmg;

	return totalDmg;
}

double Character::computeTotalDefense() {
	Weapon* currArmor = myEquipment.getArmor();
	double armorDefense = (currArmor == nullptr) ? 0.0 : static_cast<double>(currArmor->getDefenceValue());
	double finalDefense = armorDefense + currDef;

	return finalDefense;
}

void Character::addXp(double xpValue) {
	try {
		if (xpValue <= 0) {
			throw invalid_argument("Negative XP value not accepted");
		} else {
			xp += xpValue;
			updateLevel();
		}
	} catch (exception &e) {		// TO DO PRINT ERROR
		cout << "\tXP error: " << e.what() << endl;
	}

}

void Character::updateLevel() {
	double multiplier;
	double oldLevel = level;
	int newLvl = xp / 100 + 1;

	level = newLvl;
	multiplier = (newLvl / lvlDivision) + 1 - 0.10;

	currAtt = baseAtt * multiplier;
	currMaxHp = baseMaxHp * multiplier;
	currDef = baseDef * multiplier;

	// Check if your level has changed
	if (oldLevel != newLvl) {
		cout << "\tCongratulations ! You just leveled up." << endl;
		cout << "\tYou are now level " << newLvl << endl;
	}
}


void Character::equipMainWeapon(Weapon *mainWeap) {
	myEquipment.setMainWeapon(mainWeap);
}

void Character::equipSecWeapon(Weapon *secWeap) {
	myEquipment.setSecWeapon(secWeap);
}

void Character::setHealth(double value) {
	hp = value;
}

string& Character::getCharName() {
	return charName;
}

double Character::getHp() {
	return hp;
}

double Character::getMaxHp() {
	return currMaxHp;
}

bool Character::isAlive() {
	return alive;
}

void Character::equipArmor(Weapon *armor) {
	myEquipment.setArmor(armor);
}


Equipment& Character::getMyEquipment() {
	return myEquipment;
}

Inventory Character::getMyInventory() {
	return myInventory;
}

int Character::getXp() {
	return xp;
}

int Character::getLvl() {
	return level;
}
