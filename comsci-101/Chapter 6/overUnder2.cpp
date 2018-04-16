/*
Author : Colmen Tse
Compsci : 120
6.7 overUnder2.cpp
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
		headtails = 1 + (rand() % 100);
		cout << "I'm thinking of a number between 1 and 100. Guess what it is:" << endl;
		cin >> guess;
		
		while (true)
		{		
			if (headtails > guess) 
			{
				cout << "That's too low -- guess again ";
				cin >> guess;
				cin.ignore(1000, 10);
			}	
			if (headtails < guess)
			{
				cout << "That's too high -- guess again ";
				cin >> guess;
				cin.ignore(1000, 10);
			}
			if (headtails == guess) break;
		} 
		cout << "That's right -- it's " << headtails << endl; 
}
