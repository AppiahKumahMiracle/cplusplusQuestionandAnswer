/*
    Design a program that calculates the total amount of a meal
    purchased at a restaurant. The program should ask the user
    to enter the charge for the food, and then calculate the
    amount of a 15 percent tip and 7 percent sales tax. 
    Display each of these amounts and the total.

    /*Author: By Appiah Kumah Miracle

*/
#include <iostream>
using namespace std;

int main() {
    // constant values.
    const double tipPercentage = 0.15;
    const double taxPercentage = 0.07;
    // create variable
    double foodCharge, totalTipAmount, totalTaxAmount,totalAmount;
    
    // Prompt user for input
    cout << "Enter the charge for the food: " << endl;
    cin >> foodCharge;

    // Calculate tip and tax amounts
    totalTipAmount = foodCharge * tipPercentage;
    totalTaxAmount = foodCharge * taxPercentage;

    // Calculate total amount
    totalAmount = foodCharge + totalTipAmount + totalTaxAmount;

    // Display the amounts
    cout << "The total tip of 15 per is:\t $" << totalTipAmount << endl;
    cout << "The total tax of 7 per is:\t $" << totalTaxAmount << endl;
    cout << "The total amount charge is:\t $" << totalAmount << endl;

    return 0;
}