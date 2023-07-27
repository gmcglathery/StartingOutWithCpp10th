/*1. Date

Design a class called Date that has integer data members to store month, day, and year. The class should have a three-parameter default constructor 
that allows the date to be set at the time a new Date object is created. If the user creates a Date object without passing any arguments, or if any 
of the values passed are invalid, the default values of 1, 1, 2001 (i.e., January 1, 2001) should be used. The class should have member functions to 
print the date in the following formats:

3/15/20
March 15, 2020
15 March 2020

Demonstrate the class by writing a program that uses it. Be sure your program only accepts reasonable values for month and day. The month should be 
between 1 and 12. The day should be between 1 and the number of days in the selected month.

*/

#include <iostream>
#include <string>

class Date{
    private:
        int month = 0, day = 0, year = 0;
        int maxDays = 0;
        std::string monthText = " ";
        bool leapYear = false;
        
        void dateProcessing(int m, int d, int y)
        {
            if(m < 1 && m > 13)
            {
                throw std::invalid_argument("Invalid Month.  Month must be 1-12.");
            }
            switch (m)
            {
                case 1:
                    monthText = "January";
                    maxDays = 31;
                    break;
                case 2:
                    if(y % 4 == 0 && y % 100 != 0 || y % 400 == 0)
                    {
                        maxDays = 29;
                        leapYear = true;
                    }
                    else
                    {
                        maxDays = 28;
                    }
                    monthText = "February";
                    break;
                case 3:
                     monthText = "March";
                    maxDays = 31;
                    break;
                case 4:
                    monthText = "April";
                    maxDays = 30;
                    break;
                case 5:
                    monthText = "May";
                    maxDays = 31;
                    break;
                case 6:
                    monthText = "June";
                    maxDays = 30;
                    break;
                case 7:
                    monthText = "July";
                    maxDays = 31;
                    break;
                case 8:
                    monthText = "August";
                    maxDays = 31;
                    break;
                case 9:
                    monthText = "September";
                    maxDays = 30;
                    break;
                case 10:
                    monthText = "October";
                    maxDays = 31;
                    break;
                case 11:
                    monthText = "November";
                    maxDays = 30;
                    break;
                case 12:
                    monthText = "December";
                    maxDays = 31;
                    break;
            }

            if(d < 1 || d > maxDays)
            {
                if(m == 2 && d == 29)
                {
                    throw std::invalid_argument("This is not a leap year.  February only has 28 days in " + std::to_string(y));
                }
                else
                {
                    throw std::invalid_argument("Please enter a date range that corresponds with your month.");
                    std::cout << monthText << " has " << maxDays << " days in " << y << "." << std::endl;
                }
            }
            if(y < 0 || y > 2023)
            {
                throw std::invalid_argument("Please enter a year greater than 0 and less than 2024");
            }
        }

    public:
        Date() : month(1), day(1), year(2001)
        {
            dateProcessing(month, day, year);
        }
        
        Date(int m, int d, int y) : month(m), day(d), year(y)
        {
            dateProcessing(m, d, y);
        }

        ~Date(){};

        void setDate(int m, int d, int y)
        {
            dateProcessing(m, d, y);
            month = m;
            day = d;
            year = y;
        }

        void getDateSlashes() const
        {
            std::cout << month << "/" << day << "/" << year << std::endl;
        }
        
        void getDateText() const
        {
            std::cout << monthText << " " << day << ", " << year << std::endl;
        }

        void getDateDMY() const
        {
            std::cout << day << " " << monthText << " " << year << std::endl;
        }
};

void testCode();

int main(){

    //testCode();

    try
    {
        Date myDate(2, 29, 2001);
        myDate.getDateText();
    } catch (const std::invalid_argument& ex)
    {
        std::cout << "Error: " << ex.what() << std::endl;
    }

    return 0;
}

void testCode()
{
    std::cout << "Testing Prints again" << std::endl << std::endl;
    Date printDate;
    printDate.getDateSlashes();
    std::cout << std::endl;
    printDate.getDateText();
    std::cout << std::endl;
    printDate.getDateDMY();
    
    std::cout << std::endl;
    std::cout << "-------------------New Test---------------" << std::endl;
    std::cout << "instantiation cases: " << std::endl;

    try
    {        
        std::cout << "fail case month = 0" << std::endl;
        Date monthLessThan1(0, 22, 1986);
    }
    catch (const std::invalid_argument& ex)
    {
        std::cout << "Error: " << ex.what() << std::endl;
    }

    try
    {
        std::cout << std::endl;
        std::cout << "fail case month = 13" << std::endl;
        Date monthGreaterThan12(13, 22, 1986);
    }
    catch (const std::invalid_argument& ex)
    {
        std::cout << "Error: " << ex.what() << std::endl;
    }

    std::cout << std::endl;
    std::cout << "fail case day = 0" << std::endl;
    Date dayLessThan0(6, 0, 1986);
    std::cout << std::endl;
    std::cout << "fail case day > max days for month (32)" << std::endl;
    Date dayGreaterThan31(5, 32, 1986);
    std::cout << std::endl;
    std::cout << "fail case year < 0 (-1)" << std::endl;
    Date yearLessThan1(6, 22, -1);
    std::cout << std::endl;

    std::cout << std::endl << "default constructor cases" << std::endl;
    Date myDate;
    std::cout << std::endl;
    std::cout << "default constructor getter test (January 1, 2001)" << std::endl;
    myDate.getDateText();
    std::cout << std::endl;
    std::cout << "setter test: 6 22 1986" << std::endl;
    myDate.setDate(6, 22, 1986);
    myDate.getDateText();
    std::cout << std::endl;
    std::cout << "bad setter test: 0 22 1986; should be january 1, 2001" << std::endl;
    Date badSetter;
    badSetter.setDate(0, 22, 1986);
    badSetter.getDateText();
    std::cout << std::endl;

    std::cout << "leap year test; day = 29 but 'leapYear == false (february 29, 2001)'" << std::endl;
    Date notALeapYear;
    notALeapYear.setDate(2, 29, 2001);
    std::cout << std::endl << std::endl;

    std::cout << "leap year test; day = 29 and 'leapYear == true (february 29, 2000)'" << std::endl;
    Date isALeapYear;
    isALeapYear.setDate(2, 29, 2000);
    isALeapYear.getDateText();
    std::cout << std::endl << std::endl;

    std::cout << "leap year test; day = 30 and 'leapYear == true (february 30, 2000)'" << std::endl;
    Date isALeapYearbutDayisBad;
    isALeapYearbutDayisBad.setDate(2, 30, 2000);
    isALeapYearbutDayisBad.getDateText();

    std::cout << "leap year test; day = 30 and 'leapYear == false (february 30, 2001)'" << std::endl;
    Date isNotALeapYearandDayisBad;
    isNotALeapYearandDayisBad.setDate(2, 30, 2000);
    std::cout << std::endl;
    std::cout << std::endl;
}