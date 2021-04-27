#include "twoday.hpp"

void TwoDayPackage::GenInvoice() {
    PrintSRInfo();

    double weightCost = ounces * costPerOunce;
    cout << "\nWeight Cost: " << ounces << " oz * $" << costPerOunce << " = $" << weightCost << endl;
    cout << "Two-Day Shipping Fee: $" << twoDayFee << endl;

    double totalCost = weightCost + twoDayFee;
    cout << "\nTotal Shipping Cost: $" << totalCost << endl;
}