/*
    The Fast Freight Shipping Company charges the following itemRates:
    packageWeight of Package 						itemRate per Pound
    2 pounds or less								        $1.10
    Over 2 pounds but not more than 6 pounds 				$2.20
    Over 6 pounds but not more than 10 pounds 				$3.70
    Over 10 pounds 								            $3.80
    Design a program that asks the user to enter the packageWeight
     of a package and then displays the shipping charges.

     /*Author: By Appiah Kumah Miracle
*/
#include <iostream>
using namespace std;

int main() {
    // create variable
    double packageWeight, itemRate, totalCharges;

    // Prompt user for input
    cout << "Enter the packageWeight of the package (in pounds): ";
    cin >> packageWeight;

    if (packageWeight <= 2) {
        itemRate = 1.10;
    } else if (packageWeight <= 6) {
        itemRate = 2.20;
    } else if (packageWeight <= 10) {
        itemRate = 3.70;
    } else {
        itemRate = 3.80;
    }

    // Calculate shipping charges
    totalCharges = packageWeight * itemRate;

    // Display the shipping charges
    cout << "Shipping charges: $" << totalCharges <<endl;

    return 0;
}
