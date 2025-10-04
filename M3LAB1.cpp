// CSC 134
// M3LAB1 - Example 3: The Office Edition
// Guerrero, Jeremy
// 10/3/2025

#include <iostream>
using namespace std;

void chooseOption1();
void chooseOption2();
void chooseOption3();

int main(){
  int choice;
  // ask question
  cout << "Welcome to Dunder Mifflin: Scranton Branch Decision Simulator" << endl;
  cout << "Choose a branch storyline:" << endl;
  cout << "  1) Michael calls a conference room meeting" << endl;
  cout << "  2) Jim attempts a prank" << endl;
  cout << "  3) Dwight initiates an emergency drill" << endl;
  cout << "Type 1-3: ";
  cin >> choice;

  if (1 == choice) {
    chooseOption1();
  }
  else if (2 == choice) {
    chooseOption2();
  }
  else if (3 == choice) {
    chooseOption3();
  }
  else {
    cout << "I'm sorry, that is not a valid choice. Please see Toby in HR." << endl;
  }

  cout << "Thank you for playing! (World's Best Boss mug not included)" << endl;
  return 0;
}

void chooseOption1() {
  // this function is called if the user chooses 1
  cout << "You chose Michael." << endl;
  cout << "*claps* CONFERENCE ROOM! Everybody in the conference room!" << endl;
  cout << "After a three-hour meeting about why paper is 'the future of the cloud,'" << endl;
  cout << "you are awarded a Dundee for 'Most Patient Employee.'" << endl;
}

void chooseOption2() {
  // this function is called if the user chooses 2
  cout << "You chose Jim." << endl;
  cout << "You place Dwight's stapler in a tasteful lime Jell-O mold." << endl;
  cout << "Dwight: 'IDENTITY THEFT IS NOT A JOKE, JIM!'" << endl;
  cout << "Outcome: +5 smiles from Pam, -10 Schrute Bucks." << endl;
}

void chooseOption3() {
  // this function is called if the user chooses 3
  cout << "You chose Dwight." << endl;
  cout << "You launch a surprise fire drill to test office readiness." << endl;
  cout << "Stanley shouts, Kevin drops chili he was somehow carrying, and chaos ensues." << endl;
  cout << "Outcome: +100 Schrute Bucks (approx. $0.0001 USD)." << endl;
}