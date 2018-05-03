/*
Author : Colmen Tse
Compsci : 110
8.2 myAddition.cpp
*/

#include <iostream> 
using namespace std; 
  
void additionProblem(int topNumber, int bottomNumber) 
{ 
  int userAnswer; 
  cout << "\n\n\n      " << topNumber << " + " << bottomNumber << " = "; 
  cin >> userAnswer; 
  cin.ignore(1000, 10); 
  
  int theAnswer = topNumber + bottomNumber; 
  if (theAnswer == userAnswer) 
    cout << "      Correct!" << endl; 
  else 
    cout << "      Very good, but a better answer is " << theAnswer << endl; 

} // additionProblem 
  
int main() 
{ 
  srand(time(0));
  for (int i = 0; i < 5; i++)
  {
      int n1 = rand() % 10;
      int n2 = rand() % 10;
      additionProblem(n1, n2);
  } 

} // main 