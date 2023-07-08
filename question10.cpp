/*
    Design a program that prompts the user to enter a number 
    within the range of 1 through 10. The program should display 
    the Roman numeral version of that number. 
    If the number is outside the range of 1 through 10, 
    the program should display an error message.

    /*Author: By Appiah Kumah Miracle
*/

#include <iostream>
using namespace std;

int main() {
    // create variable
   int number;

    // Prompt user for input
    cout << "Enter a number between 1 and 10: "<<endl;
    cin >> number;

    //Displaying the roman numeral using the user input.
    switch (number) {
        case 1:
            cout<<"The roman numeral for number 1 is = I"<<endl;
            break;
        case 2:
            cout<<"The roman numeral for number 2 is = II"<<endl;
            break;
        case 3:
            cout<<"The roman numeral for number 3 is = III"<<endl;
            break;
        case 4:
            cout<<"The roman numeral for number 4 is = IV"<<endl;
            break;
        case 5:
            cout<<"The roman numeral for number 5 is = V"<<endl;
            break;
        case 6:
            cout<<"The roman numeral for number 6 is = VI"<<endl;
            break;
        case 7:
            cout<<"The roman numeral for number 7 is = VII"<<endl;
            break;
        case 8:
            cout<<"The roman numeral for number 8 is = VIII"<<endl;
            break;
        case 9:
            cout<<"The roman numeral for number 9 is = IX"<<endl;
            break;
        case 10:
            cout<<"The roman numeral for number 10 is = X"<<endl;
            break;
        default:
            cout<<"Invalid number. Enter a number between 1 and 10."<<endl;
            break;
    }

    return 0;
}
