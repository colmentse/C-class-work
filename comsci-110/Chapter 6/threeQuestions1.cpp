/*
Author : Colmen Tse
Compsci : 120
6.1 threeQuestions1.cpp
*/

#include <iostream>
#include <cmath>
#include <string>
#include <iomanip>
using namespace std;

int main()
{
	string guess1;
	cout << "1 + 2 = ";
	getline(cin, guess1);

	if (guess1 == "3")
		cout << "Good work – your answer is correct!" << endl;
	else
		cout << "Nice job, but a better answer is 3." << endl;

	string guess2;
	cout << "100 - 99 = ";
	getline(cin, guess2);

	if (guess2 == "1")
		cout << "Good work – your answer is correct!" << endl;
	else
		cout << "Nice job, but a better answer is 1." << endl;

	string guess3;
	cout << "12 + 21 = ";
	getline(cin, guess3);

	if (guess3 == "30")
		cout << "Good work – your answer is correct!" << endl;
	else
		cout << "Nice job, but a better answer is 33." << endl;

}