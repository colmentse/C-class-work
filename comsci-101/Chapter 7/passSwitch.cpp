/*
Author : Colmen Tse
Compsci : 120
7.1 passSwitch.cpp
*/

#include <string>
#include <ctime>
#include <cstdlib>
#include <iostream> 
using namespace std;



int main()
{
  char grade;
  cout << "What is your grade? [A, B, C, D, or F]: ";
  cin >> grade;
  cin.ignore(1000, 10);
 
  switch (grade)
  {  // start here with switch OFF
    case 'A':                              
    case 'a':                              
    case 'B':                              
    case 'b':                              
    case 'C':                              
    case 'c':                              
      cout << "You Pass" << endl;          
      break;                               
    case 'D':                              
    case 'F':                              
    case 'd':                              
    case 'f':                              
      cout << "You do NOT pass" << endl;  
      break;                               
    default:                               
      cout << "Invalid: " << grade << endl;
  }                                        
}  