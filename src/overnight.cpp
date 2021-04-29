#include "overnight.hpp"

void OvernightPackage::GenInvoice() {
    PrintSRInfo();

    double weightCost = ounces * costPerOunce;
    cout << "\nWeight Cost: " << ounces << " oz * $" << costPerOunce << " = $" << weightCost << endl;
    double overnightCost = ounces * overnightFee;
    cout << "Overnight Shipping Fee: " << ounces << " oz * $" << overnightFee << " = $" << overnightCost << endl;

    double totalCost = weightCost + overnightCost;
    cout << "\nTotal Shipping Cost: $" << totalCost << endl;
}