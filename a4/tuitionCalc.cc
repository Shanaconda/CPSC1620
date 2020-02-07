//******************************************************************************

//CPSC1620 Spring 2019
//Assignement #4 Question 3
//File: tuitionCalc.cc
//Author: Shannon Abeda
//
//Date: February 12th 2019
//Purpose: To display a student's current tuition based on their program of study
//
//Input: Code for the program
//       [1] = Education
//       [2] = Health Sciences
//       [3] = Management
//       [4] = All other programs
//
//Output: Choice 1 and 3 = $2250
//        Choice 2 = $2200
//        Choice 4 = $2000
//        Choice > 4 = Invalid input
//
//
//Assumption: The user will choose a value between 1-4 and nothing larger than that
//***************************************************************************************


#include<iostream>

using namespace std;





int main()
{


//Main program

//Variable Declaration
int programChoice;

//Welcome to the Program
cout << "Welcome to Tuition Calculator Program" <<endl<<endl;


//Selection for program choice
cout << "Select from the following options" <<endl
     << "1: Education " <<endl
     << "2: Health Sciences " <<endl
     << "3: Management " <<endl
     << "4: All other program " <<endl<<endl;

cin >> programChoice; //User input 

//Determine the Tuition

switch (programChoice) //Implementation of a Switch for multiple conditions
{
   case 1: //Result if user choices 1
      cout << "You will pay $2250 in tuition"<<endl;
   break;

   case 2: //Result if user choices 2
      cout << "You will pay $2200 in tuition"<<endl;
   break;
   
   case 3: //Result if user choices 3
      cout << "You will pay $2250 in tuition"<<endl;
   break;

   case 4: //Result if user choices 4
      cout << "You will pay $2000 in tuition" <<endl;
   break;

   default: //Result if user does not choice a number between 1-4
      cout << "Invalid program code";
} //End of Switch Statement 

//End of program
return 0;
}
