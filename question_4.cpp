/*
 A company has determined that its annual profit is 
 typically 23 percent of total sales. 
 Design a program that asks the user to enter the 
 projected amount of total sales, and then displays 
 the profit that will be made from that amount.
 Hint: Use the value 0.23 to represent 23 percent

 /*Author: By Appiah Kumah Miracle
*/
#include <iostream>
using namespace std;

int main(){
       
     const double annualProfitPercentage = 0.23;
     double projectedAmount, profit;
    // prompt the user for the projected amount.
    cout<< "Enter the projected amount of total sales:"<<endl;
    cin >> projectedAmount;
    // calculate for the profit
    profit = projectedAmount * annualProfitPercentage;

    cout << "The total profit is "<< profit<<endl;

    return 0;
}