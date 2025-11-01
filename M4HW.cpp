/*
CSC 134
M4HW - Gold Level
GuerreroJ
11/1/25
*/

// Program prints a multiplication table for any number between 1 & 12.


#include <iostream>
using namespace std;

int main() {
    int number;  // User's chosen number
    int i = 1;   // Counter variable

    // Ask until valid input
    cout << "Enter a number from 1 to 12: ";
    cin >> number;

    while (number < 1 || number > 12) {
        cout << "Invalid input. Please enter a number between 1 and 12: ";
        cin >> number;
    }
    
    // Print the times table
    while (i <= 12) {
        cout << number << " times " << i << " is " << number * i << "." << endl;
        i++;
    }

    return 0;
}