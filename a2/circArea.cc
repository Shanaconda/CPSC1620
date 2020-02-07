
//*********************

//CPSC1620 Spring 2019
//Assignement #2 Question 2
//File: circArea.cc
//Author: Shannon Abeda
//ID: 001217132
//Date: January 30th 2019
//Purpose: To calculate the area of a circle
//
//Input: Radius of the circle
//radius: User input
//Output: The area of a circle
//3.14 * radius * radius
//Assumption: Value of the radius is not a negative value
//********************

#include <iostream>
using namespace std;

int main()
{
//Variables and constant declarations
   float radius;
   const double pi = 3.1416;
   double area;

   cout << "Enter the radius of the circle: " << endl;
   cin >> radius;

   //calculate the area of the circle
   area = pi * radius * radius;
   cout << "Area of circle: " << area <<endl;


   //end of program
   return 0;
}
