/* 
CSC 134
M5HW1 - Gold
GuerreroJ
11/16/2025
*/

#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

// Function prototypes
void averageRainfall();      // Question 1
void blockVolume();          // Question 2
void romanNumeral();         // Question 3
void geometryCalculator();   // Question 4
void distanceTraveled();     // Question 5

int main() {
    int choice;

    do {
        cout << "\n==============================\n";
        cout << "          M5HW1 MENU\n";
        cout << "==============================\n";
        cout << "1. Average Rainfall (Q1)\n";
        cout << "2. Block Volume (Q2)\n";
        cout << "3. Roman Numeral (Q3)\n";
        cout << "4. Geometry Calculator (Q4)\n";
        cout << "5. Distance Traveled (Q5)\n";
        cout << "6. Quit\n";
        cout << "Enter your choice (1-6): ";
        cin >> choice;

        switch (choice) {
            case 1:
                averageRainfall();
                break;
            case 2:
                blockVolume();
                break;
            case 3:
                romanNumeral();
                break;
            case 4:
                geometryCalculator();
                break;
            case 5:
                distanceTraveled();
                break;
            case 6:
                cout << "Exiting program. Goodbye!\n";
                break;
            default:
                cout << "The valid choices are 1 through 6.\n";
                break;
        }

    } while (choice != 6);

    return 0;
}

// -----------------------------------------
// Question 1 – Average Rainfall
// -----------------------------------------
void averageRainfall() {
    string month1, month2, month3;
    double rain1, rain2, rain3;

    cout << "\n=== Question 1: Average Rainfall ===\n";

    cout << "Enter month: ";
    cin >> month1;
    cout << "Enter rainfall for " << month1 << ": ";
    cin >> rain1;

    cout << "Enter month: ";
    cin >> month2;
    cout << "Enter rainfall for " << month2 << ": ";
    cin >> rain2;

    cout << "Enter month: ";
    cin >> month3;
    cout << "Enter rainfall for " << month3 << ": ";
    cin >> rain3;

    double average = (rain1 + rain2 + rain3) / 3.0;

    cout << fixed << setprecision(2);
    cout << "The average rainfall for " << month1 << ", "
         << month2 << ", and " << month3
         << " is " << average << " inches.\n";
}

// -----------------------------------------
// Question 2 – Volume of a Block
// -----------------------------------------
void blockVolume() {
    double length, width, height;

    cout << "\n=== Question 2: Volume of a Block ===\n";

    cout << "Enter the block's length: ";
    cin >> length;
    cout << "Enter the block's width: ";
    cin >> width;
    cout << "Enter the block's height: ";
    cin >> height;

    // Input Validation: no side can be zero or less
    if (length <= 0 || width <= 0 || height <= 0) {
        cout << "Error: All sides must be greater than zero.\n";
        return;
    }

    double volume = length * width * height;

    cout << fixed << setprecision(2);
    cout << "The volume of the block is " << volume << " cubic units.\n";
}

// -----------------------------------------
// Question 3 – Roman Numeral Converter
// -----------------------------------------
void romanNumeral() {
    int number;

    cout << "\n=== Question 3: Roman Numeral Converter ===\n";

    cout << "Enter a number (1 - 10): ";
    cin >> number;

    // Input Validation: 1–10
    if (number < 1 || number > 10) {
        cout << "Error: number must be between 1 and 10.\n";
        return;
    }

    string roman;

    switch (number) {
        case 1:  roman = "I";    break;
        case 2:  roman = "II";   break;
        case 3:  roman = "III";  break;
        case 4:  roman = "IV";   break;
        case 5:  roman = "V";    break;
        case 6:  roman = "VI";   break;
        case 7:  roman = "VII";  break;
        case 8:  roman = "VIII"; break;
        case 9:  roman = "IX";   break;
        case 10: roman = "X";    break;
    }

    cout << "The Roman numeral version of " << number
         << " is " << roman << ".\n";
}

// -----------------------------------------
// Question 4 – Geometry Calculator
// -----------------------------------------
void geometryCalculator() {
    const double PI = 3.14159;
    int choice;

    cout << "\n=== Question 4: Geometry Calculator ===\n";
    cout << "1. Calculate the Area of a Circle\n";
    cout << "2. Calculate the Area of a Rectangle\n";
    cout << "3. Calculate the Area of a Triangle\n";
    cout << "4. Quit (return to main menu)\n";
    cout << "Enter your choice (1-4): ";
    cin >> choice;

    cout << fixed << setprecision(2);

    if (choice == 1) {
        double radius;
        cout << "Enter the circle's radius: ";
        cin >> radius;

        if (radius < 0) {
            cout << "The radius cannot be less than zero.\n";
            return;
        }

        double area = PI * radius * radius;
        cout << "The area is " << area << endl;
    }
    else if (choice == 2) {
        double length, width;
        cout << "Enter the rectangle's length: ";
        cin >> length;
        cout << "Enter the rectangle's width: ";
        cin >> width;

        if (length < 0 || width < 0) {
            cout << "Length and width must be positive.\n";
            return;
        }

        double area = length * width;
        cout << "The area is " << area << endl;
    }
    else if (choice == 3) {
        double base, height;
        cout << "Enter the triangle's base: ";
        cin >> base;
        cout << "Enter the triangle's height: ";
        cin >> height;

        if (base < 0 || height < 0) {
            cout << "Only enter positive values for base and height.\n";
            return;
        }

        double area = base * height * 0.5;
        cout << "The area is " << area << endl;
    }
    else if (choice == 4) {
        cout << "Returning to main menu...\n";
    }
    else {
        cout << "The valid choices are 1 through 4. "
             << "Run the program again and select one of those.\n";
    }
}