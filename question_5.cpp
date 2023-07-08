/*
     One acre of land is equivalent to 43,560 square feet. 
     Design a program that asks the user to enter the total
     square feet in a tract of land and calculates the number
     of acres in the tract.
     Hint: Divide the amount entered by 43,560 to get 
     the number of acres.

     /*Author: By Appiah Kumah Miracle
*/
#include <iostream>
using namespace std;

int main(){
   
   const double oneAcre = 43560;
   double totalSquareFeet, totalAcre;
     // prompt the user for square feet.
    cout<< "Enter the total square feet :"<<endl;
    cin >> totalSquareFeet;
     // calculate for the total acre
    totalAcre = totalSquareFeet / 43560;

 
    cout << "The total Acres will be: " << totalAcre <<endl;

    return 0;
}