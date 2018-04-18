/*
Author : Colmen Tse
Compsci : 120
5.4 Canada1.cpp
*/

#include <string> 
#include <iostream>
#include <cmath>
using namespace std; 

int main() 
{
	double c;
	double f;
	char degreeSymbol = 0xB0;
	cout << "What's the temperature in Celsius? ";
	cin >> c;
	cin.ignore(1000,10);
    
    f = (9.0 / 5.0) * c + 32;
    cout << c << " Celsius equals " << f << degreeSymbol << " Fahrenheit " << endl;
}
