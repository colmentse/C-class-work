/*
Author : Colmen Tse
Compsci : 120
6.6 overUnder1.cpp
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
	int guess;
	headtails = 1 + (rand() % 10);
	cout << "I'm thinking of a number between 1 and 10. Guess what it is:" << endl;
	cin >> guess;


	if (headtails == guess)
		cout << "Congrats you made the right guess" << endl; 
	if (headtails > guess) 
		cout << "That's too low -- it's" << headtails << endl;
	else
		cout << "That's too high -- it's" << headtails << endl; 

}
