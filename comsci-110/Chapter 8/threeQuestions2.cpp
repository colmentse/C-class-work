/*
Author : Colmen Tse
Compsci : 120
8.5 threeQuestions2.cpp
*/

#include <iostream>
#include <cmath>
#include <string>
#include <iomanip>
using namespace std;

void query(string question, string answer , string answer2)
{
	while (true)
	  {
	    string userinput;
	    cout << question;
	    getline(cin, userinput);

	    if (userinput == answer || userinput == answer2 )
	    {
	    	cout << "Correct!" << endl;
	    	cout << endl;
	    	break;
	    }
	    else
	    {
	    cout << "Incorrect!" << endl;
	    cout << endl;
	    break;
	    }
	  } 
}

int main()
{
	query("What is Colmens last name? ", "Tse", "tse");
	query("How many fingers does Colmen have? " ,"10", "ten");
	query("How old is Colmen ", "24", "twentyfour");

}