//*********************

//CPSC1620 Spring 2019
//Assignement #2 Question 3
//File: lineLength.cc
//Author: Shannon Abeda
//ID: 001217132
//Date: January 30th 2019
//Purpose: To calculate the length of a line using the Euclidean distance calculation
//
//Input: Coordinates for X and Y
//(x1, x2) and (y1, y2)
//Output: The length of a line
// 
//*******************

#include<iostream>
#include<cmath>

using namespace std;

int main(){
double x1; //input
double x2; //input
double y1; //input
double y2; //input
double length; //output

//User input
cout << "Enter the value for coordinate x1: ";
cin >> x1;
cout << "Enter the value for coordinate x2: ";
cin >> x2;
cout << "Enter the value for coordinate y1: ";
cin >> y1;
cout << "Enter the value for coordinate y2: ";
cin >> y2;

//Calculation for length of line using the Euclidean distance calcuation
length = sqrt((x2-x1)*(x2-x1)+(y2-y1)*(y2-y1));

//Display result from formula
cout << length << endl;


//End of program
   return 0;
}
