#include <iostream>

int main(){
    int ballsPurchased = 0;
    float ballCost = 0;
    float total = 0;

    std::cout << "How many baseballs were purchased last year? ";
    std::cin >> ballsPurchased;
    std::cout << std::endl;
    std::cout << "How much does each baseball cost? $";
    std::cin >> ballCost;
    std::cout << std::endl;

    total = ballsPurchased * ballCost;
    std::cout << "Total amount spent on balls is: $" << total << std::endl;
}