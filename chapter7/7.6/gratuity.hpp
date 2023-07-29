/*Design a Tips class that calculates the gratuity on a restaurant meal. 
Its only class member variable, taxRate, should be set by a one-parameter 
constructor to whatever rate is passed to it when a Tips object is created. 
If no argument is passed, a default tax rate of .085 should be used. The class 
should have just one public function, computeTip. This function needs to accept 
two arguments, the total bill amount and the tip rate. It should use the total 
bill amount, along with the value stored in the taxRate member variable, to 
compute the cost of the meal before the tax was added. 

It should then apply the tip rate to just the meal cost portion of the bill to compute 
and return the tip amount. Demonstrate the class by creating a program that creates a 
single Tips object, and then has a sentinel-controlled loop to let the user retrieve 
the correct tip amount using various bill totals and desired tip rates.*/

#ifndef GRATUITY_HPP
#define GRATUITY_HPP

#include <iostream>

class Tips
{
    private:
        float taxRate;
    public:
        Tips();
        Tips(float);
        void computeTip(float, float);
};



#endif