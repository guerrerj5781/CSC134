/*
CSC134
M5LabA
GuerreroJ
11/10/2025
     Inlcude's all three exercises
*/

// ===== My Game Theme (notes) =====
// Theme: Survival Horror – Space (Alien, The 1979 Version, USCSS Nostromo, Weyland-Yutani)
// Health: Vitals (body status) + Psyche (stress tolerance)
// Ranks: Warrant Officer Grades (1–10)  (using level 1–10 for labs)
// Items: Flamethrower, Motion Tracker, Cattle Prod, EVA Suit, Emergency Beacon



#include <iostream>
#include <string>
#include <limits>
using namespace std;

// ----------------------------- Data -----------------------------
string crewName = "Ellen Ripley";   // Alien (The 1979 Version)
int    rankLvl  = 5;                // “level”
int    vitals   = 80,  maxVitals = 100;
int    psyche   = 60,  maxPsyche = 100;

const int NUM_ITEMS = 5;
string equipment[NUM_ITEMS] = {
    "Incinerator Unit",
    "Motion Tracker",
    "Cattle Prod",
    "EVA Suit",
    "Harpoon Grapple Gun"
};

// -------------------------- Utilities ---------------------------
string bar(int current, int maximum, int width = 20) {
    if (current < 0) current = 0;
    if (current > maximum) current = maximum;
    int filled = (maximum > 0) ? (current * width) / maximum : 0;
    return string(filled, '#') + string(width - filled, '.');
}

void pressEnter() {
    cout << "\n[ Awaiting user acknowledgment... ]";
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
}

// -------------------- Character Sheet (header) -------------------
void showCharacterSheet() {
    cout << "\n[ MU/TH/UR 6000 TERMINAL // ACCESS GRANTED ]\n";
    cout << "============================================\n";
    cout << "CREW MEMBER: " << crewName << "\n";
    cout << "RANK (GRADE): " << rankLvl << "\n";
    cout << "============================================\n";
    cout << "Vitals   [" << bar(vitals, maxVitals) << "] "
         << vitals << "/" << maxVitals << "\n";
    cout << "Psyche   [" << bar(psyche, maxPsyche) << "] "
         << psyche << "/" << maxPsyche << "\n";
    cout << "============================================\n";
    cout << "[ Personal Equipment Locker ]\n";
    for (int i = 0; i < NUM_ITEMS; ++i) {
        cout << "  • " << equipment[i] << "\n";
    }
    cout << "============================================\n";
}
