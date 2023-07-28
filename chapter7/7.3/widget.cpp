#include <iostream>
#include "widget.hpp"

Widget::Widget()
{
    std::cout << "How many widgets were ordered? ";
    std::cin >> numWidgets;
    std::cout << std::endl;
}

void Widget::figureDays()
{
    //10 widgets per hour; 16 hours per day
    //say 2963 widgets

    int hours = numWidgets / 60; // 49 hours
    int minutes = numWidgets % 60; // 43 minutes
    int workPerDay = hours / 16; // 3 days
    int remainingHours = hours % 16; // 1 hour

    std::cout << "It will take " << workPerDay << " days and " << remainingHours <<
        " hour(s) to complete " << numWidgets << " widgets." << std::endl;
}