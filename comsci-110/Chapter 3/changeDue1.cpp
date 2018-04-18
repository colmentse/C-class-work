/*
Author : Colmen Tse
Compsci : 110
*/

#include <string> 
#include <iostream>
#include <cmath>
using namespace std; 

int main() 
{
	int cashPayment = 45000;
	int amountTendered = 100000;
	int changeDue = amountTendered - cashPayment;

	cout << "Cash payment amount: " << cashPayment << endl;
	cout << "Tendered amount: " << amountTendered << endl;
	cout << "Change due: " << changeDue << endl;

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

	cout << " this many hundredThousands dollar bills: " << hundredThousands << endl;
	cout << " this many tenThousands dollar bills: " << tenThousands << endl; 
	cout << " this many fiveThousands dollar bills: " << fiveThousands << endl; 
	cout << " this many oneThousand dollar bills: " << oneThousand << endl; 
	cout << " this many fiveHundred dollar bills: " << fiveHundred << endl; 
	cout << " this many oneHundred dollar bills: " << oneHundred << endl; 
	cout << " this many twenty dollar bills: " << twenty << endl; 
	cout << " this many ten dollar bills: " << ten << endl; 
	cout << " this many five dollar bills: " << five << endl; 
	cout << " this many two dollar bills: " << two << endl; 
	cout << " this many one dollar bills: " << one << endl; 
}
