#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

#ifndef PACKAGE_H
#define PACKAGE_H

struct Info { // structure used to store info such as string input from name, address, city and state. As well as an int variable to store the zipcode
    string name;
    string address;
    string city;
    string state;
    int    zip;
};

class Package { //class
    protected:
        Info sender; //protected classes that the user cant touch
        Info recipient;
        double ounces; //protected attributes 
        double costPerOunce;
        double totalCost;

        void PrintSRInfo();

    public: // user can see Package infos and can use them
        Package(Info &s, Info &r, double o, double cpo):
            sender(s), recipient(r), ounces(o), costPerOunce(cpo) {}

        virtual void GenInvoice(); // generates an invoice for user that can be overwritten
};
#endif