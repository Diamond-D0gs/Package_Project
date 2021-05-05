#include "overnight.hpp"

void OvernightPackage::GenInvoice() {
    PrintSRInfo();

    double weightCost = ounces * costPerOunce; // stores the weight cost in double weightCost after multiplying ounces * costPerOunce.
    cout << "\nWeight Cost: " << ounces << " oz * $" << costPerOunce << " = $" << weightCost << endl;
    double overnightCost = ounces * overnightFee; //stores the overnight cost in double OvernightCost after multiplying ounces by overnight fee. 
    cout << "Overnight Shipping Fee: " << ounces << " oz * $" << overnightFee << " = $" << overnightCost << endl;
    double totalCost = weightCost + overnightCost; // stores the total cost in double totalCost after adding weightCost and overnightCost.
    cout << "\nTotal Shipping Cost: $" << totalCost << endl;
}