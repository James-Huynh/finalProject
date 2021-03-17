#include "Character.h"


Character::Character(string name, char roleId) : Role(roleId) {
    charName = name;
    xp = 0.0;
    hp = 100.0;
    maxHp = 100.0;
    alive = true;
    money = 0;
}

void Character::printCharacter() {
    cout << "\t" << "Name: " << charName << endl;
    printRoles();
}


void Character::printEquipment() {
	myEquipment.printEquipment();
}

double Character::basicAttack(Character *opponent) {
	cout << "\t" << charName << " uses basic attack on " << opponent->getCharName() << endl;

	double maxDmg = computeDamageDealt(myEquipment.getMainWeapon());
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
double Character::computeDamageDealt(Weapon* currWeapon) {
	double baseDmg = baseAtt;
	//double weaponDmg = (currWeapon == nullptr) ? 0.0 : static_cast<double>(currWeapon->getAttackValue());
	double weaponDmg;
	if(currWeapon == nullptr){
		weaponDmg = 0.0;
	} else {
		weaponDmg = static_cast<double>(currWeapon->getAttackValue());
		if(weaponDmg == 0.0)
			cout << "\tYour opponent's armor deflected the hit !" << endl;
	}
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

bool Character::pickUpItem(Item* theItem){
	myInventory.addItem(theItem, 1);
}

void Character::addHealth(double plusHealth){
	hp += plusHealth;
	if(hp > maxHp)
		hp = maxHp;
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

