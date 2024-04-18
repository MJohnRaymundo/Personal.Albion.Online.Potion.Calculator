/*
* This is a program project that is built on the Google Sheet Version with the same function.
*/
#include <iostream>

int main()
{
    double t3_Potion_acid;
    double comfrey;
    double ingridientCost;

    std::cout << "Enter price of comfrey: " << std::endl;
    std::cin >> comfrey;

    ingridientCost = comfrey * 8;

    t3_Potion_acid = ingridientCost;

    std::cout << "Cost for Minor Acid Potion is: " << t3_Potion_acid;

    return 0;

}
