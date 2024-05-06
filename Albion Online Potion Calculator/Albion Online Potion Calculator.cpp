/*
* This is a program project that is built on the Google Sheet Version with the same function.
*/

/*
* Notes: I am thinking of reviewing dictionaries/maps that I learned in a python class to structure data to easily access potion properties.
* Sample would be <key T3 Acid Potion><Formula, Weight, etc.>, also if possible structure formula in a way that would be best for solving multiple costs at once.
* Debating whether to continue trying to learn how to structure formula that would let me edit variables inside or have a set formula for each different potion (itemOne * multiplier) or (comfrey * 8).
* Current status is using manual inputs and running potion calculation one at a time. 
* Long term plans are calculate multiple potions after inputting all costs, using api similar to the google sheet version to automatically pull data from another program/websitefinally build a dashboard/website that would display what I wanted to see better than I could in a google sheet.
* Things to work on:
* Finish formula checking.
* Add in Artifact cost.
* Add in Return Rate.
* Add in Number of produced potions.
* Add in Crafting Tax using Item Value.
* Add in Market Tax.
* Add in Travel Planner Teleporting Cost.
* Add in Focus Cost related stuff.
* Add in Specialization Shet.
* Learn how to incorporate Enchanted potion, adding arcane extract as the seventh ingridient and how to structure it.
* Add Manual vs Api/Automatic Buttons.
*/

#include <iostream>
#include <string>

class ingredientCostFormuala {
public:
    double ingridientOne;
    double ingredientTwo;
    double ingredientThree;
    double ingredientFour;
    double ingredientFive;
    double ingredientSix;
    double ingredientSeven;
    std::string Potion;
    
    /*const int multiplyByFour;
    const int multiplyBySix;*/
    const int multipleByEight = 8;
    /*const int multiplyByTwelve;
    const int multiplyBySixteen;
    const int multiplyByEighteen;
    const int multiplyByTwentyFour;
    const int multiplyByThirtySix;
    const int multipleBySeventyTwo;*/

    
//public:
//    void setingridientOne(double ingridientOne) {
//        ingridientOne = ingridientOne;
//    }
//    double getingridientOne() {
//        return ingridientOne;
//    }

    //, double itemTwo, double itemThree, double itemFour, double itemFive, double itemSix, double itemSeven

    double setIngredientNames(double itemOne) {
            return ingridientOne * multipleByEight;
    }

    double calculateT3Potions() {
        //comfrey * 8
    }

    double calculateT4Potions() {
        /*Berserk = Werewolfs Fang + (goatsMilk * 16)
        Poison = (burdock*8) + (comfrey*4)
        Energy = (burdock*24) + (goatsMilk * 6)
        Gathering = Runestone_Tooth + (goatsButter * 16)
        Healing = (burdock * 24) + (hen egg * 6)
        Hellfire = Imps_Horn + (burdock * 16)
        Tornado = Dawnfeather + (burdock * 16)*/
    }
    
    double calculateT5Potions() {
        
    }

    double calculateT6Potions() {

    }

    double calculateT7Potions() {

    }

    double calculateT8Potions() {

    }


};

int main()
{
    // Potions
    /*double t3PotionAcid;
    double t3PotionCleansing;
    double t3PotionCalming;
    double t3PotionGigantify;
    double t3PotionSticky;
    double t3PotionResistance;
    */
    /*double t4PotionBerserk;
    double t4PotionPoison;
    double t4PotionEnergy;
    double t4PotionGathering;
    double t4PotionHealing;
    double t4PotionHellfire;
    double t4PotionTornado;

    double t5PotionAcid;
    double t5PotionCleansing;
    double t5PotionCalming;
    double t5PotionGigantify;
    double t5PotionSticky;
    double t5PotionResistance;

    double t6PotionBerserk;
    double t6PotionPoison;
    double t6PotionEnergy;
    double t6PotionGathering;
    double t6PotionHealing;
    double t6PotionHellfire;
    double t6PotionTornado;

    double t7PotionAcid;
    double t7PotionCleansing;
    double t7PotionCalming;
    double t7PotionGigantify;
    double t7PotionSticky;
    double t7PotionResistance;

    double t8PotionBerserk;
    double t8PotionInvisibility;
    double t8PotionPoison;
    double t8PotionGathering;
    double t8PotionHellfire;
    double t8PotionTornado;*/

    // ingredients

    //double arcaneAgaric;

    double comfrey;
    //double henEgg;

    /*double burdock;
    double goatsButter;
    double goatsMilk;

    double gooseEgg;
    double teasel;

    double sheepsButter;
    double foxglove;
    double sheepsMilk;
    double potatoes;

    double corn;
    double mullein;
    
    double cowsButter;
    double cowsMilk;
    double pumpkin;
    double yarrow;*/

    std::cout << "Enter price of comfrey: " << std::endl;
    std::cin >> comfrey;
    ingredientCostFormuala comfreyPotion;
    std::cout << comfreyPotion.setIngredientNames(comfrey) << std::endl;


    return 0;
}
