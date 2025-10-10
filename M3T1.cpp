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

    // Print the area of both rectangles
    cout << "The area of the first rectangle is: " << area1 << endl;
    cout << "The area of the second rectangle is: " << area2 << endl;

    // Compare which rectangle is larger
    // Added code that determines which rectangle has a larger area and by how much
    if (area1 > area2) {
        cout << "The first rectangle is larger by " << area1 - area2 << " square units." << endl;
    }
    else if (area2 > area1) {
        cout << "The second rectangle is larger by " << area2 - area1 << " square units." << endl;
    }
    else {
        cout << "Both rectangles have the same area." << endl;
    }


    return 0; // no errors
}