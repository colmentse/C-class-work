//Author : Colmen Tse
//Compsci : 120


#include <iomanip> 
#include <iostream>
#include <cmath>
using namespace std; 

int main()
{
	int height;
	double distance;
	cout << "What is the height of the lighthouse in feet?" << endl;
	cin >> height;
	cin.ignore(1000,10);
	distance = sqrt(0.8 * height);
	
	//cout.setf(ios::fixed);
	cout << fixed;
	cout << setprecision(0);
	cout << "The " << height << " foot tall lighthouse can be seen from " << distance << " miles away" << endl;



}