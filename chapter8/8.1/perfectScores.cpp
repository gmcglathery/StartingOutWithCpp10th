#include <iostream>

int main(){

    int sizeArr = 0;
    int countPerfect = 0;
    
    std::cout << "Enter array size (between 1 and 20): ";
    std::cin >> sizeArr;

    while((sizeArr - 1) >= 20 || sizeArr < 0)
    {
        std::cout << "Enter array size (between 1 and 20): ";
        std::cin >> sizeArr;
    }

    int *arr = new int(sizeArr);

    for(int i = 0; i < sizeArr; i++)
    {
        std::cout << "Enter test score: ";
        std::cin >> arr[i];
        std::cout << std::endl;
        if(arr[i] == 100)
        {
            countPerfect++;
        }
    }

    std::cout << "Total scores equaling 100: " << countPerfect;

    return 0;
}