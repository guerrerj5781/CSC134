/* 
M5LAB2
CSC 134
GuerreroJ
11/10/2025
*/

#include <iostream>
using namespace std;

// Function prototypes
double getLength();
double getWidth();
double getArea(double length, double width);
void displayData(double length, double width, double area);

int main()
{
    // Variable declarations
    double length,   // The rectangle's length
           width,    // The rectangle's width
           area;     // The rectangle's area

    // Get the rectangle's length
    length = getLength();

    // Get the rectangle's width
    width = getWidth();
