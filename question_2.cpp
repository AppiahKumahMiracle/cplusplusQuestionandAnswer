/*
 Write a program that computes the area of a circular 
 region (the shaded area in the diagram) given the 
 radius of the inner and the outer circles,
 ri and ro, respectively. 

  HINT: 
  We compute the area of the circular region by 
  subtracting the area of the inner circle from 
  the area of the outer circle.

  /*Author: By Appiah Kumah Miracle
*/
#include <iostream>
using namespace std;

int main(){
    const double PI = 3.14;
    double inner,outer,innerCircle, outerCircle, area;

    cout << "Enter the inner circle value" << endl;
    cin >> inner;

    cout << "Enter the outer circle value" << endl;
    cin >> outer;

    // calculate for the inner circle
    innerCircle = PI * inner * inner;
    // calculate for the outer circle
    outerCircle = PI * outer * outer;
    // calculate for the area
    area = outerCircle - innerCircle;

    cout << "Area of the circular region is: " << area << endl;
    return 0;
}