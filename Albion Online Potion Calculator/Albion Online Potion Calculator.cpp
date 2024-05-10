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

class ingredientCostFormuala 
{
private:

    //Herbs
    double agaric = 0;
    double comfrey = 0;
    double henEgg = 0;
    double burdock = 0;
    double goatsButter = 0;
    double goatsMilk = 0;
    double gooseEgg = 0;
    double teasel = 0;
    double sheepsButter = 0;
    double foxglove = 0;
    double sheepsMilk = 0;
    double potatoes = 0;
    double corn = 0;
    double mullein = 0;
    double cowsButter = 0;
    double cowsMilk = 0;
    double pumpkin = 0;
    double yarrow = 0;

    //Shapeshifter Artifacts
    double t3ShadowClaws = 0;
    double t3SylvianRoot = 0;
    double t3SpiritPaws = 0;
    double t3WerewolfFangs = 0;
    double t3ImpsHorn = 0;
    double t3RunestoneTooth = 0;
    double t3DawnFeather = 0;
    double t5ShadowClaws = 0;
    double t5SylvianRoot = 0;
    double t5SpiritPaws = 0;
    double t5WerewolfFangs = 0;
    double t5ImpsHorn = 0;
    double t5RunestoneTooth = 0;
    double t5DawnFeather = 0;
    double t7ShadowClaws = 0;
    double t7SylvianRoot = 0;
    double t7SpiritPaws = 0;
    double t7WerewolfFangs = 0;
    double t7ImpsHorn = 0;
    double t7RunestoneTooth = 0;
    double t7DawnFeather = 0;

    //Multipliers
    const int multiplyByFour = 4;
    const int multiplyBySix = 6;
    const int multiplyByEight = 8;
    const int multiplyByTwelve = 12;
    const int multiplyBySixteen = 16;
    const int multiplyByEighteen = 18;
    const int multiplyByTwentyFour = 24;
    const int multiplyByThirtySix = 36;
    const int multiplyByFourtyEight = 48;
    const int multiplyBySeventyTwo = 72;
    const int multiplyByOneHundredFourtyFour = 144;

    const int potionsCraftedPerSet = 10;

    //Potions
    double t3PotionCost = 0;
    double t4BerserkPotion = 0;
    double t4PoisonPotion = 0;
    double t4EnergyPotion = 0;
    double t4GatheringPotion = 0;
    double t4HealingPotion = 0;
    double t4HellfirePotion = 0;
    double t4TornadoPotion = 0;
    double t5AcidPotion = 0;
    double t5CleansingPotion = 0;
    double t5CalmingPotion = 0;
    double t5GigantifyPotion = 0;
    double t5StickyPotion = 0;
    double t5ResistancePotion = 0;
    double t6BerserkPotion = 0;
    double t6PoisonPotion = 0;
    double t6EnergyPotion = 0;
    double t6GatheringPotion = 0;
    double t6HealingPotion = 0;
    double t6HellfirePotion = 0;
    double t6TornadoPotion = 0;
    double t7AcidPotion = 0;
    double t7CleansingPotion = 0;
    double t7CalmingPotion = 0;
    double t7GigantifyPotion = 0;
    double t7StickyPotion = 0;
    double t7ResistancePotion = 0;
    double t8BerserkPotion = 0;
    double t8InvisibilityPotion = 0;
    double t8PoisonPotion = 0;
    double t8GatheringPotion = 0;
    double t8HellfirePotion = 0;
    double t8TornadoPotion = 0;

public:

    void setHerbCost(double agaricInput, double comfreyInput, double henEggInput, double burdockInput, double goatsButterInput, double goatsMilkInput, double gooseEggInput, double teaselInput, double sheepsButterInput, double foxgloveInput, double sheepsMilkInput, double potatoesInput, double cornInput, double mulleinInput, double cowsButterInput, double cowsMilkInput, double pumpkinInput, double yarrowInput) {
        agaric = agaricInput;
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

    }

    /*double setArtifactCost(double t3ShadowClawsInput, double t3SylvianRootInput, double t3SpiritPawsInput, double t3WerewolfFangsInput, double t3ImpsHornInput, double t3RunestoneToothInput, double t3DawnFeatherInput, double t5ShadowClawsInput, double t5SylvianRootInput, double t5SpiritPawsInput, double t5WerewolfFangsInput, double t5ImpsHornInput, double t5RunestoneToothInput, double t5DawnFeatherInput, double t7ShadowClawsInput, double t7SylvianRootInput, double t7SpiritPawsInput, double t7WerewolfFangsInput, double t7ImpsHornInput, double t7RunestoneToothInput, double t7DawnFeatherInput) {
        t3ShadowClaws = t3ShadowClawsInput;
        t3SylvianRoot = t3SylvianRootInput;
        t3SpiritPaws = t3SpiritPawsInput;
        t3WerewolfFangs = t3WerewolfFangsInput;
        t3ImpsHorn = t3ImpsHornInput;
        t3RunestoneTooth = t3RunestoneToothInput;
        t3DawnFeather = t3DawnFeatherInput;
        t5ShadowClaws = t5ShadowClawsInput;
        t5SylvianRoot = t5SylvianRootInput;
        t5SpiritPaws = t5SpiritPawsInput;
        t5WerewolfFangs = t5WerewolfFangsInput;
        t5ImpsHorn = t5ImpsHornInput;
        t5RunestoneTooth = t5RunestoneToothInput;
        t5DawnFeather = t5DawnFeatherInput;
        t7ShadowClaws = t7ShadowClawsInput;
        t7SylvianRoot = t7SylvianRootInput;
        t7SpiritPaws = t7SpiritPawsInput;
        t7WerewolfFangs = t7WerewolfFangsInput;
        t7ImpsHorn = t7ImpsHornInput;
        t7RunestoneTooth = t7RunestoneToothInput;
        t7DawnFeather = t7DawnFeatherInput;

        return 0;
    }*/

    double calculatePotions() {
        t3PotionCost = comfrey * multiplyByEight;

        t4BerserkPotion = (goatsMilk * multiplyByEighteen);
        t4PoisonPotion = (burdock * multiplyByEight) + (comfrey * multiplyByFour);
        t4EnergyPotion = (burdock * multiplyByTwentyFour) + (goatsMilk * multiplyBySix);
        t4GatheringPotion = (goatsButter * multiplyBySixteen);
        t4HealingPotion = (burdock * multiplyByTwentyFour) + (henEgg * multiplyBySix);
        t4HellfirePotion = (burdock * multiplyBySixteen);
        t4TornadoPotion = (burdock * multiplyBySixteen);

        t5AcidPotion =  (teasel * multiplyByFourtyEight) + (burdock * multiplyByTwentyFour) + (goatsMilk * multiplyByTwelve);
        t5CleansingPotion = (teasel * multiplyByFourtyEight) + (comfrey * multiplyByTwentyFour);
        t5CalmingPotion = (teasel * multiplyByFourtyEight) + (burdock * multiplyByTwentyFour) + (agaric * multiplyByTwelve);
        t5GigantifyPotion = (teasel * multiplyByTwentyFour) + (burdock * multiplyByTwelve) + (gooseEgg * multiplyBySix);
        t5StickyPotion = (teasel * multiplyByTwentyFour) + (burdock * multiplyByTwelve) + (gooseEgg * multiplyBySix);
        t5ResistancePotion = (teasel * multiplyByTwentyFour) + (burdock * multiplyByTwelve) + (goatsMilk * multiplyBySix);

        t6BerserkPotion = (foxglove * multiplyByFourtyEight) + (agaric * multiplyByTwentyFour) + (potatoes * multiplyByTwelve);
        t6PoisonPotion = (foxglove * multiplyByTwentyFour) + (teasel * multiplyByTwelve) + (comfrey * multiplyByTwelve) + (sheepsMilk * multiplyBySix);
        t6EnergyPotion = (foxglove * multiplyBySeventyTwo) + (sheepsMilk * multiplyByEighteen) + (potatoes * multiplyByEighteen);
        t6GatheringPotion = (sheepsButter * multiplyByFourtyEight) + (foxglove * multiplyByTwentyFour) + (teasel * multiplyByTwelve);
        t6HealingPotion = (foxglove * multiplyBySeventyTwo) + (gooseEgg * multiplyByEighteen) + (potatoes * multiplyByEighteen);
        t6HellfirePotion = (sheepsMilk * multiplyByFourtyEight) + (foxglove * multiplyByTwentyFour) + (henEgg * multiplyByTwelve);
        t6TornadoPotion = (foxglove * multiplyByFourtyEight) + (teasel * multiplyByTwentyFour) + (henEgg * multiplyByTwelve);

        t7AcidPotion = (mullein * multiplyByOneHundredFourtyFour) + (foxglove * multiplyBySeventyTwo) + (potatoes * multiplyBySeventyTwo) + (sheepsMilk * multiplyByThirtySix) + (corn * multiplyByThirtySix);
        t7CleansingPotion = (mullein * multiplyByOneHundredFourtyFour) + (burdock * multiplyBySeventyTwo) + (comfrey * multiplyBySeventyTwo) + (sheepsButter * multiplyByThirtySix) + (corn * multiplyByThirtySix);
        t7CalmingPotion = (mullein * multiplyByOneHundredFourtyFour) + (foxglove * multiplyBySeventyTwo) + (comfrey * multiplyBySeventyTwo) + (agaric * multiplyByThirtySix) + (corn * multiplyByThirtySix);
        t7GigantifyPotion = (mullein * multiplyBySeventyTwo) + (foxglove * multiplyByThirtySix) + (gooseEgg * multiplyByEighteen) + (corn * multiplyByEighteen);
        t7StickyPotion = (mullein * multiplyBySeventyTwo) + (foxglove * multiplyByThirtySix) + (burdock * multiplyByThirtySix) + (gooseEgg * multiplyByEighteen) + (corn * multiplyByEighteen);
        t7ResistancePotion = (mullein * multiplyBySeventyTwo) + (foxglove * multiplyByThirtySix) + (burdock * multiplyByThirtySix) + (sheepsMilk * multiplyByEighteen) + (corn * multiplyByEighteen);

        t8BerserkPotion = (yarrow * multiplyByOneHundredFourtyFour) + (comfrey * multiplyBySeventyTwo) + (potatoes * multiplyBySeventyTwo) + (corn * multiplyByThirtySix) + (pumpkin * multiplyByThirtySix);
        t8InvisibilityPotion = (yarrow * multiplyBySeventyTwo) + (mullein * multiplyByThirtySix) + (teasel * multiplyByThirtySix) + (cowsMilk * multiplyByEighteen) + (pumpkin * multiplyByEighteen);
        t8PoisonPotion = (yarrow * multiplyBySeventyTwo) + (mullein * multiplyByThirtySix) + (teasel * multiplyByThirtySix) + (cowsMilk * multiplyByEighteen) + (pumpkin * multiplyByEighteen);
        t8GatheringPotion = (cowsButter * multiplyByOneHundredFourtyFour) + (yarrow * multiplyBySeventyTwo) + (mullein * multiplyBySeventyTwo) + (foxglove * multiplyByThirtySix) + (pumpkin * multiplyByThirtySix);
        t8HellfirePotion = (cowsMilk * multiplyByOneHundredFourtyFour) + (yarrow * multiplyBySeventyTwo) + (mullein * multiplyBySeventyTwo) + (gooseEgg * multiplyByThirtySix) + (pumpkin * multiplyByThirtySix);
        t8TornadoPotion = (yarrow * multiplyByOneHundredFourtyFour) + (mullein * multiplyBySeventyTwo) + (corn * multiplyBySeventyTwo) + (gooseEgg * multiplyByThirtySix) + (pumpkin * multiplyByThirtySix);

        return 0;
    }

    void printPotionCost() {
        std::cout << "T3 Potions Cost: " << t3PotionCost << std::endl;
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
    double t4PotionBerserk;
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
    double agaric;
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

    //Input herb values
    /*std::cout << "Enter price of Ingredients: " << std::endl;
    std::cout << "agaric " << std::endl;
    std::cin >> agaric;
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
    std::cin >> yarrow;*/

    ingredientCostFormuala calculateIngridientCost;
    calculateIngridientCost.setHerbCost(1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18);
    // agaric, comfrey, henEgg, burdock, goatsButter, goatsMilk, gooseEgg, teasel, sheepsButter, foxglove, sheepsMilk, potatoes, corn, mullein, cowsButter, cowsMilk, pumpkin, yarrow
    //std::cout << calculateIngridientCost.setHerbCost(1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18) << std::endl;
    /*ingredientCostFormuala t3Potion;
    std::cout << "Potion costs: " << calculateIngridientCost.calculatePotions() << std::endl;*/
    calculateIngridientCost.calculatePotions();
    calculateIngridientCost.printPotionCost();

    return 0;
}
