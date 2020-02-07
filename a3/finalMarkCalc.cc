//*************************************************
// CPSC 1620 Spring 2019
// File: finalMarkCalc.cc
// Author: Shannon Abeda
// Date: February 5, 2019
//
// Purpose: To calculate the marks of student in CPSC 1620
//
// Inputs  from file: String: studentName
//                    Double: a1, a2, a3, a4, a5, a6, a7, a8, MT, FIN
//
// Outputs  to  file: String: studentName
//                    Double: sa1, sa2, sa3, sa4, sa5, sa6, sa7, stassts, MT, sFIN
//                    Double: tasst, stassts, MT, sMT, FIN, sFIN, totalMark
//
// Assumptions: the data inputed from the file will contain a name and values for each assignment, the midterm and final

#include<iostream>
#include<iomanip>
#include<fstream>
#include<string>

using namespace std;

int main()
{
   //Variables and constant declarations
   string studentName; //Student Name
   double a1, a2, a3, a4, a5, a6, a7; //Marks of Assignments
   double sa1, sa2, sa3, sa4, sa5, sa6, sa7; //Scaled marks of Assignments
   double tasst; //Total marks of Assignements
   double stasst; //Scaled total marks of Assignements
   double MT, FIN; //Marks of Midterm and Final
   double sMT, sFIN; //Scaled marks of Midterm and Final
   double totalMark; //Total combined marks of Midterm, Final and Assignments
 

   //file variable declaration
   ifstream fin;
   ofstream fout;

   //open the files
   fin.open("input2.txt");
   fout.open("output2.txt");

   //Print the name of the program
   cout <<"Final Mark Program" <<endl <<endl;

   //read the data from file
   cout <<"Fetching data from input file" <<endl <<endl;
   getline(fin, studentName);
   fin >> MT>> FIN>> a1>> a2>> a3>> a4>> a5>> a6>> a7;
   

   //Total calculations  and conversion to scaled marks
   tasst = a1+a2+a3+a4+a5+a6+a7; //Total Assignments 
   //Formula for Scaled Assignments
   sa1 = a1*2/20;
   sa2 = a2*2/40;
   sa3 = a3*3/40;
   sa4 = a4*4/40;
   sa5 = a5*4/40;
   sa6 = a6*5/50;
   sa7 = a7*5/60;
   stasst  = (sa1+sa2+sa3+sa4+sa5+sa6+sa7); //Scaled assignments total
   sMT = MT*25/80; //Scaled Midterms
   sFIN = FIN*50/80; //Scaled Finals
   totalMark=stasst+sMT+sFIN; //Total Marks

   //Outputs and formatting results into output2.txt
   cout <<"Calculations have been completed! The results  will now be formatted to the output2.txt"<<endl;


   //Formatting results into the required rubric

   fout <<  "Name:  " << studentName <<endl;
   fout <<endl;

   //Header
   fout <<setw(10)<<" "<<setw(6)<<"A1"<<setw(6)<<"A2"<<setw(6)<<"A3"<<setw(6)<<"A4"<<setw(6)<<"A5"<<setw(6)<<"A6"<<setw(6)<<"A7"<<setw(10)<<"ATotal"<<setw(10)<<"Midterm"
	<<setw(10)<<"Final"<<endl;
   //First Row (Non-scaled marks)
   fout <<setw(10)<<"Mark"<<setw(6)<<fixed<<setprecision(1)<<a1<<setw(6)<<a2<<setw(6)<<a3<<setw(6)<<a4<<setw(6)<<a5<<setw(6)<<a6<<setw(6)<<a7<<setw(10)<<tasst<<setw(10)<<MT
	<<setw(10)<<FIN<<endl;
   //Second row (Scaled Marks)
   fout <<setw(10)<<"Scaled"<<setw(6)<<fixed<<setprecision(1)<<sa1<<setw(6)<<sa2<<setw(6)<<sa3<<setw(6)<<sa4<<setw(6)<<sa5<<setw(6)<<sa6
	<<setw(6)<<sa7<<setw(10)<<stasst<<setw(10)<<sMT
	<<setw(10)<<sFIN<<endl;

   fout <<endl;

   //Course Mark/Final Mark
   fout <<"Total Course Mark (out of 100):  " <<fixed<<setprecision(1)<<totalMark<<endl;

   //Close the files
   fin.close();
   fout.close();
   

   //end of program
   return 0;
}

