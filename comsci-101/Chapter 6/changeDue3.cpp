/*
Author : Colmen Tse
Compsci : 120
6.3 changeDue3.cpp
*/

#include <iostream>
#include <cmath>
#include <string>
#include <iomanip>
using namespace std;

int main() 
{
	int cashPayment;
	int amountTendered;

	cout << "Cash payment amount: ";
	cin >> cashPayment;
	cin.ignore(1000,10);

	cout << "Tendered amount: ";
	cin >> amountTendered;
	cin.ignore(1000,10);
	cout << endl;

	int changeDue = amountTendered - cashPayment;
	cout << "Change paid out in: " << changeDue << endl;

	int hundredThousands = changeDue / 100000;
	changeDue = changeDue % 100000;

	int tenThousands = changeDue / 10000;
	changeDue = changeDue % 10000;

	int fiveThousands = changeDue / 5000;
	changeDue = changeDue % 5000;

	int oneThousand = changeDue / 1000;
	changeDue = changeDue % 1000;

	int fiveHundred = changeDue / 500;
	changeDue = changeDue % 500;

	int oneHundred = changeDue / 100;
	changeDue = changeDue % 100;

	int twenty = changeDue / 20;
	changeDue = changeDue % 20;

	int ten = changeDue / 10;
	changeDue = changeDue % 10;

	int five = changeDue / 5;
	changeDue = changeDue % 5;

	int two = changeDue / 2;
	changeDue = changeDue % 2;

	int one = changeDue / 1;
	changeDue = changeDue % 1;

	if (hundredThousands > 0) 
		cout << " this many hundredThousands dollar bills: " << hundredThousands << endl;
	if (tenThousands > 0) 
		cout << " this many tenThousands dollar bills: " << tenThousands << endl; 
	if (fiveThousands > 0) 
		cout << " this many fiveThousands dollar bills: " << fiveThousands << endl; 
	if (oneThousand > 0) 
		cout << " this many oneThousand dollar bills: " << oneThousand << endl; 
	if (fiveHundred > 0) 
		cout << " this many fiveHundred dollar bills: " << fiveHundred << endl; 
	if (oneHundred > 0)
		cout << " this many oneHundred dollar bills: " << oneHundred << endl; 
	if (twenty > 0)
		cout << " this many twenty dollar bills: " << twenty << endl; 
	if (ten > 0)
		cout << " this many ten dollar bills: " << ten << endl; 
	if (five > 0)
		cout << " this many five dollar bills: " << five << endl; 
	if (two > 0)
		cout << " this many two dollar bills: " << two << endl; 
	if (one > 0)
	cout << " this many one dollar bills: " << one << endl; 
}