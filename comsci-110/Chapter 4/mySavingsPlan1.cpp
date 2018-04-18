/*
Author : Colmen Tse
Compsci : 120
*/

#include <iomanip>
#include <iostream>
using namespace std;
#include <cmath>

int main()
{
  // input values
  int years = 10;
  int D = 100;

  // output (calculated) values
  double p = 0.065 / 12; // 7.5% annual interest rate
  double T = years * 12;
  double S = D * ((pow(1 + p, T) - 1) / p);

  // echoing input values, unformatted
  cout << "In " <<  years << " years, at " << p * 1200 << "%, ";
  cout << D << " deposited per month will grow to $";
  

  // formatting output (see 4.2)
  cout.setf(ios::fixed|ios::showpoint);
  cout << setprecision(2);
  cout << S << "." << endl;
 
}