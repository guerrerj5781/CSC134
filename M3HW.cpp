/*
CSC 134
M3HW1 - Gold
GuerreroJ
10/18/25
*/

#include <iostream>   // For cin and cout
#include <iomanip>    // For setw and setprecision
#include <string>     // For string type
#include <cstdlib>    // For rand() and srand()
#include <ctime>      // For time()
using namespace std;

// I learned defining this constant in the beginning shortens the line visually
const string DIVIDER = "----------------------------------------------";

int main()
{
    // Question 1: Simple Chat Bot
    cout << "\n=== Question 1: Simple Chat Bot ===\n";

    // Ask for input
    cout << "Hello, I'm a C++ program!" << endl;
    cout << "Do you like me? Please type yes or no." << endl;

    string user_response;
    cin >> user_response;

    // Converts to lowercase to help with simple matching
    for (char &ch : user_response)
        ch = tolower(ch);

    // Respond based on input
    if (user_response == "yes")
    {
        cout << "That's great! I'm sure we'll get along.\n";
    }
    else if (user_response == "no")
    {
        cout << "Well, maybe you'll learn to like me later.\n";
    }
    else
    {
        cout << "If you're not sure... that's OK.\n";
    }

    cout << DIVIDER << endl;


    
    return 0;
}