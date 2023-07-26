#include <iostream>

int main(){
    for(int i = 33; i < 128; i++)
    {
        std::cout << char(i - 1) << " ";
        if(i % 16 == 0)
        {
            std::cout << std::endl;
        }
    }
}