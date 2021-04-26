#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

#ifndef PACKAGE_H
#define PACKAGE_H

struct Info {
    string name;
    string address;
    string city;
    string state;
    int    zip;
};

class Package {
    protected:
        Info sender;
        Info recipient;
        double ounces;
        double costPerOunce;
        double totalCost;

        void PrintSRInfo();

    public:
        Package(Info &s, Info &r, double o, double cpo):
            sender(s), recipient(r), ounces(o), costPerOunce(cpo) {}

        virtual void GenInvoice();
};

#endif