/*
CSC134
M5LabA
GuerreroJ
11/10/2025
     Inlcude's all three exercises
*/

// ===== Game Theme =====
// Theme: Deep-space survival (Alien, 1979)
// Health: Vitals (HP), Psyche (stress)
// Ranks: Crew Grades / USCSS ranks (1–10)
// Items: M41A Pulse Rifle, Motion Tracker, Incinerator, Access Tuner, Company ID


#include <iostream>
#include <string>
#include <limits>
using namespace std;

// ----------------------------- Data -----------------------------
string crewName = "Ellen Ripley";
int    rankLvl  = 5;                // like “level”
int    vitals   = 80,  maxVitals = 100;  // HP
int    psyche   = 60,  maxPsyche = 100;  // MP equivalent

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
    cout << "\n<Press Enter to continue>";
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
}
