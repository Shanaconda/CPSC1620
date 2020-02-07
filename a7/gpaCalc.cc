//****************************************************************************************************************
// CPSC1620 SPRING 2019
// File: gpaCalc.cc
// Author: Shannon Abeda
// Date: March 24, 2019
// Purpose: Fetch the GPA and student from the file GPA.txt
//          and display the min, max, average and sort them in ascending order
//
// Input: file: GPA.txt
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


//function protype declaration
void obtainNamesAndGPAs(double[], string[], int&);
void sortGPA(double[], string [], int);
void displayMinMaxGPA(double[], string[], int);
double calcAvgGPA(double[], int);


int main()
{
   //main variable declaration
   double GPA[arraySize]; //array for GPA data
   double average; //average GPA
   string studentNames[arraySize]; //array for names
   int index=1; //intializing 



   //Program Banner
   cout<<"GPA Calculator program"<<endl<<endl;
   cout<<"Sorted Data"<<endl;

   
   //Calling Functions

   
   //Function to fetch data from the files
   obtainNamesAndGPAs(GPA, studentNames, index);
  
   
   //Selection sort function
   sortGPA(GPA, studentNames, index);

   
   //Display Function
   displayMinMaxGPA(GPA, studentNames, index);

   //Calculating the average gpa
   average = calcAvgGPA(GPA, index);

   cout<<endl<<"Average GPA of Students: "<<average<<endl;

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

void obtainNamesAndGPAs(double GPA[], string studentNames[], int & index){
   //local variable declaration
   ifstream fin;

   //opening the file
   fin.open("GPA.txt");

   //Fetching the first line of the file
   getline(fin, studentNames[index]);

   //Fetching data from file
   while(!fin.eof() && index<=arraySize)
   {
      fin>>GPA[index];
      index++;
      fin.ignore();
      getline(fin, studentNames[index]);
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

void sortGPA(double GPA[], string studentNames[], int index)
{
   //local variable declaration
   int j, i; //loop variables and array indices
   double temp; //for swapping
   string names;


   //loop to sort GPA in ascending order along with student names
   for(i=0;i<index-1; i++)
   {
      for(j=i+1;j<index;j++)
      {
	 if(GPA[j]<GPA[i])
	    {
	       temp=GPA[j];
	       names=studentNames[j];
	       GPA[j]=GPA[i];
	       studentNames[j]=studentNames[i];
	       GPA[i]=temp;
	       studentNames[i]=names;
	    }

        }
   }
    //loop to print out the sorted GPA and corresponding students
   for(i=1; i<index;i++)
   {
      cout<<left<<setw(18)<<studentNames[i]<<right<<fixed<<setprecision(1)<<setw(18)<<GPA[i]<<endl;
   }

   //End of function
   return; //void function not returning any value
}





//***************************************************************************************
//Function: displayMinMaxGPA
//Purpose: selection sorting GPA in asceding order along with student name
//Input: double GPA[]; string studentNames[], int index
//Return value: none (void function)
//Assumptions: N/A
//***************************************************************************************

void displayMinMaxGPA(double GPA[], string studentNames[], int index)
{

   //local variable declaration
   int i; // loop counter
   int total=1; //intializing the total
   int number; 

   //loop for minimum gpa
   for(i=1; i<index;i++)
   {
      if(GPA[i]==GPA[i+1])
      {
	 total++;
      }
      else
      {
	 i=index;
      }

   }

   cout<<endl<<"Students with a Minimum GPA of 0.4"<<endl;


   //display the students with the  minimum gpa
   for(i=1;i<=total;i++)
   {
      cout<<studentNames[i]<<endl;
   }

   number=index-1;

   //loop for maximum gpa
   for(i=index-1;i>=1;i--)
   {

      if(GPA[i]==GPA[i-1])
      {
	 number--;
      }
      else
      {
	 i=1;
      }
   }

   cout<<endl<<"Students with a Maximum GPA of 4.0"<<endl;

   // display students with the  maximum gpa
   for(i=number;i<index;i++)
   {
      cout<<studentNames[i]<<endl;
   }

   //end of function displayMinMaxGPA
   return; //void function not returning anything

}



//**************************************************************************************
//Function: calcAvgGPA
//Purpose: selection sorting GPA in asceding order along with student name
//Input: double GPA[] and  int index
//Return value: none (void function)
//Assumptions: N/A
//***************************************************************************************

double calcAvgGPA(double GPA[], int index)
{

   //local variable declarations
   double sum; //intializing the sum 
   double average;
   int i;

  
   
   for(i=1; i<index; i++)
   {
      sum+= GPA[i];
   }
   i--;

   //average calculation
   average=sum/i;

   //end of function
   return average; //returning value average to int main

}

	 
   	

