//
// Created by hello on 2021-03-13.
//

#include "Merchandise.h"
#include "../item/weapon/Shield.h"
#include "../item/weapon/Sword.h"
#include "../item/weapon/Ax.h"
#include "../item/weapon/Armor.h"


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

    map<Item*,int >saleList ={{&bamen,1},{&leatherArmor,30},{&ironArmor,10},{&clothArmor,20},
                              {&leanSky,1},{&ironSword,10},{&brassSword,100},{&woodSword,12},
                              {&thorAx,1},{&ironAx,11},{&brassAx,111},{&woodAx,22},
                              {&ironShield,10},{&brassShield,5},{&woodShield,4}
    };

    Merchandise merchandise("Depanneur711","weapons and potions for sale");

    merchandise.setSaleList(saleList);
    merchandise.printInfo();
    return 0;
}