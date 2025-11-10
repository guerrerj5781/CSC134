/*
CSC 134
M5LAB1
GuerreroJ
11/10/2025
*/

#include <iostream>
using namespace std;

// Function Prototypes
void main_menu();
void choice_escape_yard();
void choice_sniff_trash();
void choice_dig_under_fence();
void choice_return_inside();
void choice_sneak_through_door();
void choice_climb_through_window();
void choice_hide_in_bedroom();
void choice_get_caught();

int main() {
    cout << "M5LAB1 - Choose Your Own Adventure" << endl;
    main_menu();
    cout << "Thanks for playing!" << endl;
    return 0;
}

void main_menu() {
    int choice;

    cout << "\nMain Menu" << endl;
    cout << "You are a dog who has escaped the backyard!" << endl;
    cout << "What do you do first?" << endl;
    cout << "1. Sniff around the trash cans" << endl;
    cout << "2. Try to dig back under the fence" << endl;
    cout << "3. Sneak around to the front door" << endl;
    cout << "4. [Quit]" << endl;
    cout << "Choose: ";
    cin >> choice;

    if (choice == 1) {
        choice_sniff_trash();
    } else if (choice == 2) {
        choice_dig_under_fence();
    } else if (choice == 3) {
        choice_return_inside();
    } else if (choice == 4) {
        cout << "Okay, quitting game." << endl;
        return;
    } else {
        cout << "Invalid choice. Please try again." << endl;
        cin.clear();
        cin.ignore(10000, '\n');
        main_menu();
    }
}

// STORY FUNCTIONS

void choice_sniff_trash() {
    int choice;
    cout << "\nYou run to the trash cans and start sniffing around..." << endl;
    cout << "Suddenly, the neighbor yells at you to stop making a mess!" << endl;
    cout << "Do you:" << endl;
    cout << "1. Run back to your yard" << endl;
    cout << "2. Keep eating trash anyway" << endl;
    cout << "Choose: ";
    cin >> choice;

    if (choice == 1) {
        main_menu();
    } else if (choice == 2) {
        cout << "You get caught and have to go inside for a bath. Game Over." << endl;
        choice_get_caught();
    } else {
        cout << "Invalid choice. Try again." << endl;
        choice_sniff_trash();
    }
}

void choice_dig_under_fence() {
    int choice;
    cout << "\nYou scratch at the dirt under the fence..." << endl;
    cout << "It's slow work, but you're getting through." << endl;
    cout << "Do you:" << endl;
    cout << "1. Keep digging" << endl;
    cout << "2. Sneak around to the front door instead" << endl;
    cout << "Choose: ";
    cin >> choice;

    if (choice == 1) {
        cout << "You dig your way back inside the yard safely! Good dog!" << endl;
    } else if (choice == 2) {
        choice_return_inside();
    } else {
        cout << "Invalid choice. Try again." << endl;
        choice_dig_under_fence();
    }
}

