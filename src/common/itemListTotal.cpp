//
// Created by hello on 2021-03-16.
//

#include "itemListTotal.h"
#include "../item/Money/Gold.h"

vector<Item*> getTotalListItem(){
    auto*  bamen = new Armor("Bamen","level 4 with 80% against the damage",10000,4,5000,0.8);
    auto*  leatherArmor= new Armor("Leather armor ","level 1 with 5% against the damage",100,1,100,0.05);
    auto*  ironArmor= new Armor("iron armor ","level 3 with 20% against the damage",1000,3,700,0.2);
    auto*  clothArmor= new Armor("cloth armor ","level 2 with 10% against the damage",500,2,300,0.1);

    auto* leanSky= new Sword("against sky sword","level 4 with 95% pierce through armor",999999,4,100000,0.95);
    auto* ironSword= new Sword("iron sword","level 2 with 20% pierce through armor",500,2,500,0.65);
    auto* brassSword= new Sword("brass sword","level 3 with 40% pierce through armor",1000,3,1500,0.7);
    auto* woodSword= new Sword("wood sword","level 1 with 5% pierce through armor",100,1,100,0.55);

    auto* thorAx= new Ax("Ax of Thor","level 4 with 80% pierce through protection",88888,4,6666,0.8);
    auto* ironAx= new Ax("iron ax","level 2 with 20% pierce through armor",500,2,500,0.2);
    auto* brassAx= new Ax("brass ax","level 3 with 40% pierce through armor",1000,3,1500,0.4);
    auto* woodAx= new Ax("wood ax","level 1 with 5% pierce through armor",100,1,100,0.05);



    auto* ironShield = new Shield("iron shield","level 2 with 20% pierce through armor",500,2,500,0.10);
    auto* brassShield= new Shield("brass shield","level 3 with 40% pierce through armor",300,3,200,0.15);
    auto* woodShield= new Shield("wood shield","level 1 with 5% pierce through armor",100,1,50,0.05);


    auto* hpPotion1= new HP_Potion("small hp","level 1 hp potion",100,1,100);
    auto* hpPotion2= new HP_Potion("normal hp","level 2 hp potion",200,2,300);
    auto* hpPotion3= new HP_Potion("big hp","level 3 hp potion",400,3,500);

    auto* amethyst= new Diamond("Amethyst", "level 1, embed on defensive weapon will increase 100 points of defence", 300, 1, 100,0.05);
    auto* emerald= new Diamond ("Emerald", "level 2, embed on defensive weapon will increase 100 points of defence", 500, 2, 300,0.10);
    auto* ruby= new Diamond ("Ruby", "level 3,embed on defensive weapon will increase 100 points of defence", 1000, 3, 800,0.15);


    auto* bigGold= new Gold ("Big Gold", "Big Gold",1000);
    auto* avgGold= new Gold ("Gold", "Big Gold",500);
    auto* smallGold= new Gold ("Small Gold", "Big Gold",100);


    return {
            bamen,leatherArmor,ironArmor,clothArmor,
            leanSky,ironSword,brassSword,woodSword,
            thorAx,ironAx,brassAx,woodAx,
            ironShield,brassShield,woodShield,
            hpPotion1,hpPotion2,hpPotion3,
            amethyst,emerald,ruby,
            bigGold,avgGold,smallGold
    };
}