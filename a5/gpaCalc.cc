//*********************************************************************************
//CPSC1620 Spring 2019
//Assignement #5  Question 3
//File: gpaCalc.cc
//Author: Shannon Abeda
//Date: March 1th 2019
//Purpose: To calculate the min, max and average GPA from input file
//Input: GPA of User
// 
//Output: double maxGPA, double minGPA, average
//
//Assumption: The input from the file will be numbers and not characters
//**********************************************************************************

#include<iostream>
#include<fstream>
#include<iomanip> //we will use the iomanip function to output the results to 1 decimal place
using namespace std;

int main()
{
   //variables and constant declarations
   double maxGPA,  minGPA,  average;
   double gpa;
   int counter;
   double total;

   //Program title
   cout <<"Welcome to GPA Calculator"<<endl;
   cout <<"Reading input from the file"<<endl;

   //file declarations
   ifstream fin;
   
   //opening the file
   fin.open("GPA.txt");
   fin>>gpa;


   //Declaration before loop
   minGPA=gpa;
   maxGPA=gpa;
 
      
   //loop condition for getting values from files
   while(!fin.eof())
   {
      counter+=total;
      
      if(gpa<minGPA)
      {
	 minGPA=gpa;
      }
      else
      {
	 if(gpa>maxGPA)
	 {
	    maxGPA=gpa;
	 }
      }
      fin>>gpa;
      counter++;
   }
      
  //Calculate the average
   average = total/counter;

   //output
   cout<<"Minimum GPA of the Student is: "<<minGPA<<endl;
   cout<<"Maximum GPA of the Student is: "<<maxGPA<<endl;
   cout<<"Average GPA of the Student is: "<<fixed<<setprecision(1)<<average<<endl;

   //closing of file
   fin.close();

   //end of program
    return 0;
}
