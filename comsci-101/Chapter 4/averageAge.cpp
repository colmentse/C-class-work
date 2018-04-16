/*
Author : Colmen Tse
Compsci : 120
*/

#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
 	int age1 = 19;
	int age2 = 21;
	int age3 = 30;
	double averageage;
    averageage = age1 + age2 + age3;
    averageage = averageage / 3;

    cout.setf(ios::fixed|ios::showpoint);
    cout << setprecision(2);
   	cout << "The average of three ages is  " << averageage << endl;
}
