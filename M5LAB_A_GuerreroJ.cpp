/*
CSC134
M5LabA
GuerreroJ
11/10/2025
Notes: Inlcude's all three exercises. Addtionally, see repo for prompts.txt file
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

// ========================= EXERCISE 3 ===========================
// Title: Inventory System (arrays + loops + search)
void exercise3_inventorySystem() {
    cout << "\n[Exercise 3] Bag inventory and search:\n";
    cout << "=== CURRENT LOADOUT ===\n";
    for (int i = 0; i < NUM_ITEMS; ++i) {
        cout << (i + 1) << ". " << equipment[i] << "\n";
    }

    cout << "\nType item to search (exact match): ";
    // consume leftover newline from previous >> read
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
    string query;
    getline(cin, query);

    bool found = false;
    int slot = -1;

    for (int i = 0; i < NUM_ITEMS; ++i) {
        if (equipment[i] == query) {
            found = true;
            slot = i;
            break; // stop at first match
        }
    }

    if (found) {
        cout << "Found \"" << query << "\" at slot " << (slot + 1) << ".\n";
    } else {
        cout << "\"" << query << "\" not found in equipment.\n";
    }
    pressEnter();
}

// ============================= MAIN =============================
int main() {
    // Intro / character sheet like the lab challenge
    showCharacterSheet();

    // Simple menu to run any of the three exercises
    while (true) {
        cout << "\n╔════════ NOSTROMO TERMINAL ════════╗\n";
        cout <<   "║ 1) Exercise 1: Recover Vitals     ║\n";
        cout <<   "║ 2) Exercise 2: Level-Up Preview   ║\n";
        cout <<   "║ 3) Exercise 3: Inventory Search   ║\n";
        cout <<   "║ 4) Show Character Sheet           ║\n";
        cout <<   "║ 5) Exit                           ║\n";
        cout <<   "╚═══════════════════════════════════╝\n";
        cout << "Enter choice (1-5): ";

        int choice;
        if (!(cin >> choice)) {
            cout << "Invalid input.\n";
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            continue;
        }

        switch (choice) {
            case 1: exercise1_healthRegen();     break;
            case 2: exercise2_levelUpStats();    break;
            case 3: exercise3_inventorySystem(); break;
            case 4: showCharacterSheet();        break;
            case 5:
                cout << "Terminal closing… stay frosty, Ripley.\n";
                return 0;
            default:
                cout << "Choose 1–5.\n";
        }
    }
}