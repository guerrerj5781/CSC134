/*
CSC 134
M6BONUS1
GuerreroJ
12/6/2025
*/

#include <iostream>
#include <string>
#include <vector>
#include <map>
using namespace std;

// Direction constants (enum)
enum Direction {
    NORTH = 0,
    EAST  = 1,
    SOUTH = 2,
    WEST  = 3,
    NUM_DIRECTIONS = 4
};

const string DIRECTION_NAMES[NUM_DIRECTIONS] = {
    "north", "east", "south", "west"
};

// Room constants (enum)
enum Room {
    TOWN_SQUARE = 0,
    TOY_WORKSHOP,
    COOKIE_BAKERY,
    REINDEER_STABLES,
    SLEIGH_GARAGE,
    NUM_ROOMS
};

// parallel arrays for room data
string roomNames[NUM_ROOMS] = {
    "Snowy Town Square",
    "Toy Workshop",
    "Cookie Bakery",
    "Reindeer Stables",
    "Sleigh Garage"
};

string roomDescriptions[NUM_ROOMS] = {
    "Twinkling lights hang from candy-cane lampposts. A giant Christmas tree glows in the center of the square.",
    "Elves rush around wooden tables, hammering, painting, and wrapping gifts in shimmering paper.",
    "The smell of gingerbread and peppermint fills the air as trays of fresh cookies cool on the counter.",
    "Reindeer snort gently and jingle their harness bells, ready to practice for the big night.",
    "Santa's sleigh rests here, polished and waiting. A special lock gleams near the driver's seat."
};

// Adjacency list
int connections[NUM_ROOMS][NUM_DIRECTIONS] = {
    // From TOWN_SQUARE
    { TOY_WORKSHOP, COOKIE_BAKERY, REINDEER_STABLES, SLEIGH_GARAGE },
    // From TOY_WORKSHOP
    { -1,          -1,            TOWN_SQUARE,      -1            },
    // From COOKIE_BAKERY
    { -1,          -1,            -1,               TOWN_SQUARE   },
    // From REINDEER_STABLES
    { TOWN_SQUARE, -1,            -1,               -1            },
    // From SLEIGH_GARAGE
    { -1,          TOWN_SQUARE,   -1,               -1            }
};

// Items in each room (parallel arrays again)
string roomItems[NUM_ROOMS] = {
    "a shining glass ornament shaped like a snowflake",
    "a sack of unfinished wooden toys",
    "a plate of warm gingerbread cookies",
    "a jingling silver harness bell",
    "Santa's engraved sleigh key"
};

bool itemTaken[NUM_ROOMS] = { false, false, false, false, false };

// Simple inventory using arrays (no vectors)
const int MAX_INVENTORY = 10;
string inventoryArr[MAX_INVENTORY];
int inventoryCount = 0;

// Special flag for winning condition
bool hasSleighKey = false;

int main() {
    cout << "Welcome to Christmas Village!\n";
    cout << "Your goal: explore the village, find Santa's sleigh key, "
         << "and launch the sleigh in time for Christmas Eve.\n\n";

    cout << "Commands:\n";
    cout << "  north/south/east/west or n/s/e/w - move (lowercase)\n";
    cout << "  take       - pick up the item in the room\n";
    cout << "  inventory  - see what you're carrying\n";
    cout << "  look       - reprint the room description\n";
    cout << "  launch     - try to launch Santa's sleigh (in the Sleigh Garage)\n";
    cout << "  quit       - end the game\n\n";

    int currentRoom = TOWN_SQUARE;
    bool running = true;

    while (running) {
        // Show room info
        cout << "\nYou are in the " << roomNames[currentRoom] << ".\n";
        cout << roomDescriptions[currentRoom] << "\n";

        if (!itemTaken[currentRoom] && !roomItems[currentRoom].empty()) {
            cout << "You see " << roomItems[currentRoom] << " here.\n";
        }

        // Show exits
        cout << "Exits: ";
        bool hasExit = false;
        for (int d = 0; d < NUM_DIRECTIONS; d++) {
            if (connections[currentRoom][d] != -1) {
                cout << DIRECTION_NAMES[d] << " ";
                hasExit = true;
            }
        }
        if (!hasExit) {
            cout << "(none)";
        }
        cout << "\n";

        // Get player command
        cout << "\nWhat do you do? > ";
        string command;
        getline(cin, command);

        // Short direction aliases (lowercase only)
        if (command == "n") command = "north";
        if (command == "e") command = "east";
        if (command == "s") command = "south";
        if (command == "w") command = "west";

        if (command.empty()) {
            continue;
        }

        // Movement handling
        bool handled = false;
        for (int d = 0; d < NUM_DIRECTIONS; d++) {
            if (command == DIRECTION_NAMES[d]) {
                if (connections[currentRoom][d] != -1) {
                    currentRoom = connections[currentRoom][d];
                } else {
                    cout << "You can't go that way.\n";
                }
                handled = true;
                break;
            }
        }
        if (handled) continue;

        // Take item
        if (command == "take") {
            if (!itemTaken[currentRoom] && !roomItems[currentRoom].empty()) {
                if (inventoryCount < MAX_INVENTORY) {
                    cout << "You carefully pick up " << roomItems[currentRoom] << ".\n";
                    inventoryArr[inventoryCount++] = roomItems[currentRoom];
                    itemTaken[currentRoom] = true;

                    if (currentRoom == SLEIGH_GARAGE) {
                        hasSleighKey = true;
                        cout << "This must be Santa's sleigh key! "
                             << "Maybe you can 'launch' the sleigh now.\n";
                    }
                } else {
                    cout << "Your pockets and pack are full! You can't carry any more.\n";
                }
            } else {
                cout << "There is nothing new to take here.\n";
            }
            continue;
        }

        // Inventory
        if (command == "inventory") {
            cout << "\nYou are carrying:\n";
            if (inventoryCount == 0) {
                cout << "  (nothing yet)\n";
            } else {
                for (int i = 0; i < inventoryCount; i++) {
                    cout << "  - " << inventoryArr[i] << "\n";
                }
            }
            continue;
        }

        // Look (repeat description)
        if (command == "look") {
            cout << "\nYou take a moment to look around again.\n";
            cout << roomDescriptions[currentRoom] << "\n";
            if (!itemTaken[currentRoom] && !roomItems[currentRoom].empty()) {
                cout << "You notice " << roomItems[currentRoom] << " nearby.\n";
            }
            continue;
        }

        // Launch the sleigh (win condition)
        if (command == "launch") {
            if (currentRoom == SLEIGH_GARAGE && hasSleighKey) {
                cout << "\nYou slide the engraved key into the lock and turn it.\n";
                cout << "The sleigh lights up with golden magic as reindeer line up in front.\n";
                cout << "With a jingle of bells, you and Santa launch into the starry Christmas Eve sky!\n";
                cout << "You saved Christmas! Congratulations!\n";
                running = false;
            } else if (currentRoom != SLEIGH_GARAGE) {
                cout << "You look around. There's nothing here to launch.\n";
            } else {
                cout << "The sleigh won't start. You must need Santa's special key.\n";
            }
            continue;
        }

        // Quit
        if (command == "quit" || command == "q") {
            cout << "\nYou decide to head home and warm up by the fire.\n";
            running = false;
            continue;
        }

        // Unknown command
        cout << "I don't understand that command.\n";
    }

    cout << "\nThanks for visiting Christmas Village. Merry Christmas!\n";
    return 0;
}