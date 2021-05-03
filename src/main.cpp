//Group: Gabrield, Andres, Skye, Amir
//Introduction to C++ : Final Project
//Instructor: Professor Sibiyan
//Date: May 3rd, 2021
#include <iostream>
#include <iomanip>
#include "package.hpp"
#include "twoday.hpp"
#include "overnight.hpp"
#include "miscstuff.hpp"
using namespace std;

const double COST_PER_OUNCE = 0.55; //Dollars
const double TWO_DAY_FEE    = 5.0; //Two day fee is a flat rate
const double OVERNIGHT_FEE  = 2.0;  //Overnight fee is charged per ounce
const double WEIGHT_MAX     = 1120.0; //Ounces; Based off USPS 70lb limit

int main(void) {
    cout << "\nPackage Program\n" << endl;
    cout << "Please enter your Shipping info.\n" << endl;
    cout << "-----------------------------------------" << endl;
    Info sender = GenerateInfo(); 
    cout << "\nPlease enter recipiant's Shipping info.\n" << endl;
    cout << "-----------------------------------------" << endl;
    Info recipient = GenerateInfo();
    cout << endl;

    double ounces = ValidateUserInputRange<double>("Please enter your package's weight in ounces: ", "Please enter a positive valid weight.", 0.000000001, WEIGHT_MAX); // validates that (input > 0.000000001 && input < 0.000000001)

    int userSelect = 0;
    cout << "\nPlease select your package type\n" << endl;
    cout << "------------------------------" << endl;
    cout << "1) Standard Shipping Package" << endl;
    cout << "2) Two-Day Shipping Package" << endl;
    cout << "3) Overnight Shipping Package\n" << endl;

    userSelect = ValidateUserInputRange<int>("Please enter your selection: ", "Please enter a valid selection.", 1, 3);

    Package* package = NULL;
    switch(userSelect) { //Switch using userSelect input for preferred shipping priority.
        case (1): //standard shipping
            package = new Package(sender, recipient, ounces, COST_PER_OUNCE);
            break;
        case (2): //two day shipping
            package = new TwoDayPackage(sender, recipient, ounces, COST_PER_OUNCE, TWO_DAY_FEE);
            break;
        case (3): //overnight shipping
            package = new OvernightPackage(sender, recipient, ounces, COST_PER_OUNCE, OVERNIGHT_FEE);
            break;
        default: //makes sure that the user adds Invalid numbers 
            cout << "Error! Invalid package assignment! Quitting..." << endl;
            return 1; 
    }
    cout << setprecision(2) << fixed; // will display any int/double with 2 decimal points for precision. Ex: 0.15.
    package->GenInvoice();

    return 0;
}