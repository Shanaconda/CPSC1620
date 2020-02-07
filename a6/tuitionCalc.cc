//******************************************************************************

//CPSC1620 Spring 2019
//Assignement #6 Question 1
//File: tuitionCalc.cc
//Author: Shannon Abeda
//
//Date: March 12th 2019
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


//Function prototype declarations
int tuition(int);

using namespace std;

int main()
{
   //Variables and Constant Declarations
   int choice;


   //Welcome to the Program
   cout << "Welcome to Tuition Calculator Program"<<endl<<endl;
   //Seleciton for program choice
    cout <<"Select from the following options"<<endl
    	<<" 1: Education " <<endl
    	<<" 2: Heatlh Sciences " <<endl
    	<<" 3: Management " <<endl
    	<<" 4: All other programs " <<endl<<endl;

    cin >>choice; 

   //Return Tuition Menu
    tuition(choice);
  
//End of Program   
return 0;

}


//*************************************************
//Function: Display the program choice
//Input: N/A
//Return Value: Program Choice
//
//************************************************

int tuition(int choice)
{

 switch(choice){
      case 1:
      case 3:
	 //Result if the input is 1 and 3
	 cout << "You will pay $2250 in tuition"<<endl;
	 break;
      case 2: //Result if the input is 2
	 cout << "You will pay $2200 in tuition"<<endl;
	 break;
      case 4: //Result if the input is 4
	 cout << "You will pay $2000 in tuition"<<endl;
	 break;
      default: //Result if user does not choose a number between 1 and 4
	 cout <<"Invalid program code";
	 break;
 }
 //End of function
 return choice;
}









	   
	   
	   
	   	      
