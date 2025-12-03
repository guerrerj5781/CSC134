/*
CSC 134
M6T1
GuerreroJ
12/03/2025
*/

#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

// Function declarations
void part1();
void part2();

int main() {
    cout << fixed << setprecision(2);

    cout << "=== M6T1: Car Counts at Construction Site ===\n\n";

    cout << "--- Part 1: Loop only (no arrays) ---\n";
    part1();

    cout << "\n------------------------------------------\n\n";

    cout << "--- Part 2: Loop with arrays + bar chart ---\n";
    part2();

    cout << "\nDone.\n";
    return 0;
}