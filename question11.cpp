/*
    The area of a rectangle is the rectangle’s length times its width.
    Design a program that asks for the length and width of two 
    rectangles. The program should tell the user which rectangle has 
    the greater area, or whether the areas are the same.

    /*Author: By Appiah Kumah Miracle
*/
#include <iostream>
using namespace std;

 int main() {
    // create variable
    double lengthOne, widthOne, lengthTwo, widthTwo,areaOne,areaTwo;

    // Prompt user for input for rectangle 1
    cout << "Enter the length of rectangle 1: ";
    cin >> lengthOne;
    cout << "Enter the width of rectangle 1: ";
    cin >> widthOne;

    // Prompt user for input for rectangle 2
    cout << "Enter the length of rectangle 2: ";
    cin >> lengthTwo;
    cout << "Enter the width of rectangle 2: ";
    cin >> widthTwo;

    // Calculate areas
    areaOne = lengthOne * widthOne;
     areaTwo = lengthTwo * widthTwo;

    // Compare areas and display the result
    if (areaOne > areaTwo) {
        cout << "Rectangle one has the greater area." << endl;
    } else if (areaTwo > areaOne) {
        cout << "Rectangle two has the greater area." << endl;
    } else {
        cout << "Both rectangles have the same area." << endl;
    }

    return 0;
}
