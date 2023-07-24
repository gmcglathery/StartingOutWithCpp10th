#include <iostream>

int main(){
    float soil, seeds, fence, total = 0;

    std::cout << "What is the cost of soil? $";
    std::cin >> soil;
    std::cout << std::endl;
    std::cout << "What is the cost of seeds? $";
    std::cin >> seeds;
    std::cout << std::endl;
    std::cout << "What is the cost of the fence? $";
    std::cin >> fence;
    std::cout << std::endl;
    
    total = soil + seeds + fence;
    std::cout << "The total cost of your garden is: $" << total << std::endl;
    
    return 0; 
}