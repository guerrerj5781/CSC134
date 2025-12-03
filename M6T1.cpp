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

// Part 1: loop, no arrays
void part1() {
    const int NUM_DAYS = 5;
    string dayNames[NUM_DAYS] = { "Monday", "Tuesday", "Wednesday", "Thursday", "Friday" };

    int totalCars = 0;

    cout << "Enter the number of cars that passed the site each day (Mon–Fri).\n";

    for (int day = 0; day < NUM_DAYS; day++) {
        int carsToday;

        cout << "Cars on " << dayNames[day] << ": ";
        cin >> carsToday;

        // simple input check – don’t allow negative counts
        while (carsToday < 0) {
            cout << "Cars can’t be negative. Re-enter for "
                 << dayNames[day] << ": ";
            cin >> carsToday;
        }

        totalCars += carsToday;
    }

    double average = static_cast<double>(totalCars) / NUM_DAYS;

    cout << "\nTotal cars for the week: " << totalCars << endl;
    cout << "Average per day:        " << average << endl;
}

// Part 2: loop + arrays + ASCII bar chart
void part2() {
    const int NUM_DAYS = 5;
    string daysShort[NUM_DAYS] = { "Mon", "Tue", "Wed", "Thu", "Fri" };
    string daysLong[NUM_DAYS]  = { "Monday", "Tuesday", "Wednesday", "Thursday", "Friday" };

    int cars[NUM_DAYS];
    int totalCars = 0;

    cout << "Enter the number of cars for each day again.\n";

    // store each day’s value in the array
    for (int i = 0; i < NUM_DAYS; i++) {
        cout << "Cars on " << daysLong[i] << ": ";
        cin >> cars[i];

        while (cars[i] < 0) {
            cout << "Cars can’t be negative. Re-enter for "
                 << daysLong[i] << ": ";
            cin >> cars[i];
        }

        totalCars += cars[i];
    }

        double average = static_cast<double>(totalCars) / NUM_DAYS;

    // print table of values
    cout << "\nDay\tCars\n";
    cout << "-----------------\n";
    for (int i = 0; i < NUM_DAYS; i++) {
        cout << daysShort[i] << "\t" << cars[i] << endl;
    }

    cout << "\nTotal cars for the week: " << totalCars << endl;
    cout << "Average per day:        " << average << endl;

    // ASCII bar chart – each # represents 10 cars
    cout << "\nCar Counts Bar Chart (each # ≈ 10 cars)\n";
    cout << "---------------------------------------\n";

    for (int i = 0; i < NUM_DAYS; i++) {
        cout << setw(3) << daysShort[i] << " | ";

        int numHashes = cars[i] / 10;      // scale
        if (numHashes == 0 && cars[i] > 0) // show at least 1 if there were cars
            numHashes = 1;

        for (int j = 0; j < numHashes; j++) {
            cout << "#";
        }

        cout << " (" << cars[i] << ")\n";
    }
} 