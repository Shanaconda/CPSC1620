//*********************************************************************************
//CPSC1620 Spring 2019
//Assignement #5  Question 1
//File: circArea.cc
//Author: Shannon Abeda
//Date: February  14th 2019
//Purpose: To calculate the area of a circle
//Input: Radius of the circle
//radius: User input
//Output: The area of a circle
//3.14 * radius * radius
//Assumption: The user will input a value that is an real number and not a character
//**********************************************************************************

#include <iostream>


using namespace std;

int main()
{

   //Variables and constant declarations
   double radius, area;
   const double pi = 3.1416;
   char prompt;



   //Do-while conditional loop
   do {

   cout << "Enter the radius of the circle: " << endl;
   cin >> radius; //User input

   if (radius<0) //Condition if the value input is negative
   {
      cout << "Invalid side length! Number cannot be negative" <<endl;
   }

   else{ //If the user inputs a postive value
      area = pi *radius * radius;
      cout << "Area of the circle is: " <<area <<endl;
   }

   //prompt user to try again
   cout <<"Would you like to try again (Y for yes, any other key for no) "<<endl;
   cin >> prompt;

   }
   while(prompt=='Y'||prompt=='y');
   return true; //looping of program
    
   //end of program
   return 0;
}
