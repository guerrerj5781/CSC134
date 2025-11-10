/*
CSC134
M5LabA
GuerreroJ
11/10/2025
     Inlcude's all three exercises
*/

// ===== Game Theme =====
// Theme: Deep-space survival (Alien, 1979 version)
// Health: Vitals (HP), Psyche (MP)(stress)
// Ranks: Crew Grades (1–10)
// Items: Incinerator, Motion Tracker, Cattle Prod, EVA Suit, Harpoon Grapple.


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

// -------------------- Character Sheet -------------------
void showCharacterSheet() {
    cout << "================================\n";
    cout << "CREW: " << crewName << "\n";
    cout << "RANK: " << rankLvl << "\n";
    cout << "================================\n";
    cout << "Vitals [" << bar(vitals, maxVitals) << "] "
         << vitals << "/" << maxVitals << "\n";
    cout << "Psyche [" << bar(psyche, maxPsyche) << "] "
         << psyche << "/" << maxPsyche << "\n";
    cout << "================================\n";
    cout << "EQUIPMENT:\n";
    for (int i = 0; i < NUM_ITEMS; ++i) {
        cout << "  " << (i + 1) << ". " << equipment[i] << "\n";
    }
    cout << "================================\n";
}

// ========================= EXERCISE 1 ===========================
// Title: Health Bar Animation (while loop) — “Rest to recover”
void exercise1_healthRegen() {
    cout << "\n[Exercise 1] Resting in med-bay to recover Vitals...\n";
    // start below max for the demo
    if (vitals >= maxVitals) vitals = maxVitals - 40;

    while (vitals < maxVitals) {
        vitals += 10;                          // progress toward exit
        if (vitals > maxVitals) vitals = maxVitals;
        cout << "Vitals [" << bar(vitals, maxVitals) << "] "
             << vitals << "/" << maxVitals << "\n";
    }
    cout << "Fully recovered.\n";
    // (Removed extra cin.ignore here to avoid double Enter)
    pressEnter();
}

// ========================= EXERCISE 2 ===========================
// Title: Level Up Stats (for loop) — “Promotion Projections”
void exercise2_levelUpStats() {
    cout << "\n[Exercise 2] Promotion projections (next 5 ranks)...\n";
    int baseGrit = 10; // a simple “strength-like” stat re-themed
    for (int lvl = 1; lvl <= 5; ++lvl) {
        int grit = baseGrit + (lvl * 2);
        cout << "Rank +" << lvl << ": GRIT = " << grit << "\n";
    }
    pressEnter();
}