/* 
M5LAB2
CSC 134
GuerreroJ
11/10/2025
*/

#include <iostream>
using namespace std;

// function prototypes 
double getLength();
double getWidth();
double getArea(double length, double width);
void displayData(double length, double width, double area);

int main()
{
    // variable declarations
    double length,   // rectangle's length
           width,    // rectangle's width
           area;     // rectangle's area

    // get the rectangle's length
    length = getLength();

    // get the rectangle's width
    width = getWidth();

    // calculate the area
    area = getArea(length, width);

    // display the rectangle's data
    displayData(length, width, area);

    return 0;
}

// getLength - ask user to enter the rectangle's length and returns it
double getLength()
{
    double length;
    cout << "Enter the rectangle's length: ";
    cin >> length;
    return length;
}

// getWidth - ask user to enter the rectangle's width and returns it
double getWidth()
{
    double width;
    cout << "Enter the rectangle's width: ";
    cin >> width;
    return width;
}

// getArea - calculates and returns the rectangle's area
double getArea(double length, double width)
{
    return length * width;
}

// displayData - displays the rectangle's data
void displayData(double length, double width, double area)
{
    cout << "\n--- Rectangle Data ---\n";
    cout << "Length: " << length << endl;
    cout << "Width : " << width << endl;
    cout << "Area  : " << area << endl;
}