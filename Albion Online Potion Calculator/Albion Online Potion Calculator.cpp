/*
* This is a program project that is built on the Google Sheet Version with the same function.
*/
#include <iostream>

class IngridientCostFormual {
    double firstIngridient;
    double secondIngridient;
    double thirdIngridient;
    double fourthIngridient;
    double fifthIngridient;
    double sixthIngridient;
    double seventhIngridient;

public:
    void setFirstIngridient(double firstingridient) {
        firstIngridient = firstingridient;
    }
    double getFirstIngridient() {
        return firstIngridient;
    }
};

int main()
{
    // Potions
    double t3PotionAcid;
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
    double t8PotionTornado;

    // Ingridients

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

    std::cout << "Enter price of comfrey: " << std::endl;
    std::cin >> comfrey;

    return 0;

}
