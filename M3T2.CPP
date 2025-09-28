/*
M3T2: Craps Pt. 1
CSC 134
Jeremy Guerrero
September 27th, 2025
Start of Craps Game
*/

#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int roll();

int main() {

 int roll1;
    int roll2;
    int point;
    
    srand(time(0));
    
    roll1 = roll();
    roll2 = roll();
    int sum = roll1+roll2;
    cout << "ROLL: " << sum << endl;
    
    if ( (sum == 7) || (sum == 11) ) {
        cout << "🎲 Seven or Eleven -- You win!" << endl;
    }

else if ( (sum == 2) || (sum == 3) || (sum == 12) ) {
        cout << "🎲 2,3,12 -- Sorry, you lose." << endl;
    }
    else {
    
        point = sum;
        cout << "🎲 Rolled a point. " << endl;
        cout << "Your point is: " << point << endl;
    }



    return 0;
}


// Helper Functions
int roll() {
    int my_roll;
    my_roll = (rand() % 6) + 1;
    return my_roll;
}
