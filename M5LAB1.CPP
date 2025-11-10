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

