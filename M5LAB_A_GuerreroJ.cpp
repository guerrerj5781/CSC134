/*
CSC134
M5LabA
GuerreroJ
11/10/2025
     Inlcude's all three exercises
*/

// ===== My Game Theme (notes) =====
// Theme: Survival Horror – Space (Alien, 1979, USCSS Nostromo, Weyland-Yutani)
// Health: Vitals (body status) + Psyche (stress tolerance)
// Ranks: Warrant Officer Grades (1–10)  (using level 1–10 for labs)
// Items: Flamethrower, Motion Tracker, Cattle Prod, EVA Suit, Emergency Beacon



#include <iostream>
#include <string>
#include <limits>
using namespace std;

// ----------------------------- Data -----------------------------
string crewName = "Ellen Ripley";   // Sigourney Weaver, Alien (1979)
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
