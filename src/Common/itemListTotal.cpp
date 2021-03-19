//
// Created by hello on 2021-03-16.
//

#include "itemListTotal.h"

//Weapon(const string &name, const string &description, int buyPrice, int level, int dmgValue, int protectValue, bool isAttack);

vector<Item*> getTotalListItem(){
	auto*  clothArmor= new Armor("Cloth Armor ","Some armor is better than no armor", 500, 1, 80, 0.0);
	auto*  leatherArmor= new Armor("Leather Armor","Common leather armor with basic defense", 1000, 3, 500, 0.1);
	auto*  ironArmor= new Armor("Iron Armor ","Sturdy Iron armor with decent protection and deflection", 2000, 5, 1000, 0.3);
	auto*  achillesArmor = new Armor("Achilles' Armor", "Legendary armor created by Hephaestus and said to be impenetrable", 10000, 10, 5000, 0.5);

	// Swords have balanced attributes
	auto* woodSword= new Sword("Wood Sword","Some weapon is better than no weapon", 800, 1, 100, 0.6);
	auto* brassSword = new Sword("Brass Sword","Forged with care, popular with commoners", 1600, 3, 550, 0.7);
	auto* ironSword = new Sword("Iron Sword","Decent sword with decent damage", 3200, 5, 1200, 0.8);
	auto* excaliburSword = new Sword("Excalibur","Legendary sword forged on the Isle of Avalon and said to belong to the true king", 16000, 10, 6000, 1.0);

	// Axes have higher damage and less hit rate
	auto* woodAxe = new Ax("Wood axe","How much wood would a woodchuck chuck?", 900, 1, 120, 0.5);
	auto* brassAxe = new Ax("Brass axe","Weird axe, but it works and hurts", 1800, 3, 600, 0.6);
	auto* ironAxe = new Ax("Iron axe","Decent axe popular among vikings and bandits", 3600, 5, 1400, 0.7);
	auto* panguAxe = new Ax("Pangu's axe","Legendary axe used to separate heaven and earth", 18000, 10, 7000, 0.9);

	// NOT used, special feature that allows to you to dodge and block again
	auto* woodShield= new Shield("Wood shield","Basic wooden shield, cheap to make", 100, 1, 100, 0.1);
	auto* ironShield = new Shield("Iron shield","Heavy and popular shield around the common realm", 500, 3, 500, 0.2);
	auto* brassShield= new Shield("Brass shield","Fancy shield with decent protection", 1000, 5, 1000, 0.3);

	auto* hpPotion1= new HP_Potion("Small health potion","Heals for 50 hp",100, 1, 50);
	auto* hpPotion2= new HP_Potion("Medium health potion","Heals for 100 hp",200, 3, 100);
	auto* hpPotion3= new HP_Potion("Big health potion","Heals for 500 hp",400, 5, 500);

	// NOT used, special feature that allows you to apply runes and buff your equipment
	auto* amethyst= new Diamond("Amethyst", "level 1, embed on defensive Weapon will increase 100 points of defence", 1000, 1, 100, 0.1);
	auto* emerald= new Diamond ("Emerald", "level 2, embed on defensive Weapon will increase 100 points of defence", 5000, 3, 500, 0.2);
	auto* ruby= new Diamond ("Ruby", "level 3, embed on defensive Weapon will increase 100 points of defence", 10000, 5, 1000, 0.3);

	auto* bigGold = new Gold ("Big Gold", "Worth 1000",1000);
	auto* avgGold = new Gold ("Medium Gold", "Worth 500",500);
	auto* smallGold = new Gold ("Small Gold", "Worth 100",100);


	return {
		achillesArmor,leatherArmor,ironArmor,clothArmor,
		excaliburSword,ironSword,brassSword,woodSword,
		panguAxe,ironAxe,brassAxe,woodAxe,
		ironShield,brassShield,woodShield,
		hpPotion1,hpPotion2,hpPotion3,
		amethyst,emerald,ruby,
		bigGold,avgGold,smallGold,

	};
}
