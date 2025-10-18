/*
CSC 134
M4T1
GuerreroJ
10/18/2025
*/

#include <iostream>
using namespace std;

int main() {

    // Program 5-3
    // Using a simple while loop

    int number = 5;   // total number of times to print "Hello"
    int i = 0;        // loop counter starts at zero

    while (i < number) {
        cout << "Hello" << endl;     // output message

        i++;
    }

    cout << "That's all!" << endl;   // printed once after loop ends

    return 0;
}