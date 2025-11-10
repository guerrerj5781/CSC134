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
string crewName = "Ellen Ripley";   // Sigourney Weaver, Alien (1979)
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

