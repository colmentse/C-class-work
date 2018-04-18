/*
Author : Colmen Tse
Compsci : 120
6.8 war1.cpp
*/

#include <string>
#include <ctime>
#include <cstdlib>
#include <iostream> 
using namespace std; 

int main() 
{
		srand(time(0));
		int computercard;
		int playercard;
		int computersuit;
		int playersuit;
		computercard = 2 + (rand() % 13);
		playercard = 2 + (rand() % 13);
		computersuit = 1 + (rand() % 3);
		playersuit = 1 + (rand() % 3);
		cout << "The computer draws "; 
		{		
			if (computercard == 11) 
			{
				cout << "Jack"; 
			}	
			if (computercard == 12)
			{
				cout << "Queen";
			}
			if (computercard == 13)
			{
				cout << "King";
			}
			if (computercard == 14)
			{
				cout << "Ace";
			}
			if (computercard < 11) 
				cout << computercard;
		} 
			//computercard generation and selection

		{		
			if (computersuit == 1) 
			{
				cout << " Diamonds" << endl;
			}	
			if (computersuit == 2)
			{
				cout << " Hearts" << endl;
			}
			if (computersuit == 3)
			{
				cout << " Clubs" << endl;
			}
		}

		//computersuit generation and selection
		cout << "The human draws "; 
		{		
			if (playercard == 11) 
			{
				cout << "Jack";
			}	
			if (playercard == 12)
			{
				cout << "Queen";
			}
			if (playercard == 13)
			{
				cout << "King";
			}
			if (playercard == 14)
			{
				cout << "Ace";
			}
			if (playercard < 11) 
				cout << playercard;
		}
		//playercard generation and selection

		{		
			if (playersuit == 1) 
			{
				cout << " Diamonds" << endl;
			}	
			if (playersuit == 2)
			{
				cout << " Hearts" << endl;
			}
			if (playersuit == 3)
			{
				cout << " Clubs" << endl;
			}
		//playersuit generation and selection
		}
		if (playercard > computercard)
			cout << "Human wins the War" << endl;
		if (computercard > playercard)
			cout << "Computer wins the War" << endl;
		if (computercard == playercard)
		{
		 	if (computersuit <= playersuit)
				cout << "Human wins the War" << endl;
		 	if (computersuit >= playersuit)
				cout << "Computer wins the War" << endl;
		}
		//Deciding who wins

}
