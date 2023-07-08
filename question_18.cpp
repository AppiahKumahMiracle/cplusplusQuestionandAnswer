/*
    Scientists measure an object’s mass in kilograms and its weight 
    in Newtons. If you know the amount of mass of an object, 
    you can calculate its weight, in Newtons, with the following
     formula:
Weight = Mass × 9.8
Design a program that asks the user to enter an object’s mass,
 and then calculates its weight. If the object weighs more than 
 1,000 Newtons, display a message indicating that it is too heavy. 
 If the object weighs less than 10 Newtons, display a message 
 indicating that it is too light.

 /* Author: By Appiah Kumah Miracle
*/
#include <iostream>
using namespace std;

int main() {
    // create constant
    const double point = 9.8;
    // create variable to hold the mass and weight
    double mass,weight;

    // prompt the user to enter the object's of the mass
    cout << "Enter the mass of the object (in kilograms):"<< endl;
    cin >> mass;

    // Calculate the weight using the formula Weight = Mass * 9.8
    weight = mass * point;

    // check if the object is too heavy or too light
    if (weight > 1000) {
        cout << "The item is too heavy."<< endl;
    } 
    else if (weight < 10) {
        cout << "The item is too light."<< endl;
    } 
    else {
        cout << "The weight is normal"<<endl;
        }

    return 0;
}
