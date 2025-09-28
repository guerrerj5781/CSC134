/*
M3T2 - Craps Part 1
CSC 134
Jeremy Guerrero
September 27th, 2025
Beginning of the craps game.
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





    return 0;
}
