/*
CSC 134
M2T2 - Receipt Calculator
Jeremy Guerrero
September 27th, 2025
*/

#include <iostream>
#include <iomanip>  // for 2 decimal places trick
using namespace std;

int main() {
    
    string item = "🥔 Potato";
    double item_price = 5.99;
    double tax_percent = 0.08;
    double tax_amount;
    double total;

    cout << "Welcome to our Potato Restaurant!" << endl;
    cout << "You ordered one " << item << "." << endl;

    tax_amount = item_price * tax_percent;
    total = item_price + tax_amount;

    cout << setprecision(2) << fixed;
    cout << total << endl;

    return 0;
}