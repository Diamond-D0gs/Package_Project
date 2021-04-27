#include "package.hpp"

void Package::PrintSRInfo() {
    cout << "\nSender information:\n" << endl;

    cout << "Name - " << sender.name << endl;
    cout << "Address - " << sender.address << endl;
    cout << "City - " << sender.city << endl;
    cout << "State - " << sender.state << endl;
    cout << "Zip Code - " << sender.zip << endl;

    cout << "\nRecipient information:\n" << endl;

    cout << "Name - " << recipient.name << endl;
    cout << "Address - " << recipient.address << endl;
    cout << "City - " << recipient.city << endl;
    cout << "State - " << recipient.state << endl;
    cout << "Zip Code - " << recipient.zip << endl;
}

void Package::GenInvoice() {
    PrintSRInfo();

    double weightCost = ounces * costPerOunce;
    cout << "\nWeight Cost: " << ounces << " oz * $" << costPerOunce << " = $" << weightCost << endl;

    double totalCost = weightCost;
    cout << "\nTotal Shipping Cost: $" << totalCost << endl;
}