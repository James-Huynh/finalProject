//
// Created by hello on 2021-03-13.
//

#include "Merchandise.h"
#include "../item/weapon/Shield.h"
#include "../item/weapon/Sword.h"
#include "../item/weapon/Ax.h"
#include "../item/weapon/Armor.h"
#include "../item/potion/HP_Potion.h"
#include "../item/potion/Diamond.h"
#include "../item/potion/MagicPotion.h"


int main(){
//    Armor(const string &name, const string &description, int buyPrice, int dmgValue, int protectValue, int protectBonus,
//    double weakenDmgProbability);
    Armor bamen("Bamen","level 10 with 80% against the damage",10000,5000,0.8);
    Armor  leatherArmor("Leather armor ","level 1 with 5% against the damage",100,100,0.05);
    Armor  ironArmor("iron armor ","level 3 with 20% against the damage",1000,700,0.2);
    Armor  clothArmor("cloth armor ","level 2 with 10% against the damage",500,300,0.1);

    Sword leanSky("against sky sword","level 10 with 95% pierce through armor",999999,100000,0.95);
    Sword ironSword("iron sword","level 2 with 20% pierce through armor",500,500,0.2);
    Sword brassSword("brass sword","level 3 with 40% pierce through armor",1000,1500,0.4);
    Sword woodSword("wood sword","level 1 with 5% pierce through armor",100,100,0.05);

    Ax thorAx("Ax of Thor","level 10 with 80% pierce through protection",88888,6666,0.8);
    Ax ironAx("iron ax","level 2 with 20% pierce through armor",500,500,0.2);
    Ax brassAx("brass ax","level 3 with 40% pierce through armor",1000,1500,0.4);
    Ax woodAx("wood ax","level 1 with 5% pierce through armor",100,100,0.05);



    Shield ironShield("iron ax","level 2 with 20% pierce through armor",500,500,0.2);
    Shield brassShield("brass ax","level 3 with 40% pierce through armor",300,200,0.1);
    Shield woodShield("wood ax","level 1 with 5% pierce through armor",100,50,0.05);

    HP_Potion hpPotion1("small bottle hp potion","level 1 hp potion",100,1,100);
    HP_Potion hpPotion2("normal bottle hp potion","level 2 hp potion",200,2,300);
    HP_Potion hpPotion3("big bottle hp potion","level 3 hp potion",400,3,500);

    Diamond Amethyst("Amethyst", "level 1, embed on defensive weapon will increase 100 points of defence", 300, 1, 100);
    Diamond Emerald ("Emerald", "level 2, embed on defensive weapon will increase 100 points of defence", 500, 2, 300);
    Diamond Ruby ("Ruby", "level 3,embed on defensive weapon will increase 100 points of defence", 1000, 3, 800);

    MagicPotion  lesserMP("lesser MagicPotion", "level 1, increase 100 attack value ", 300, 1, 100);
    MagicPotion normalMP ("normal MagicPotion", "level 2, increase 300 attack value", 500, 2, 300);
    MagicPotion superMP ("Super MagicPotion", "level 3,increase 500 attack value", 1000, 3, 500);

    map<Item*,int >saleList ={{&bamen,1},{&leatherArmor,30},{&ironArmor,10},{&clothArmor,20},
                              {&leanSky,1},{&ironSword,10},{&brassSword,100},{&woodSword,12},
                              {&thorAx,1},{&ironAx,11},{&brassAx,111},{&woodAx,22},
                              {&ironShield,10},{&brassShield,5},{&woodShield,4},
                              {&hpPotion1,10},{&hpPotion2,5},{&hpPotion3,4},
                              {&Amethyst,10},{&Emerald,5},{&Ruby,4},
                              {&lesserMP,10},{&normalMP,5},{&superMP,4},

    };

    Merchandise merchandise("Depanneur711","weapons and potions for sale");

    merchandise.setSaleList(saleList);
    merchandise.printInfo();
    return 0;
}