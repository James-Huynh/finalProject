#include "Character.h"


Character::Character(string name, char roleId) : Role(roleId) {
    charName = name;
    xp = 0.0;
    hp = 100.0;
    maxHp = 100.0;
    alive = true;
}

void Character::printCharacter() {
    cout << "Name: " << charName << endl;
    printRoles();
}


void Character::printEquipment() {
	myEquipment.printEquipment();
}

double Character::basicAttack(Character *opponent) {
	cout << charName << " uses basic attack on " << opponent->getCharName() << endl;

	double maxDmg = computeDamageDealt(myEquipment.getMainWeapon());
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
double Character::computeDamageDealt(Weapon* currWeapon) {
	double baseDmg = baseAtt;
	double weaponDmg = (currWeapon == nullptr) ? 0.0 : static_cast<double>(currWeapon->getAttackValue());
	double finalDmg = baseDmg + weaponDmg;


	return finalDmg;
}

// basic calculation for now
double Character::computeDamageReceived(double dmgIn) {
	Weapon* currArmor = myEquipment.getArmor();
	double defense = (currArmor == nullptr) ? 0.0 : currArmor->getDefenceValue();

//	cout << "currArmor: " << defense << endl;
//	cout << "dmgIn: " << dmgIn << endl;
	double finalDmg = max(0.0, dmgIn - defense);

	return finalDmg;
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
	return maxHp;
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

double Character::getXp() {
	return xp;
}

void Character::setMyInventory(const Inventory &myInventory) {
    Character::myInventory = myInventory;
}

void Character::setHp(double hp) {
    Character::hp = hp;
}

void Character::setMaxHp(double maxHp) {
    Character::maxHp = maxHp;
}

void Character::setXp(double xp) {
    Character::xp = xp;
}

void Character::setAlive(bool alive) {
    Character::alive = alive;
}

const string &Character::getCharName() const {
    return charName;
}

void Character::setCharName(const string &charName) {
    Character::charName = charName;
}

void Character::setMyEquipment(const Equipment &myEquipment) {
    Character::myEquipment = myEquipment;
}
