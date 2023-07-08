/*
    The area of a rectangle is calculated according to the following 
    formula: Area = Width × Length
Design a function that accepts a rectangle’s width and length as 
arguments and returns the rectangle’s area. Use the function in a 
program that prompts the user to enter the rectangle’s 
width and length, and then displays the rectangle’s area.

/* Appiah Kumah Miracle
*/
#include <iostream>
using namespace std;
// Function to calculate the area of a rectangle
double calculateAreaOfRectangle(double width, double length) {
    return width * length;
}

int main() {
    double width, length, area;

    // Prompt the user to enter the width of the rectangle
    cout << "Enter the width of the rectangle:"<<endl ;
    cin >> width;

    // Prompt the user to enter the length of the rectangle
    cout << "Enter the length of the rectangle:" <<endl;
    cin >> length;

    // Calculate the area using the calculateAreaOfRectangle function
    area = calculateAreaOfRectangle(width, length);

    // Display result.
    cout << "The area of the rectangle is: " << area <<endl;

    return 0;
}
