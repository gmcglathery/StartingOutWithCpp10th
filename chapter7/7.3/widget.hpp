/*Design a class for a widget manufacturing plant. Assuming that 10 widgets may 
be produced each hour, the class object will calculate how many days it will take
to produce any number of widgets. (The plant operates two 8-hour shifts per day.)
Write a program that asks the user for the number of widgets that have been 
ordered and then displays the number of days it will take to produce them. 
Think about what values your program should accept for the number of widgets ordered.*/

#ifndef WIDGET_HPP
#define WIDGET_HPP

class Widget {
    private:
        int shiftHours;
        int numWidgets;
    public:
        Widget();
        ~Widget(){};
        void figureDays();
};

#endif