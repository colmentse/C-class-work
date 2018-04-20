/*
Author : Colmen Tse
Compsci : 110
7.7 war3.cpp
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
	int playersuit
	int playerwins = 0;
	int computerwins = 0;
	char yesorno;

	while (true)
	{	
		computercard = 2 + (rand() % 13);
		playercard = 2 + (rand() % 13);
		computersuit = 1 + (rand() % 3);
		playersuit = 1 + (rand() % 3);
		cout << "The computer draws "; 	
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
			{ 
				cout << computercard;
			} 
			//computercard generation and selection

	
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


		//computersuit generation and selection
		cout << "The human draws "; 
				
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

		if (playercard > computercard)
		{
			cout << "--<< Human wins! >>--" << endl; humanwins++
			cout << "Computer wins: " << computerwins << ", Human wins: "humanwins
		}
		if (computercard > playercard)
		{
			cout << "--<< Computer wins! >>--" << endl; computerwins++
			cout << "Computer wins: " << computerwins << ", Human wins: "humanwins
		}
		if (computercard == playercard)
		{
			cout << "It's a tie." << endl;
		}
		while (true)
			cout <<"Continue? [Y/N]";
			cin >> yesorno;
			cin.ignore(1000,10);
			if (yesorno == 'N' || yesorno == 'n') break;
		

	}
		//Deciding who wins

}
