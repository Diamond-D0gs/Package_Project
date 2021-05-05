#include "miscstuff.hpp"

Info GenerateInfo() { //
    Info info;
    
    cout << "Name: ";
    getline(cin, info.name); //Pulls stored values from info.name and displays the result
    cout << "Address: ";
    getline(cin, info.address);
    cout << "City: "; //Pulls stored values from info.address and displays the result
    getline(cin, info.city);
    cout << "State: "; //Pulls stored values from info.city and displays the result
    getline(cin, info.state);
    // This range is valid - http://www.structnet.com/instructions/zip_min_max_by_state.html
    info.zip = ValidateUserInputRange<int>("Zip: ", "Please enter a valid value.", 0, 99999);

    std::cin.clear(); 
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

    return info;
}