#ifndef BINMANAGER_HPP
#define BINMANAGER_HPP

#include <string>

class InvBin 
{
    private:
       std::string description;
       int qty;
    public:
        InvBin (std::string d = "empty", int q = 0) : description(d),  qty(q) {}
        void setDescription(std::string d);
        std::string getDescription();
        void setQty(int q);
        int getQty( );
};

class BinManager 
{
    private:
        InvBin bin[30];
        int numBins;
    public:
        BinManager() : numBins(0) {}     
        BinManager(int size, std::string d[], int q[]){}
        std::string getDescription(int index);
        int getQuantity(int index);
        bool addParts(int binIndex, int q);
        bool removeParts(int binIndex, int q);
}; 

#endif