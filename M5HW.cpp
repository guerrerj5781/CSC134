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
        cout << "\n=============================\n";
        cout << "         M5HW1 MENU\n";
        cout << "=============================\n";
        cout << "1. Average Rainfall (Q1)\n";
        cout << "2. Block Volume (Q2)\n";
        cout << "3. Roman Numeral (Q3)\n";
        cout << "4. Geometry Calculator (Q4)\n";
        cout << "5. Distance Traveled (Q5)\n";
        cout << "6. Quit\n";
        cout << "Enter your choice (1-6): ";
        cin >> choice;

