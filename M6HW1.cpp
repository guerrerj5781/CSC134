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
    cout << "Nacho Libre: Choose Your Own Adventure\n";
    cout << "======================================\n\n";

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

// Story functions

void intro() {
    cout << "You are Ignacio, the monastery cook.\n";
    cout << "The orphans are tired of weak, old beans.\n";
    cout << "You have a dream: become a Lucha Libre wrestler (\"Nachooooo!\")\n";
    cout << "and win prize money to buy better food for the orphans.\n\n";

    cout << "Tonight there is a big tournament in town.\n";
    cout << "To fight, you will need your secret identity, your legendary\n";
    cout << "STRETCHY PANTS, and the courage to sneak past the monks.\n\n";
    cout << "Find the stretchy pants, get through the arena gate, and\n";
    cout << "win the match to become a champion for the orphans!\n\n";
}

// Main hub room
void monastery_courtyard() {
    while (!game_over) {
        cout << "\n=== Monastery Courtyard ===\n";
        cout << "The moon shines over the old monastery. From here you can:\n";
        cout << "  1) Sneak into the KITCHEN.\n";
        cout << "  2) Slip out to the TOWN MARKET.\n";
        cout << "  3) Head toward the ARENA GATE.\n";
        cout << "  4) Give up and stay a humble cook.\n";

        int choice = get_choice(1, 4);

        if (choice == 1) {
            monastery_kitchen();
        } else if (choice == 2) {
            town_market();
        } else if (choice == 3) {
            arena_gate();
        } else {
            cout << "\nYou sigh and decide maybe wrestling is not your destiny.\n";
            cout << "The orphans will keep eating weak, old beans.\n";
            ending_run_away();
        }
    }
}

// Room 1: Kitchen (risk of getting caught)
void monastery_kitchen() {
    cout << "\n=== Monastery Kitchen ===\n";
    cout << "You slip into the dark kitchen. Pots, pans, and old beans\n";
    cout << "are everywhere. You hear a monk snoring in the next room.\n\n";

    cout << "  1) Make a secret snack to gain strength.\n";
    cout << "  2) Practice wrestling moves on a sack of beans.\n";
    cout << "  3) Sneak back to the courtyard.\n";

    int choice = get_choice(1, 3);

    if (choice == 1) {
        cout << "\nYou whip up a mysterious snack: eggs, beans, and a little bit\n";
        cout << "of eagle powers. You feel stronger and more confident.\n";
        cout << "You tiptoe back to the courtyard.\n";
    } else if (choice == 2) {
        cout << "\nYou leap at a sack of beans and practice your signature move.\n";
        cout << "The sack bursts. Beans explode everywhere!\n";
        cout << "A monk walks in, slips on beans, and stares at you.\n";
        ending_caught_by_monk();
    } else {
        cout << "\nYou decide not to push your luck and head back to the courtyard.\n";
    }
}

// Room 2: Market (this is where you can get the "key" – stretchy pants)
void town_market() {
    cout << "\n=== Town Market ===\n";
    cout << "Colorful stalls line the street. Musicians play, and vendors\n";
    cout << "shout about their goods.\n\n";

    cout << "  1) Visit the mysterious clothing stall.\n";
    cout << "  2) Buy some street corn and people-watch.\n";
    cout << "  3) Head back to the monastery courtyard.\n";

    int choice = get_choice(1, 3);

    if (choice == 1) {
        cout << "\nYou approach a stall covered in glittery capes and masks.\n";
        if (!has_pants) {
            cout << "A vendor whispers, \"I have the finest stretchy pants in all the land.\"\n";
            cout << "He hands you a pair of shiny blue stretchy pants.\n";
            cout << "They are perfect for a luchador.\n";
            has_pants = true;
            cout << "You tuck them under your robe and hurry away.\n";
        } else {
            cout << "The vendor smiles. \"You already have the best pants, amigo.\"\n";
        }
    } else if (choice == 2) {
        cout << "\nYou enjoy some delicious street corn.\n";
        cout << "It gives you courage, but mostly heartburn.\n";
        cout << "Still, you feel more ready to follow your dreams.\n";
    } else {
        cout << "\nYou slip back through the streets toward the monastery.\n";
    }
}

// Room 3: Arena gate (LOCK & KEY situation)
void arena_gate() {
    cout << "\n=== Arena Gate ===\n";
    cout << "You arrive at the back entrance of the wrestling arena.\n";
    cout << "A big guard blocks the way, arms crossed.\n\n";

    if (!has_pants) {
        cout << "The guard squints at your plain brown robe.\n";
        cout << "\"This is for luchadores only. Where are your stretchy pants, man?\"\n";
        cout << "You realize you can't enter the arena like this.\n";
        cout << "You will need to find proper wrestling gear first.\n";
        cout << "You head back toward the courtyard.\n";
        return;
    } else {
        cout << "You whisper, \"It is I, Nachooooo...\" and reveal your stretchy pants.\n";
        cout << "The guard nods respectfully.\n";
        cout << "  1) Enter the locker room to prepare for the match.\n";
        cout << "  2) Lose your nerve and run back to the courtyard.\n";

        int choice = get_choice(1, 2);

        if (choice == 1) {
            locker_room();
        } else {
            cout << "\nYour heart pounds as you run back into the night.\n";
            cout << "Maybe you're not ready for this... yet.\n";
        }
    }
}

// Room 4: Locker room (final branch before endings)
void locker_room() {
    cout << "\n=== Arena Locker Room ===\n";
    cout << "You step into a small room full of lockers, masks, and\n";
    cout << "the smell of sweat and victory.\n\n";

    cout << "You put on your mask and stretchy pants. The crowd roars outside.\n\n";

    cout << "  1) Charge into the ring with overconfident style.\n";
    cout << "  2) Focus, say a quick prayer for the orphans, then fight.\n";
    cout << "  3) Panic and sneak out the back door.\n";

    int choice = get_choice(1, 3);

    if (choice == 1) {
        ending_humiliated_in_ring();
    } else if (choice == 2) {
        ending_champion();
    } else {
        ending_run_away();
    }
}

// Endings

void ending_champion() {
    cout << "\n*** Ending: CHAMPION OF THE ORPHANS ***\n";
    cout << "You enter the ring with quiet determination.\n";
    cout << "The crowd chants, \"Nachooooo!\" as you dodge and dive.\n";
    cout << "With a final glorious flying move, you pin your opponent.\n";
    cout << "You win the prize money and buy delicious food for the orphans.\n";
    cout << "No more weak, old beans tonight!\n";
    game_over = true;
}

void ending_caught_by_monk() {
    cout << "\n*** Ending: CAUGHT BY THE MONK ***\n";
    cout << "The head monk glares at the bean-covered floor.\n";
    cout << "\"Ignacio, what is this nonsense?\" he asks.\n";
    cout << "You spend the rest of the night cleaning the kitchen\n";
    cout << "and are forbidden from leaving the monastery.\n";
    cout << "The tournament goes on without you.\n";
    game_over = true;
}

void ending_run_away() {
    cout << "\n*** Ending: THE ONE WHO RAN AWAY ***\n";
    cout << "You slip into the shadows, still just the cook.\n";
    cout << "Your heart wonders what might have happened if you had fought.\n";
    cout << "The orphans never know you almost became a luchador.\n";
    game_over = true;
}

void ending_humiliated_in_ring() {
    cout << "\n*** Ending: HUMILIATED IN THE RING ***\n";
    cout << "You burst into the ring shouting, \"Get that corn outta my face!\"\n";
    cout << "You try a big flying move, but trip on your own stretchy pants.\n";
    cout << "The crowd gasps, then laughs. You lose in the first ten seconds.\n";
    cout << "At least the orphans think it was pretty funny.\n";
    game_over = true;
}