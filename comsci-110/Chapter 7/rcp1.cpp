/*
Author : Colmen Tse
Compsci : 110
7.8 rcp1.cpp
*/

#include <string>
#include <ctime>
#include <cstdlib>
#include <iostream> 
using namespace std; 

int main() 
{
	srand(time(0));
	int computerrock = 1;
	int computerpaper = 2;
	int computerscissors = 3;
	int computerrand;
	int playerwins = 0;
	int computerwins = 0;

	computerrand = 1 + (rand() % 4);
	if (computerrand == computerrock) 
	 {
	 	computerrand = 
	 }