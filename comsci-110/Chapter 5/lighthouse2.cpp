/*Author : Colmen Tse
Compsci : 120
5.2 lighthouse2
*/

#include <iomanip> 
#include <iostream>
#include <cmath>
using namespace std; 

int main()
{
	double height;
	double distance;
	cout << "What is the height of the lighthouse in feet?";
	cin >> height;
	cin.ignore(1000,10);
	distance = sqrt(0.8 * height);
	
	//cout.setf(ios::fixed);
	cout.unsetf(ios::fixed|ios::showpoint);
	cout << "The " << height;
	cout << fixed;
	cout << setprecision(0);
	cout << " foot tall lighthouse can be seen from " << distance << " miles away" << endl;
}