/*
    The BMI is often used to determine whether a person with a 
    sedentary lifestyle is overweight or underweight for his or 
    her height. A person’s BMI is calculated with the following 
    formula: BMI = weight * 703/height
    Design a program that calculates and displays a person’s body 
    mass index (BMI) and displays a message indicating whether the
    person has optimal weight, is underweight, or is overweight.
    A sedentary person’s weight is considered to be optimal if his
    or her BMI is between 18.5 and 25. If the BMI is less than 
    18.5, the person is considered to be underweight. 
    If the BMI value is greater than 25, the person is considered 
    to be overweight.

    /*Author: By Appiah Kumah Miracle
*/
#include <iostream>
using namespace std;
 
int main() {
    // create variable
    double weight, height,BMI;
    // added to the answer display
    string add = "Your weight status:\t ";

    // Prompt user for input
    cout << "Enter weight (in pounds):"<<endl;
    cin >> weight;
    cout << "Enter height (in inches): "<<endl;
    cin >> height;

    // Calculate BMI
    BMI = weight * 703 /(height * height);

    if (BMI <= 18.5) {
        cout << add <<" Underweight" << endl;
    } else if (BMI > 18.5 && BMI <= 25) {
        cout << add <<" Optimal weight" << endl;
    } else {
        cout << add <<" Overweight" << endl;
    }
    // Display BMI and weight status
    cout << "Your BMI is:\t\t " << BMI << endl;
   
     return 0;
}
