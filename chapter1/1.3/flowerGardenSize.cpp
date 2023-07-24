#include <iostream>

int main(){
    float length, width, area = 0;

    std::cout << "What is the length of your garden? " << std::endl;
    std::cin >> length;
    std::cout << "What is the width of your garden? " << std::endl;
    std::cin >> width;
    
    area = length * width;
    std::cout << "The area of your garden is: " << area << std::endl;
    
    return 0; 
}