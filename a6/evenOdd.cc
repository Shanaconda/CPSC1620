
//*********************************************************************************
//CPSC1620 Spring 2019
//Assignement #6  Question 2
//File: evenOdd.cc
//Author: Shannon Abeda
//Date: March 13th 2019
//Purpose: To determine if a value is even or odd
//Input: A positive integer
// int number
//Output: The sum of the integer and the number of even and odd values 
// int sum
//Assumption: The user will input a value that is an real number and not a character
//            The user will also enter a positive integer only
//**********************************************************************************


#include<iostream>

//Function Prototype
void evenAndOdd(int, int&, int&);

using namespace std;


//Main program
int main()
{
   //variables and constant declarations
   int counter; //User input
   int totalEven= 0; //Intializing even numbers
   int totalOdd = 0; //Intializing odd numbers
  
  
   //Do while loop to check for user input
   do{

      //prompt user to provide the number of values to check
      cout << "How many numbers do you want to enter?" <<endl;
      cin>>counter;

      if(counter<1) //If user inputs a value less that 1
      {
	 cout<< "Invalid input, please enter a integer value greater than 0"<<endl;

      }

      else{
	 evenAndOdd(counter, totalEven, totalOdd); //Calling function 
      }
   }

   while(counter<=0); //loop back to prompt
      return true;	


    //End of Program  
    return 0;
}

   

	       
//*********************************************************************************
//Function: evenAndOdd
//Purpose: display the sum of even and odd numbers
//Input: int number
//Output: none
//Assumptions: none (input checked for validity)
// 
//*********************************************************************************

void evenAndOdd(int counter, int & totalEven, int & totalOdd)
{

   //Local variables declarations
   int number;
  
     for(int i=0; i<counter; i++)
   {
      cout << "Number "<< i+1 <<": ";
      cin >> number;
      if (number%2 == 0) //If number is even
      {
	 totalEven += 1;
      }
      else{
	 totalOdd += 1; //If number is odd
      }
   }

     //Display the total  number of Even and Odd   
   cout << "You entered " <<totalEven << " even numbers and " <<totalOdd <<" odd numbers"<<endl;


   //End of Void Function
   return; //We are not returning any values to int main

}
