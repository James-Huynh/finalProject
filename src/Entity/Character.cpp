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
	money = 0;
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
	cout << "\t" << charName << " uses basic attack on " << opponent->getCharName() << endl;

	double maxDmg = computeDamageDealt();
	double finalDmg = opponent->takeDamage(maxDmg);

	cout << "\t" << opponent->getCharName() << " lost " << finalDmg << " HP" << endl;

	return finalDmg;
}

double Character::takeDamage(double attackerDmg) {
	double finalDmg = computeDamageReceived(attackerDmg);
	hp = max(hp - finalDmg, 0.0);

	if (hp == 0) {
		alive = false;
		cout << "\t" << charName << " has died" << endl;
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
			cout << "\t" << charName << " missed his attack" << endl;
			return 0;
		}
	}

	finalDmg = computeTotalAttack();

	return finalDmg;
}

// basic calculation for now
double Character::computeDamageReceived(double dmgIn) {
	Weapon* currArmor = myEquipment.getArmor();
	double armorDef;
	double finalDefense;
	double finalDmg;

	if(currArmor != nullptr){
		armorDef = static_cast<double>(currArmor->getDefenceValue());
		if(armorDef == -1) {
			cout << charName << " deflected the attack" << endl;
			return 0;
		}
	}

	finalDefense = computeTotalDefense();
	finalDmg = max(0.0, dmgIn - finalDefense);

	return finalDmg;
}

double Character::computeTotalAttack() {
	Weapon* mainWeapon = myEquipment.getMainWeapon();
	double weaponDmg = (mainWeapon == nullptr) ? 0.0 : static_cast<double>(mainWeapon->getDmgValue());
	double totalDmg = currAtt + weaponDmg;

	return totalDmg;
}

double Character::computeTotalDefense() {
	Weapon* currArmor = myEquipment.getArmor();
	double armorDefense = (currArmor == nullptr) ? 0.0 : static_cast<double>(currArmor->getProtectValue());
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
		printCharacter();
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

double Character::getXp() {
	return xp;
}

bool Character::pickUpItem(Item* theItem){
	myInventory.addItem(theItem, 1);
	return true;
}

void Character::addHealth(double plusHealth){
	hp += plusHealth;
	if(hp > currMaxHp)
		hp = currMaxHp;
}

void Character::drinkPotion(){

	int potionPosUser;
	int plusHealthFromPotion;

	int nbPotions = myInventory.showPotions();
	cout << endl;

	if(nbPotions == 0){
		cout << "\tYou don't have any potions" << endl;
		return;
	}
	//which one do you want
	cout << "\tWhich potion do you want ? Enter the position:" << endl;

	cin >> potionPosUser;

	while(potionPosUser > nbPotions){
		cout << "\tInvalid position, choose again" << endl;
		cin >> potionPosUser;
	}
	plusHealthFromPotion = myInventory.drinkPotion(potionPosUser);
	addHealth(plusHealthFromPotion);
	cout << "\tYou drank a potion, you now have : " << hp << " HP" << endl << endl;
}

int Character::getMoney(){
	return money;
}

void Character::addMoney(int addedMoney){
	money += addedMoney;
}

void Character::removeMoney(int minusMoney){
	money -= minusMoney;
}

void Character::setMyInventory(const Inventory &myInventory) {
    Character::myInventory = myInventory;
}

void Character::setHp(double hp) {
    Character::hp = hp;
}

void Character::setMaxHp(double maxHp) {
    Character::baseMaxHp = baseMaxHp;
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

int Character::getLvl() {
	return level;
}
