/*
CSC 134
M6HW1 - Gold
GuerreroJ
12/8/2025
*/

#include <iostream>
using namespace std;

// Game state
bool has_pants = false;    // "Key": stretchy pants
bool game_over = false;    // track when an ending happens

// Function prototypes
int get_choice(int min, int max);

void intro();
void monastery_courtyard();  // Main hub "room"

void monastery_kitchen();
void town_market();
void arena_gate();
void locker_room();

void ending_champion();
void ending_caught_by_monk();
void ending_run_away();
void ending_humiliated_in_ring();

int main() {
    cout << "M6HW1 - Nacho Libre: Choose Your Own Adventure Prototype\n";
    cout << "========================================================\n\n";

    intro();
    monastery_courtyard();

    cout << "\nThanks for playing!\n";
    return 0;
}


// Safely get a choice between min and max
int get_choice(int min, int max) {
    int choice;

    while (true) {
        cout << "Choose (" << min << "-" << max << "): ";
        cin >> choice;

        if (!cin) {
            cin.clear();
            cin.ignore(10000, '\n');
            cout << "Please enter a number.\n";
            continue;
        }

        if (choice < min || choice > max) {
            cout << "That is not a valid option.\n";
        } else {
            return choice;
        }
    }
}

