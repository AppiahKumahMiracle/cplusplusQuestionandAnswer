/*
    Design a modular program that asks the user 
    to enter a distance in kilometers, and then 
    converts that distance to miles.
    The conversion formula is as follows:
    Miles = Kilometers x 0.6214

    /*Author: By Appiah Kumah Miracle
*/


#include <iostream>
using namespace std;

int main() {
    // constant values
    const double conversionFactor = 0.6214;
    // create variable
    double kilometers,miles;

    // Prompt user for input
    cout << "Enter distance in kilometers: ";
    cin >> kilometers;

    // Convert kilometers to miles
    miles = conversionFactor * kilometers;

    // Display the result
    cout << "Distance in miles: " << miles <<endl;

    return 0;
}





