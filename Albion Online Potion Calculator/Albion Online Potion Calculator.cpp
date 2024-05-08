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
private:
    /*double ingridientOneCost;
    double ingredientTwoCost;
    double ingredientThreeCost;
    double ingredientFourCost;
    double ingredientFiveCost;
    double arcaneExtractCost;
    double artifactCost;
    std::string potion;*/

    double arcaneAgaric;

    double comfrey;
    double henEgg;

    double burdock;
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
    double yarrow;
    
    /*const int multiplyByFour = 4;
    const int multiplyBySix = 6;*/
    const int multiplyByEight = 8;
    /*const int multiplyByTwelve = 12;
    const int multiplyBySixteen = 16;
    const int multiplyByEighteen = 18;
    const int multiplyByTwentyFour = 24;
    const int multiplyByThirtySix = 36;
    const int multiplyBySeventyTwo = 72;*/

    
public:
//    void setingridientone(double ingridientone) {
//        ingridientone = ingridientone;
//    }
//    double getingridientone() {
//        return ingridientone;
//    }
//
//    , double itemTwo, double itemThree, double itemFour, double itemFive, double itemSix, double itemSeven
//
//    double setIngredientNames(double itemOne) {
//            return ingridientOne * multipleByEight;
//    }

    double setIngredientCost(double arcaneAgaricInput, double comfreyInput, double henEggInput, double burdockInput, double goatsButterInput, double goatsMilkInput, double gooseEggInput, double teaselInput, double sheepsButterInput, double foxgloveInput, double sheepsMilkInput, double potatoesInput, double cornInput, double mulleinInput, double cowsButterInput, double cowsMilkInput, double pumpkinInput, double yarrowInput) {
        arcaneAgaric = arcaneAgaricInput;
        comfrey = comfreyInput;
        henEgg = henEggInput;
        burdock = burdockInput;
        goatsButter = goatsButterInput;
        goatsMilk = goatsMilkInput;
        burdock = burdockInput;
        goatsButter = goatsButterInput;
        goatsMilk = goatsMilkInput;

        gooseEgg = gooseEggInput;
        teasel = teaselInput;

        sheepsButter = sheepsButterInput;
        foxglove = foxgloveInput;
        sheepsMilk = sheepsMilkInput;
        potatoes = potatoesInput;

        corn = cornInput;
        mullein = mulleinInput;

        cowsButter = cowsButterInput;
        cowsMilk = cowsMilkInput;
        pumpkin = pumpkinInput;
        yarrow = yarrowInput;

        return 0;
    }

    double calculateT3Potions() {
        //comfrey * 8
        return comfrey * multiplyByEight;
    }

    //double calculateT4Potions() {
    //    /*Berserk = Werewolfs Fang + (goatsMilk * 16)
    //    Poison = (burdock*8) + (comfrey*4)
    //    Energy = (burdock*24) + (goatsMilk * 6)
    //    Gathering = Runestone_Tooth + (goatsButter * 16)
    //    Healing = (burdock * 24) + (hen egg * 6)
    //    Hellfire = Imps_Horn + (burdock * 16)
    //    Tornado = Dawnfeather + (burdock * 16)*/
    //}
    //
    //double calculateT5Potions() {
    //    
    //}

    //double calculateT6Potions() {

    //}

    //double calculateT7Potions() {

    //}

    //double calculateT8Potions() {

    //}


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

    double arcaneAgaric;

    double comfrey;
    double henEgg;

    double burdock;
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
    double yarrow;

    std::cout << "Enter price of Ingredients: " << std::endl;
    std::cout << "arcaneAgaric " << std::endl;
    std::cin >> arcaneAgaric;

    std::cout << "comfrey " << std::endl;
    std::cin >> comfrey;
    std::cout << "henEgg " << std::endl;
    std::cin >> henEgg;

    std::cout << "burdock " << std::endl;
    std::cin >> burdock;
    std::cout << "goatsButter " << std::endl;
    std::cin >> goatsButter;
    std::cout << "goatsMilk " << std::endl;
    std::cin >> goatsMilk;
    
    std::cout << "gooseEgg " << std::endl;
    std::cin >> gooseEgg;
    std::cout << "teasel " << std::endl;
    std::cin >> teasel;

    std::cout << "sheepsButter " << std::endl;
    std::cin >> sheepsButter;
    std::cout << "foxglove " << std::endl;
    std::cin >> foxglove;
    std::cout << "sheepsMilk " << std::endl;
    std::cin >> sheepsMilk;
    std::cout << "potatoes " << std::endl;
    std::cin >> potatoes;

    std::cout << "corn " << std::endl;
    std::cin >> corn;
    std::cout << "mullein " << std::endl;
    std::cin >> mullein;

    std::cout << "cowsButter " << std::endl;
    std::cin >> cowsButter;
    std::cout << "cowsMilk " << std::endl;
    std::cin >> cowsMilk;
    std::cout << "pumpkin " << std::endl;
    std::cin >> pumpkin;
    std::cout << "yarrow " << std::endl;
    std::cin >> yarrow;

    ingredientCostFormuala calculateIngridientCost;
    std::cout << calculateIngridientCost.setIngredientCost(arcaneAgaric, comfrey, henEgg, burdock, goatsButter, goatsMilk, gooseEgg, teasel, sheepsButter, foxglove, sheepsMilk, potatoes, corn, mullein, cowsButter, cowsMilk, pumpkin, yarrow) << std::endl;
    ingredientCostFormuala t3Potion;
    std::cout << "T3 Potion costs: " << calculateIngridientCost.calculateT3Potions() << std::endl;

    return 0;
}
