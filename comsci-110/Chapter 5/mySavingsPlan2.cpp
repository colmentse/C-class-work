/*
Author : Colmen Tse
Compsci : 120
5.5 mySavingsPlan2.cpp
*/

#include <iostream>
#include <cmath>
#include <string>
#include <iomanip>
using namespace std;

int main()
{
  
  // input values
  int years;
  double D;
  double p;
  int ct;

  cout << "Please enter your years until retirement in whole numbers. ";
  cin >> years;
  cin.ignore(1000, 10);

  cout << "Please enter your expected annual interest rate percentage as a floating point value. ";
  cin >> p;
  cin.ignore(1000, 10);

  cout << "Please enter in whole number amount to be deposited in bank savings per month. ";
  cin >> D;
  cin.ignore(1000, 10);


  p = (p / 100) / 12;
  double T = years * 12;
  double S = D * ((pow(1 + p, T) - 1) / p);
  p = (p * 100) * 12;

  cout << "In " <<  years << " years, at " << p << "%, ";
  cout << D << " deposited per month will grow to $";
  
  cout.setf(ios::fixed|ios::showpoint);
  cout << setprecision(2);
  cout << S << "." << endl;

}