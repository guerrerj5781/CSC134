/*
CSC 134
M2HW1 - GOLD
GuerreroJ
October 4th, 2025
*/

#include <iostream>
#include <iomanip>
#include <string>
#include <cstdlib>
#include <ctime>
#include <limits>
using namespace std;

int main() {
    cout << fixed << setprecision(2);  // format money to 2 decimals

    cout << "\n===== Question 1: Banking Transactions =====\n";
    string name;
    double startBal{}, deposit{}, withdrawal{};
    cout << "Enter account holder name: ";
    getline(cin, name);
    cout << "Enter starting balance: $";
    cin >> startBal;
    cout << "Enter deposit amount: $";
    cin >> deposit;
    cout << "Enter withdrawal amount: $";
    cin >> withdrawal;

    srand(static_cast<unsigned>(time(nullptr)));
    int accountNumber = 100000 + rand() % 900000;
    double finalBal = startBal + deposit - withdrawal;

    cout << "\n--- Account Summary ---\n";
    cout << "Name: " << name << '\n';
    cout << "Account Number: " << accountNumber << '\n';
    cout << "Final Balance: $" << finalBal << '\n';

    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    cout << "\n===== Question 2: General Crates =====\n";

    const double COST_PER_CUFT   = 0.30;
    const double CHARGE_PER_CUFT = 0.52;

    double length{}, width{}, height{};
    cout << "Enter crate length (ft): ";
    cin  >> length;
    cout << "Enter crate width  (ft): ";
    cin  >> width;
    cout << "Enter crate height (ft): ";
    cin  >> height;

    double volume = length * width * height;
    double cost   = volume * COST_PER_CUFT;
    double charge = volume * CHARGE_PER_CUFT;
    double profit = charge - cost;

    cout << "\n--- General Crates Report ---\n";
    cout << "Volume: " << volume << " cubic feet\n";
    cout << "Cost:   $" << cost   << '\n';
    cout << "Charge: $" << charge << '\n';
    cout << "Profit: $" << profit << '\n';

    return 0;
}