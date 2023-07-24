#include <iostream>
#include <iomanip>

int main(){
    float price = 95;
    float stateTax = .065;
    float countyTax = .02;
    float total = price + (price * (stateTax + countyTax));

    std::cout << "Purchase price: $" << price << std::endl;
    std::cout << std::setprecision(3) << "Total tax: $" << total - price << std::endl;
    std::cout << std::setprecision(3) << "Total price: $" << total << std::endl;

    return 0;
}