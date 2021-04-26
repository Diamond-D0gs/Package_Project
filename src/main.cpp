#include <iostream>
#include "package.hpp"
#include "twoday.hpp"
#include "overnight.hpp"
#include "miscstuff.hpp"
using namespace std;

// test

const double COST_PER_OUNCE = 20.0;
const double TWO_DAY_FEE    = 20.0; // Two day fee is a flat rate
const double OVERNIGHT_FEE  = 2.0;  // Overnight fee is charged per ounce
const double WEIGHT_MAX     = 1120.0; // Ounces; Based off USPS 70lb limit

int main(void) {
    cout << "\nPackage Program\n" << endl;

    cout << "Please enter your information.\n" << endl;
    Info sender = GenerateInfo();
    cout << "\nPlease enter the recipiant's information.\n" << endl;
    Info recipient = GenerateInfo();
    cout << endl;

    double ounces = ValidateUserInputRange<double>("Please enter your package's weight in ounces: ", "Please enter a positive valid weight.", 0.000000001, WEIGHT_MAX);

    int userSelect = 0;
    cout << "\nPlease select your package type\n" << endl;

    cout << "1) Standard Shipping Package" << endl;
    cout << "2) Two Day Shipping Package" << endl;
    cout << "3) Overnight Shipping Package\n" << endl;

    userSelect = ValidateUserInputRange<int>("Please enter your selection: ", "Please enter a valid selection.", 1, 3);

    Package* package = NULL;
    switch(userSelect) {
        case (1):
            package = new Package(sender, recipient, ounces, COST_PER_OUNCE);
            break;
        case (2):
            package = new TwoDayPackage(sender, recipient, ounces, COST_PER_OUNCE, TWO_DAY_FEE);
            break;
        case (3):
            package = new OvernightPackage(sender, recipient, ounces, COST_PER_OUNCE, OVERNIGHT_FEE);
            break;
        default:
            cout << "Error! Invalid package assignment! Quitting..." << endl;
            return 1;
    }

    cout << setprecision(2) << fixed;
    package->GenInvoice();

    return 0;
}

