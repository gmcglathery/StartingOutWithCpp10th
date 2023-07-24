#include <iostream>
#include <iomanip>

int main(){
    float mealCost = 44.5;
    float tax = .0675;
    float tip = .15;
    float total = mealCost + (mealCost * (tax + tip));

    std::cout << std::setprecision(3) << "Meal Cost: $" << mealCost << std::endl;
    std::cout << "Tax amount: $" << tax * mealCost << std::endl;
    std::cout << "Tip amount: $" << tip * mealCost << std::endl;
    std::cout << "Total bill: $" << total << std::endl;

    return 0;
}