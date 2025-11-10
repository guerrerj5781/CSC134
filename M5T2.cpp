/*
CSC 134
M5T2
GuerreroJ
11/10/2025
*/

#include <iostream>
using namespace std;

// value-returning function: returns the square of a number
int square(int number) {
    return number * number;
}

// void function ---> prints one formatted result line
void printAnswerLine(int number, int result) {
    cout << number << " squared = " << result << endl;
}

int main() {

    int count = 1;
    int result;

    // loop from 1 to 10
    while (count <= 10) {
        result = square(count);          // call value-returning function
        printAnswerLine(count, result);  // call void function
        count++;
    }

    return 0;
}