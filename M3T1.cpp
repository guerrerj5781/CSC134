/*
CSC 134
M3T1 
Jeremy Guerrero
October 10th, 2025
*/

#include <iostream>
using namespace std;

int main() {

    // Input variables
    double len1, wid1, len2, wid2; 
    double area1, area2;

    // Ask user for the length and width
    cout << "What's the length of the first rectangle? ";
    cin >> len1;
    cout << "What's the width of the first rectangle? ";
    cin >> wid1;
    cout << "What's the length of the second rectangle? ";
    cin >> len2;
    cout << "What's the width of the second rectangle? ";
    cin >> wid2;

    // Calculate the area of each rectangle using the formula: area = length * width
    area1 = len1 * wid1;
    area2 = len2 * wid2;



    return 0; // no errors
}