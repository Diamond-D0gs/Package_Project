#include "twoday.hpp"

void TwoDayPackage::GenInvoice() {
    PrintSRInfo();
    // takes the ounces and times it by the cost per ounce
    double weightCost = ounces * costPerOunce;
    cout << "\nWeight Cost: " << ounces << " oz * $" << costPerOunce << " = $" << weightCost << endl;
    cout << "Two-Day Shipping Fee: $" << twoDayFee << endl;
    // takes the weight cost adding it to how much the fee is for two days, that will be the total cost
    double totalCost = weightCost + twoDayFee;
    cout << "\nTotal Shipping Cost: $" << totalCost << endl;
} 