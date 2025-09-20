// CSC 134
// M2T1 - Product Sales
// Jeremy Guerrero
// September 20th, 2025
// "Checkout" Machine

#include <iostream>
#include <iomanip>
using namespace std;


int main() {

    string first_name, last_name, full_name;
    string product = "apples";
    int amount_purchased;
    double cost_each = 0.99; 
    double total_cost; 


    cout << "Welcome to our " << product << " store!" << endl;
    cout << "What's your first name? ";
    cin >> first_name; 
    cout << "What's your last name? ";
    cin >> last_name;
    full_name = first_name + " " + last_name; 
    cout << "Nice to meet you, " << full_name << endl;

    cout << "How many " << product << " would you like today? ";
    cin >> amount_purchased;

    total_cost = amount_purchased * cost_each;

    cout << setprecision(2) << fixed; 

    cout << "For " << amount_purchased << " " << product << endl;
    cout << "That will be: $" << total_cost << endl;
    cout << "Thank you for shopping with us!" << endl;

    return 0;
}
