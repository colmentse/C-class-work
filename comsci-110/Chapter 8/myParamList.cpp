/*
Author : Colmen Tse
Compsci : 110
8.1 myParamList.cpp.
*/
#include <string>
#include <iostream> 
using namespace std; 
  

double calcAverage(int a, int b, int c ) 
{ 
  double result = 0.0; 
  result = (a + b + c) / 3.0; 
  return result; 
} // calcAverage 
  
int main() 
{ 
  int v; 
  int x; 
  int y;

  cout << "Enter the first whole number:";
  cin >> v;
  cin.ignore(1000,10);

  cout << "Enter the second whole number:";
  cin >> x;
  cin.ignore(1000,10);

  cout << "Enter the third whole number:";
  cin >> y;
  cin.ignore(1000,10);

  double z = calcAverage(v, x, y); 
  cout << z << endl; 
} // main 