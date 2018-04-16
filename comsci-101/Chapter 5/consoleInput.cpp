/*
Author : Colmen Tse
Compsci : 120
5.6 consoleinput.cpp
*/

#include <string> 
#include <iostream>
#include <cmath>
using namespace std; 

int main() 
{
	int age;
	cout << "Enter your age: ";
	cin >> age;
	cin.ignore(1000, 10);

	string name;
	cout << "Enter your name: ";
	getline(cin, name);

	double temp;
	cout << "Enter the temperature outside right now (degrees F): ";
	cin >> temp;
	cin.ignore(1000, 10);

	string location;
	cout << "What city are you in right now? ";
	getline(cin, location);

	cout << name << " is " << age << " years old." << endl;
	cout << "It's " << temp << " degrees F in " << location << endl;

}