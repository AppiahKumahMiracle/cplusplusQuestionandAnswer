/*
    The colors red, blue, and yellow are known as the primary colors 
    because they cannot be made by mixing other colors. 
    When you mix two primary colors, you get a secondary color, 
    as shown here:
    • When you mix red and blue, you get purple.
    • When you mix red and yellow, you get orange.
    • When you mix blue and yellow, you get green.
 Design a program that prompts the user to enter the names of 
 two primary colors to mix. If the user enters anything other than
 “red,” “blue,” or “yellow,” the program should display an error 
 message. Otherwise, the program should display the name of the
 secondary color that results.

 /*Author: By Appiah Kumah Miracle
*/
#include <iostream>
using namespace std;

 int main() {
    // create variable
    string colorOne, colorTwo;

    // Prompt user for input
    cout << "Choose (red, blue, yellow) to mix them."<< endl;
    cout << "Enter the first primary color "<<endl;
    cin >> colorOne;
    cout << "Enter the second primary color "<<endl;
    cin >> colorTwo;

    // setting up the secondary colors
     if ((colorOne == "blue" && colorTwo == "red") || (colorOne == "red" && colorTwo == "blue")) {
        cout<< "The secondary color is: purple" <<endl;
    } 
    else if ((colorOne == "red" && colorTwo == "yellow") || (colorOne == "yellow" && colorTwo == "red")) {
        cout<<"The secondary color is: orange"<<endl;
    } 
    else if ((colorOne == "yellow" && colorTwo == "blue") || (colorOne == "blue" && colorTwo == "yellow")) {
        cout<<"The secondary color is: green"<<endl;
    } 
    else {
        cout<<"Error!!!: Invalid color combination!...Please provide the correct colors."<<endl;
    }
    return 0;
}
