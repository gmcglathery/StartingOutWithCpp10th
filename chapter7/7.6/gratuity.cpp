#include <iostream>
#include "gratuity.hpp"
#include <iomanip>

Tips::Tips(float r) : taxRate(r) {}
Tips::Tips() : taxRate(.085) {}

void Tips::computeTip(float billAmount, float tipRate)
{
    float beforeTax = billAmount / (1 + taxRate);
    float tipAmount = beforeTax * tipRate;

    std::cout << std::fixed << std::setprecision(2);
    std::cout << "Tip amount is: $" << tipAmount << std::endl;
}

