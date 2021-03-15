//
// Created by hello on 2021-03-16.
//

vectior<Item*> getTotalListItem(){
    Armor*  bamen = new Armor("Bamen","level 4 with 80% against the damage",10000,4,5000,0.8);
    Armor*  leatherArmor= new Armor("Leather armor ","level 1 with 5% against the damage",100,1,100,0.05);
    Armor*  ironArmor= new Armor("iron armor ","level 3 with 20% against the damage",1000,3,700,0.2);
    Armor*  clothArmor= new Armor("cloth armor ","level 2 with 10% against the damage",500,2,300,0.1);

    Sword* leanSky= new Sword("against sky sword","level 4 with 95% pierce through armor",999999,4,100000,0.95);
    Sword* ironSword= new Sword("iron sword","level 2 with 20% pierce through armor",500,2,500,0.65);
    Sword* brassSword= new Sword("brass sword","level 3 with 40% pierce through armor",1000,3,1500,0.7);
    Sword* woodSword= new Sword("wood sword","level 1 with 5% pierce through armor",100,1,100,0.55);

    Ax* thorAx= new Sword("Ax of Thor","level 4 with 80% pierce through protection",88888,4,6666,0.8);
    Ax* ironAx= new Sword("iron ax","level 2 with 20% pierce through armor",500,2,500,0.2);
    Ax* brassAx= new Sword("brass ax","level 3 with 40% pierce through armor",1000,3,1500,0.4);
    Ax* woodAx= new Sword("wood ax","level 1 with 5% pierce through armor",100,1,100,0.05);



    Shield* ironShield = new Shield("iron shield","level 2 with 20% pierce through armor",500,2,500,0.10);
    Shield* brassShield= new Shield("brass shield","level 3 with 40% pierce through armor",300,3,200,0.15);
    Shield* woodShield("wood shield","level 1 with 5% pierce through armor",100,1,50,0.05);


    HP_Potion* hpPotion1= new HP_Potion("small bottle hp potion","level 1 hp potion",100,1,100);
    HP_Potion* hpPotion2= new HP_Potion("normal bottle hp potion","level 2 hp potion",200,2,300);
    HP_Potion* hpPotion3= new Shield("big bottle hp potion","level 3 hp potion",400,3,500);

    Diamond* Amethyst= new Diamond("Amethyst", "level 1, embed on defensive weapon will increase 100 points of defence", 300, 1, 100,0.05);
    Diamond* Emerald= new Diamond ("Emerald", "level 2, embed on defensive weapon will increase 100 points of defence", 500, 2, 300,0.10);
    Diamond* Ruby= new HP_PDiamondotion ("Ruby", "level 3,embed on defensive weapon will increase 100 points of defence", 1000, 3, 800,0.15);

}