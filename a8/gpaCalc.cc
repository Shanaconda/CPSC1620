//****************************************************************************************************************
// CPSC1620 SPRING 2019
// File: gpaCalc3.cc
// Author: Shannon Abeda
// Date: April 3rd, 2019
// Purpose: Fetch the GPA and student from the file GPA.txt
//          and display the min, max, average and sort them in ascending order.
//          
// Input file  GPA.txt
// Output: minGPA, maxGPA, average GPA
//
// Assumptions: the file GPA.txt will contain the appropiate information and will no have any invalid information
//*****************************************************************************************************************

#include<iostream>
#include<fstream>
#include<iomanip>
#include<string>

using namespace std;

//declaring array size
const int arraySize=100;

//Declaring struct

struct student{
   string studentNames;
   double gpa;
   };


//function protype declaration
void obtainNamesAndGPAs(student[], int&);
void sortGPA(student[],  int);
void displayMinMaxGPA(student[], int);
double calcAvgGPA(student[], int);


int main()
{
   //main variable declaration
  int numStudents=0;
   student students[arraySize];
   int average;
  

   //Program Banner
   cout<<"GPA Calculator program"<<endl<<endl;
   cout<<"Sorted Data"<<endl;

   
   //Calling Functions

   
   //Function to fetch data from the files
   obtainNamesAndGPAs(students, numStudents);
  
   
   //Selection sort function
   sortGPA(students, numStudents);

   //Display Function
   displayMinMaxGPA(students, numStudents);

   //Calculating the average gpa
   average= calcAvgGPA(students, numStudents);
   
   //end of main program
   return 0;
}


//***************************************************************************************
//Function: ObtainNamesAndGPAs
//Purpose: Retrieve Student names and their corresponding GPA's from the  GPA.txt
//Input: double GPA[]; string studentNames[], &int
//Return value: none (void function)
//Assumptions: N/A
//***************************************************************************************
   void obtainNamesAndGPAs(student students[], int & numStudents)
   {

      //local variable declaration
      ifstream fin;

      //opening the file
      fin.open("GPA.txt");

   //Fetching the first line of the file
   getline(fin, students[numStudents].studentNames);

   //Fetching data from file
   while(!fin.eof() && numStudents<=arraySize)
   {
      fin>>students[numStudents].gpa;
      numStudents++;
      fin.ignore();
      getline(fin, students[numStudents].studentNames);
   }

   //close.file
   fin.close();

   //end of function
   return;
}

//***************************************************************************************
//Function: sortGPA
//Purpose: selection sorting GPA in asceding order along with student name
//Input: double GPA[]; string studentNames[], int index
//Return value: none (void function)
//Assumptions: N/A
//***************************************************************************************

   void sortGPA(student students[], int numStudents)
{
   //local variable declaration
   int j, i; //loop variables and array indices
   double temp; //for swapping
   string names;


   //loop to sort GPA in ascending order along with student names
   for(i=0;i<numStudents-1; i++) //max value
   {
      for(j=i+1;j<numStudents;j++) //min value
      {
	 if(students[j].gpa<students[i].gpa) //min is less that the max value
	    {
	       temp=students[j].gpa;
	       names=students[j].studentNames;
	       students[j].gpa=students[i].gpa; //swapping occurs here
	       students[j].studentNames=students[i].studentNames; //swap again occurs here
	       students[i].gpa=temp; //value is stored into temp until another value is greater than the intial
	       students[i].studentNames=names;
	    }

        }
   }
    //loop to print out the sorted GPA and corresponding students
   for(i=0; i<numStudents;i++)
   {
      cout<<left<<setw(18)<<students[i].studentNames<<right<<fixed<<setprecision(2)<<setw(18)<<students[i].gpa<<endl;
   }

   //End of function
   
}





//***************************************************************************************
//Function: displayMinMaxGPA
//Purpose: selection sorting GPA in asceding order along with student name
//Input: double GPA[]; string studentNames[], int index
//Return value: none (void function)
//Assumptions: N/A
//***************************************************************************************

void displayMinMaxGPA(student students[], int numStudents)
{

   //local variables declaration
   int counter=0;
   int counter1=numStudents-1;
   double minGPA=students[counter].gpa;
   double maxGPA=students[counter1].gpa;

   cout<<endl<<"Students with a Minimum GPA of 0.40"<<endl;
   
   //Minimum GPA
   while(minGPA==students[counter].gpa)
   {
      cout<<students[counter].studentNames<<endl;
      counter++; //read in from the first value
   }

   cout<<endl<<"Student with Maximum GPA of 4.00"<<endl;
   
   //Maximum GPA
   while(maxGPA==students[counter1].gpa)
   {
      cout<<students[counter1].studentNames<<endl;
      counter1--; //reading from the top value to the bottom
   }
   
}



//**************************************************************************************
//Function: calcAvgGPA
//Purpose: selection sorting GPA in asceding order along with student name
//Input: double GPA[] and  int index
//Return value: none (void function)
//Assumptions: N/A
//***************************************************************************************

double calcAvgGPA(student students[], int numStudents)
{

   //local variable declarations
   double sum; //intializing the sum 
   double average; //average total of the GPA being returned to INT MAIN
   int index=0; //location of the stored GPA
   int counter; //variable for the counter loop

   for(counter=1; counter<numStudents; counter++) 
   {
      sum+= students[index].gpa;
      index++; //read in other values
   }
   

   //average calculation
   average=sum/numStudents;
   cout<<endl<<"Average GPA of Students: "<<fixed<<setprecision(2)<<average<<endl;
   
   //end of function
   return average; //returning value average to int main

}

	 
   	

