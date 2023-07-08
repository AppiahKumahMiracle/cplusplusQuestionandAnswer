/*
    Many financial experts advise that property owners should insure 
    their homes or buildings for at least 80 percent of the amount 
    it would cost to replace the structure. 
    Design a modular program that asks the user to enter the 
    replacement cost of a building and then displays the minimum
     amount of insurance he or she should buy for the property.

     /*Author: By Appiah Kumah Miracle
*/
#include <iostream>
using namespace std;

 int main() {
    // constant value
    const double insurancePercentage = 0.8;
    // create variable
    double replacementCost,minimumInsurance;

    // Prompt user for input
    cout << "Enter the replacement cost of the building: $";
    cin >> replacementCost;

    // Calculate minimum insurance amount
    minimumInsurance = insurancePercentage * replacementCost;

    // Display the minimum insurance amount
    cout << "The minimum insurance amount is:\t $" << minimumInsurance << endl;

    return 0;
}
