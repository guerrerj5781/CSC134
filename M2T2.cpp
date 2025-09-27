/*
CSC 134
M2T2 - Receipt Calculator
Jeremy Guerrero
September 27th, 2025
*/

#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    
    string item = "🥔 Potato";
    double item_price = 5.99;
    double tax_percent = 0.08;
    double tax_amount;
    double total;

    cout << "Welcome to our Spud Farm!" << endl;
    cout << "You ordered one " << item << "." << endl;

    tax_amount = item_price * tax_percent;
    total = item_price + tax_amount;

    cout << setprecision(2) << fixed;
    cout << "Thank you for shopping with us" << endl;
    cout << "------------------------------" << endl;
    cout << item << "\t$" << item_price      << endl;
    cout << "Tax" << "\t\t$" << tax_amount   << endl;
    cout << "------------------------------" << endl; 
    cout << "Total" << "\t\t$" << total << endl;
    cout << total << endl;

    return 0;
}