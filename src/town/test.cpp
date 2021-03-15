//
// Created by hello on 2021-03-13.
//

#include "Merchandise.h"
#include "../item/weapon/Shield.h"
#include "../item/weapon/Sword.h"
#include "../item/weapon/Ax.h"
#include "../item/weapon/Armor.h"
#include "../item/potion/HP_Potion.h"
#include "../item/potion/MagicPotion.h"



int testMain(){


    Armor bamen("Bamen","level 4 with 80% against the damage",10000,4,5000,0.8);
    Armor  leatherArmor("Leather armor ","level 1 with 5% against the damage",100,1,100,0.05);
    Armor  ironArmor("iron armor ","level 3 with 20% against the damage",1000,3,700,0.2);
    Armor  clothArmor("cloth armor ","level 2 with 10% against the damage",500,2,300,0.1);

    Sword leanSky("against sky sword","level 4 with 95% pierce through armor",999999,4,100000,0.95);
    Sword ironSword("iron sword","level 2 with 20% pierce through armor",500,2,500,0.65);
    Sword brassSword("brass sword","level 3 with 40% pierce through armor",1000,3,1500,0.7);
    Sword woodSword("wood sword","level 1 with 5% pierce through armor",100,1,100,0.55);

    Ax thorAx("Ax of Thor","level 4 with 80% pierce through protection",88888,4,6666,0.8);
    Ax ironAx("iron ax","level 2 with 20% pierce through armor",500,2,500,0.2);
    Ax brassAx("brass ax","level 3 with 40% pierce through armor",1000,3,1500,0.4);
    Ax woodAx("wood ax","level 1 with 5% pierce through armor",100,1,100,0.05);



    Shield ironShield("iron shield","level 2 with 20% pierce through armor",500,2,500,0.10);
    Shield brassShield("brass shield","level 3 with 40% pierce through armor",300,3,200,0.15);
    Shield woodShield("wood shield","level 1 with 5% pierce through armor",100,1,50,0.05);


    HP_Potion hpPotion1("small bottle hp potion","level 1 hp potion",100,1,100);
    HP_Potion hpPotion2("normal bottle hp potion","level 2 hp potion",200,2,300);
    HP_Potion hpPotion3("big bottle hp potion","level 3 hp potion",400,3,500);

    Diamond Amethyst("Amethyst", "level 1, embed on defensive weapon will increase 100 points of defence", 300, 1, 100,0.05);
    Diamond Emerald ("Emerald", "level 2, embed on defensive weapon will increase 100 points of defence", 500, 2, 300,0.10);
    Diamond Ruby ("Ruby", "level 3,embed on defensive weapon will increase 100 points of defence", 1000, 3, 800,0.15);

    MagicPotion  lesserMP("lesser MagicPotion", "level 1, increase 100 attack value ", 300, 1, 100);
    MagicPotion normalMP ("normal MagicPotion", "level 2, increase 300 attack value", 500, 2, 300);
    MagicPotion superMP ("Super MagicPotion", "level 3,increase 500 attack value", 1000, 3, 500);


    map<Item*,int >saleList ={{&bamen,Merchandise::getRandomNumByLevel(&bamen)},{&leatherArmor,Merchandise::getRandomNumByLevel(&leatherArmor)},{&ironArmor,Merchandise::getRandomNumByLevel(&leatherArmor)},{&clothArmor,Merchandise::getRandomNumByLevel(&leatherArmor)},
                              {&leanSky,Merchandise::getRandomNumByLevel(&leanSky)},{&ironSword,Merchandise::getRandomNumByLevel(&ironSword)},{&brassSword,Merchandise::getRandomNumByLevel(&brassSword)},{&woodSword,Merchandise::getRandomNumByLevel(&woodSword)},
                              {&thorAx,Merchandise::getRandomNumByLevel(&thorAx)},{&ironAx,Merchandise::getRandomNumByLevel(&ironAx)},{&brassAx,Merchandise::getRandomNumByLevel(&brassAx)},{&woodAx,Merchandise::getRandomNumByLevel(&woodAx)},
                              {&ironShield,Merchandise::getRandomNumByLevel(&ironShield)},{&brassShield,Merchandise::getRandomNumByLevel(&brassShield)},{&woodShield,Merchandise::getRandomNumByLevel(&woodShield)},
                              {&hpPotion1,Merchandise::getRandomNumByLevel(&hpPotion1)},{&hpPotion2,Merchandise::getRandomNumByLevel(&hpPotion2)},{&hpPotion3,Merchandise::getRandomNumByLevel(&hpPotion3)},
                              {&Amethyst,Merchandise::getRandomNumByLevel(&Amethyst)},{&Emerald,Merchandise::getRandomNumByLevel(&Emerald)},{&Ruby,Merchandise::getRandomNumByLevel(&Ruby)},
                              {&lesserMP,Merchandise::getRandomNumByLevel(&lesserMP)},{&normalMP,Merchandise::getRandomNumByLevel(&normalMP)},{&superMP,Merchandise::getRandomNumByLevel(&superMP)},

    };

    Merchandise merchandise("Depanneur711","weapons and potions for sale");
    cout <<"before add diamond"<<endl;
    brassSword.getAttackValue();
    brassSword.embedDiamond(&Emerald);
    cout <<"after add diamond"<<endl;
    brassSword.getAttackValue();
    cout <<"--------------------------------------"<<endl;

    cout <<"after add more diamonds"<<endl;
    brassSword.embedDiamond(&Emerald);
    brassSword.getAttackValue();
    brassSword.embedDiamond(&Emerald);
    brassSword.getAttackValue();
    brassSword.embedDiamond(&Emerald);
    brassSword.getAttackValue();
    brassSword.embedDiamond(&Emerald);
    brassSword.getAttackValue();
    cout <<"--------------------------------------"<<endl;


    cout <<"before add diamond"<<endl;
    woodSword.getAttackValue();
    woodSword.embedDiamond(&Ruby);
    cout <<"after failed to add diamond"<<endl;
    woodSword.getAttackValue();
    cout <<"--------------------------------------"<<endl;


    cout <<"before add diamond"<<endl;
    ironShield.getDefenceValue();
    ironShield.embedDiamond(&Emerald);
    cout <<"after add diamond"<<endl;
    ironShield.getDefenceValue();
    cout <<"--------------------------------------"<<endl;



    merchandise.setSaleList(saleList);
    merchandise.printInfo();
    return 0;
}
