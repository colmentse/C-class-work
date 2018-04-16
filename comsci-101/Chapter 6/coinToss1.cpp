/*
Author : Colmen Tse
Compsci : 120
6.5 coinToss1.cpp
*/

#include <string>
#include <ctime>
#include <cstdlib>
#include <iostream> 
using namespace std; 

int main() 
{
	srand(time(0));
	int headtails;
	headtails = 1 + (rand() % 2);

	if (headtails == 1)
		cout << "Tails" << endl; 
	else 
		cout << "Heads" << endl;
}
