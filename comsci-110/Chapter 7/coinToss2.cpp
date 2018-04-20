/*
Author : Colmen Tse
Compsci : 110
7.4 coinToss2.cpp
*/

#include <string>
#include <ctime>
#include <cstdlib>
#include <iostream> 
using namespace std; 

int main() 
{
	srand(time(0));
	int toss; // tells the system how many tosses you want
	cout << "Enter the number of tosses to perform:";
	cin >> toss;
	cin.ignore(1000,10);

	for (int i = 0; i < toss; i++)
	{	
		int headtails;
		headtails = 1 + (rand() % 2);

		if (headtails == 1)
			cout << "Tails" << endl; 
		else 
			cout << "Heads" << endl;
	}
}
