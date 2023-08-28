// Emata.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <Windows.h>
int main()
{
    HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
    int greenColor = 2;
    SetConsoleTextAttribute(hConsole, greenColor);
    std::cout << R"(


       _______
     _/       \_
    / |       | \
   /  |__   __|  \
  |__/((o| |o))\__|
  |      | |      |                  __      __       .__.                                
  |\     |_|     /|                 /  \    /  \ ____ |  |   ____  ____   _____   ____   
  | \           / |                 \   \/\/   // __ \|  | _/ ___\/  _ \ /     \_/ __ \  
   \| /  ___  \ |/                   \        /\  ___/|  |_\  \__(  <_> )  Y Y  \  ___/  
    \ | / _ \ | /                     \__/\  /  \___  >____/\___  >____/|__|_|  /\___  > 
     \_________/                           \/       \/          \/            \/     \/    
      _|_____|_
 ____|_________|____
/                   \  -- Kap Nino
   
Kap balita ko patay ka na raw
     




)" << '\n';

}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
