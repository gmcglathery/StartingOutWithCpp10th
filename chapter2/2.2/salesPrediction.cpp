#include <iostream>

int main(){
    float percent = .58;
    float sales = 8600000;
    float prediction = sales * percent;

    std::cout << "Predicted amount is: $" << prediction << std::endl;
    return 0;
}