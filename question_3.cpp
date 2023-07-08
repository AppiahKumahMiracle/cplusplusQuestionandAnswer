/*
 Develop a simple application using switch….case 
 to calculate the area of the following shapes: 
 Square, Rectangle and Triangle. 
 
 HINT:
 The user should be able to perform any of the
 calculation and also press a key to terminate 
 the program.

 /*Author: By Appiah Kumah Miracle
*/
#include <iostream>
using namespace std;

int main(){
     float base, height, length, width, sideOFSquare, area;
     int option;
    // Display options
     cout << "Choose an option..."<< endl;
     cout << "enter 1 for Square" << endl;
     cout << "enter 2 for Rectangle" <<endl;
     cout << "enter 3 for Triangle"<< endl;
    
    cin >> option;

    //Switching through the options. 
    switch (option)
    {
    case 1:
        cout << "Enter the side of the Square" << endl;
        cin >> sideOFSquare;
        area = sideOFSquare * sideOFSquare;
        cout << "Area of a Square is:"<< area << endl;
        break;
    case 2:
        cout << "Enter the width of the rectangle"<<endl;
        cin >> width;

        cout << "Enter the length of the rectangle"<<endl;
        cin >> length;
        area = length * width;
        cout << "Area of a Rectangle is: " << area << endl;
        break;
    case 3:
        cout << "Enter the base of the triangle"<<endl;
        cin >> base;

        cout << "Enter the height of the triangle"<<endl;
        cin >> height;

        area = (base * height)/2;
        cout << "Area of a Triangle is: "<<area<<endl;
        break;

    default:
        cout << "incorrect option|||choose 1 to 3" << endl;
        break;
    }
    return 0;
}