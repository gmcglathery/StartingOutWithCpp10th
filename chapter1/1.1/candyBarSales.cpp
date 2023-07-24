#include <iostream>

int main(){
    float barsSold, earned = 0;
    std::cout << "Enter the number of candy bars sold: ";
    std::cin >> barsSold;
    std::cout << std::endl;
    std::cout << "How much does the organization earn per bar sold: $";
    std::cin >> earned;
    std::cout << std::endl;

    std::cout << "Total earned: $" << barsSold * earned << std::endl;

    return 0;
}