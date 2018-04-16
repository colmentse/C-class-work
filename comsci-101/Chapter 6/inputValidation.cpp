/*
Author : Colmen Tse
Compsci : 120
6.2 inputValidation.cpp
*/

#include <iostream>
#include <cmath>
#include <string>
#include <iomanip>
using namespace std;

int main()
{

	while (true)
	{
		string password;
		cout << "Enter your password:";
		getline(cin, password);

		if (password == "sony") break;
	}

	int years = 10;
	int D = 100;

	double p = 0.075 / 12; 
	double T = years * 12;
	double S = D * ((pow(1 + p, T) - 1) / p);

	cout << "In " << years << " years, $";
	cout << D << " deposited per month will grow to $";

	// formatting output (see 4.2)
	cout.setf(ios::fixed|ios::showpoint);
	cout << setprecision(2);
	cout << S << "." << endl;
}