/*
Author : Colmen Tse
Compsci : 120
*/

#include <iostream>
#include <cmath>
#include <string>
using namespace std;

int main()
{
    
    int amtBorrowed = 270000;
    double interestRate =  .05125/12;
    double paybackPeriod = 30 * 12;
    double monthlyPay;
    
    monthlyPay = (amtBorrowed * (pow(1 + interestRate, paybackPeriod)) * interestRate) / ((pow(1 + interestRate, paybackPeriod)) -1);
    
    cout << "Amount borrowed: $" << amtBorrowed << endl;
    cout << "Annual interest rate: " << interestRate * 100 * 12  << " percent" << endl;
    cout << "Payback period: " << paybackPeriod / 12 << " years" << endl;
    cout << "Monthly payment: " << monthlyPay << " dollars" << endl;
    
}