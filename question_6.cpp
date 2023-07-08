/*
 A customer in a store is purchasing five items. 
  Design a program that asks for the price of each 
  item, and then displays the subtotal of the sale,
   the amount of sales tax, and the total. 
   Assume the sales tax is 6 percent.

   /*Author: By Appiah Kumah Miracle
*/
#include <iostream>
using namespace std;

int main(){
    // constant value
    const double salesTax = 0.06;
    // create variable
    double itemPurchase1,itemPurchase2,itemPurchase3,
    itemPurchase4, itemPurchase5,subTotal,total,totalTaxPay;
    // prompt the user for the item purchases.
    cout<<"Enter the price of first item:"<<endl;
    cin >> itemPurchase1;

    cout <<"Enter the price of second item:"<<endl;
    cin >> itemPurchase2;

    cout <<"Enter the price of third item:"<<endl;
    cin >> itemPurchase3;

    cout <<"Enter the price of four item:"<<endl;
    cin >> itemPurchase4;

    cout <<"Enter the price of five item:"<<endl;
    cin >> itemPurchase5;
    // calculate for the subtotal
    subTotal =itemPurchase1+itemPurchase2+itemPurchase3+itemPurchase4+itemPurchase5;
    cout <<"The subtotal of the sale:\t\t\t "<< subTotal << endl;

    // calculate for the total tax pay
    totalTaxPay = subTotal * salesTax;
    cout << "The amount of sales tax:\t\t\t "<< totalTaxPay << endl;
    
    // calculate for the total 
    total = subTotal + totalTaxPay;

    cout<<"The total for the five items purchase is:\t " << total << endl;

    return 0;
}