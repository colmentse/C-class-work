/*
Author : Colmen Tse
Compsci : 120
7.2 countdownTimer.cpp
*/

#include <iomanip> 
#include <iostream> 
using namespace std;
 
#ifdef _WIN32 
#include <windows.h> 
#else 
#include <unistd.h> 
#endif 
  
int main() 
{ 
  cout << "CTRL-C to exit...\n"; 
  cout.fill('0'); 
  
      for (int sec = 10; sec > -1; sec--) 
      { 
        cout << setw(0) << sec << ' '; 
        cout.flush(); 
  
        #ifdef _WIN32 
        Sleep(1000); // one thousand milliseconds
        #else 
        sleep(1); // one second 
        #endif 
        if (sec != 0)
          cout << '\r';
        else
          cout << "blast off!" << endl;
      } 
    } 
