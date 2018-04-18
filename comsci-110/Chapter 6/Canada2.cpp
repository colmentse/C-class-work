/*
Author : Colmen Tse
Compsci : 120
6.4 Canada2.cpp
*/

#include <string> 
#include <iostream>
#include <cmath>
using namespace std; 

int main() 
{
	while (true)
	 {
		double c;
		char degreeSymbol = 0xB0;
		double f;
		cout << "What's the temperature in Celsius? ";
		cin >> c;
		cin.ignore(1000,10);

		if (c == -999) break;
		f = (9.0 / 5.0) * c + 32;
		cout << c << " Celsius equals " << f << degreeSymbol << " Fahrenheit " << endl;
	 }
}
