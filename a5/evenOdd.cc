
//*********************************************************************************
//CPSC1620 Spring 2019
//Assignement #5  Question 2
//File: evenOdd.cc
//Author: Shannon Abeda
//Date: February  27th 2019
//Purpose: To determine if a value is even or odd
//Input: A positive integer
// int number
//Output: The sum of the integer and the number of even and odd values 
// int sum
//Assumption: The user will input a value that is an real number and not a character
//            The user will also enter a positive integer only
//**********************************************************************************


#include<iostream>

using namespace std;

int main()
{
   //variables and constant declarations
   int even;     //set value for any even numbers
   int odd;     //set value for any odd values
   int counter;
   int value; //each value
   int remainder; 
   int number; //numbers of value to check

   //promput user to provide the number of values to check
   cout << " Enter the amount of numbers you want to check:" ;
   cin >> number;
   cout << "Enter the values of each number:";

   //for loop
   for(counter=1; counter<=number; counter++)
   {
      cin >> value; 
      cout << value<<" ";

      remainder = value %2; //if number is even 
	 if (remainder == 0){
	    even++;
	    cout <<"is Even";
	    cout <<endl;
	 }
	 else //all other numbers will be odd
	 {
	    odd++; 
	    cout <<"is Odd";
	    cout <<endl;
	 }
}
   
   //Output values
   cout <<"You entered "<<even<<" Even numbers and "<<odd<<" Odd numbers"<<endl;

   //end program
   return 0;

}
	       
	       


  
