/*
CSC 134
M3LAB2 - Number Grade to Letter Grade Conversion Program
Jeremy Guerrero
October 10th, 2025
*/

#include <iostream>
using namespace std;

int main() {

    // Declare variables
    int grade;          // stores the users input grade
    char letterGrade;   // stores the calculated letter grade

    // Ask user for input
    cout << "Enter your numerical grade: ";
    cin >> grade;

    // Validate input using boolean logic
    // Checks if grade is outside 0–100 range
    if (grade < 0 || grade > 100) {
        cout << "Invalid grade. Please enter a number between 0 and 100." << endl;
        return 1; // exits program early
    }

    // Determine letter grade using logical AND (&&) and ELSE IF structure
    if (grade >= 90 && grade <= 100) {
        letterGrade = 'A';
    }
    else if (grade >= 80 && grade <= 89) {
        letterGrade = 'B';
    }
    

    // Display result
    cout << "Your letter grade is: " << letterGrade << endl;

    // End of program  
    return 0;  
}