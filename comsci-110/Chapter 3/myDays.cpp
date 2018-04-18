\*
Author : Colmen Tse
Compsci : 120
*\

#include <string> 
#include <iostream>
#include <cmath>
using namespace std; 

int main() 
{
	int days = 0;
	int yearsold = 22;
	int leapyears = 5;
	int b4born = 151;
	int daysleft = 102;

	days = yearsold * 365;
	days = days + leapyears;
	days = days - b4born;
	days = days - daysleft;

	cout << "DOB: May 31st, 1993" << endl;
	cout << "Due: Sept 20th, 2014" << endl;
	cout << "Age: " << days << " days" << endl;
}