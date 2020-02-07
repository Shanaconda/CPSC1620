//*********************
// 
//CPSC1620 Spring 2019
//Assignement #3 Question 2
//File: lengthLine.cc
//Author: Shannon Abeda
//Date: January 30th 2019
//Purpose: To calculate the length of a line using the Euclidean distance calculations
//
//Input(s): first endpoints of the line
//       Double: x1, y1, x2, y2
//Output(s): the length of the line
//           Double: length
//Assumptions : User enters a integer
//******************************************************

#include<iostream>
#include<cmath>
#include<fstream>
#include<string>


using namespace std;

int main(){

   //Variable and constant declarations
   double x1, x2, y1, y2; //input
   double length; //output

   ifstream fin;
   ofstream fout;

   //open the files
   
   fin.open("input.txt");
   fout.open("output.txt");
   

   //file input
   fin >> x1;
   fin >> y1;
   fin >> x2;
   fin >> y2;

   //Calculation for length of line using the Euclidean distance calcuation
   length = sqrt((x2-x1)*(x2-x1)+(y2-y1)*(y2-y1));

   //Output result to output.txt
   cout << "Calculations have been completed! The result has been outputed to the output.txt" <<endl;
   cout << "End of the program" <<endl;

   
   
   fout <<"length of line is:" <<endl << length <<endl;


   //Close files
   fin.close();
   fout.close();

   //End of program
   return 0;
}

