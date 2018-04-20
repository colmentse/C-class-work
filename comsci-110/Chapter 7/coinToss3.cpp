/*
Author : Colmen Tse
Compsci : 110
7.5 coinToss3.cpp
*/

#include <string>
#include <ctime>
#include <cstdlib>
#include <iostream> 
using namespace std; 

int main() 
{
	srand(time(0));
	int sentinel = 0;
	int toss = sentinel; // tells the system how many tosses you want
	while (true)
	{		
		cout << "Enter the number of tosses to perform: [0=exit]:";
		cin >> toss;
		cin.ignore(1000,10);
		if (toss ==sentinel) break;
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
}
