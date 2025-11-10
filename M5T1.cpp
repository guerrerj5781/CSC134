/*
CSC 134
M5T1
GuerreroJ
11/10/2025
*/

#include <iostream>
#include <string>
using namespace std;

// function prototypes
string formatAnswer(int number);   // value-returning function
void printAnswer(string message);  // void function

int main() {

    int userNumber;
    string message;

    // ask user for a number
    cout << "Enter a number: ";
    cin >> userNumber;

    // call the value-returning function
    message = formatAnswer(userNumber);

    // call the void function to print the formatted message
    printAnswer(message);

    return 0;
}

// function creates & returns a formatted message that includes the number
string formatAnswer(int number) {
    string msg = "The number you entered is: ";
    msg += to_string(number);
    return msg;
}

// function displays the message
void printAnswer(string message) {
    cout << message << endl;
}