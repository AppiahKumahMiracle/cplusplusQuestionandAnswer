/*
    Design a program that converts Celsius temperatures to Fahrenheit 
    temperatures. The formula is as follows: (celsius * 1.8)+32

    The program should ask the user to enter a temperature 
    in Celsius, and then display the temperature converted 
    to Fahrenheit.

    /* Author: By Appiah Kumah Miracle
*/

#include <iostream>
using namespace std;

int main(){
    // create variable
    double celsius,fahrenheit;
    // prompt the user to enter the temperature.
    cout << "Enter the a temperature in Celsius"<< endl;
    cin >> celsius;
    // calculate the fahrenheit.
    fahrenheit = (celsius * 1.8)+32;
    // Display result.
    cout <<"The temperature is Fahrenheit is: "<<fahrenheit<<endl;
    return 0;
}