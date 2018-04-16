/*
Author : Colmen Tse
Compsci : 120
5.1 mortgageCalculator2
*/


#include <iostream>
#include <cmath>
#include <string>
#include <iomanip>
using namespace std;

int main()
{
    
    int amtBorrowed;
    double interestRate;
    double paybackPeriod = 30 * 12;
    double monthlyPay;
    
    cout << "How much money are you going to borrow? ";
    cin >> amtBorrowed;
    cin.ignore (1000,10);

    cout << "What is your interest rate? ";
    cin >> interestRate;
    cin.ignore (1000,10);
    interestRate = interestRate / 100;
    interestRate = interestRate / 12;

    monthlyPay = (amtBorrowed * (pow(1 + interestRate, paybackPeriod)) * interestRate) / ((pow(1 + interestRate, paybackPeriod)) -1);
    
    cout << "Amount borrowed: $" << amtBorrowed << endl;
    cout.unsetf(ios::fixed|ios::showpoint);
    cout << "Annual interest rate: " << interestRate 100 * 12 << " percent" << endl;
    cout << "Payback period: " << paybackPeriod / 12 << " years" << endl;
    cout << "Monthly payment: " << monthlyPay << " dollars" << endl;
    
}