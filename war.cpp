// http://www.wikihow.com/Sample/Egyptian-Rat-Screw-Rules

#include <iostream>
#include <string>
#include <vector>
using namespace std;

// Declare variables
int deckLimit = 51;
int rank;
int suit;

// Declare arrays - not needed for now

// Declare vectors
// This vector will hold the duck cards
vector<int> cardDeck(deckLimit);

// Declare functions
int clearScreen();
string makeDeck(string, int);

// Main function
int main() {

  // Make the deck of cards
  displayDeck(suits, deckLimit);

  // Clear screen
  clearScreen();
  // While wrong is less than or equal to limit do game stuff
  while (limit != 1) {
    clearScreen();

  }

  return 0;

}

int clearScreen() {
  cout << "\033[2J\033[1;1H";
  return 0;
}

int makeDeck(int numberOfCards) {
  for (i = 1; i <= numberOfCards; i++) {
    cardDeck.push_back(i);
  }  
}

// To determine what card is what if all you have is values:
// Rank = card % 13;

// Each suit contains 13 cards: Ace, 2, 3, 4, 5, 6, 7, 8, 9, 10, Jack, Queen, King.
// Suit = card / 13;

string displayDeck(int numberOfCards) {

  int cardLimiter = 12

  for (i = 0; i <= numberOfCards; i++) {

    // Each suit contains 13 cards: Ace, 2, 3, 4, 5, 6, 7, 8, 9, 10, Jack, Queen, King.
    for (j = 0; i <= cardLimiter; i++) {

      if (j == 1) {
        // Insert Ace
        
      }
      else if (j == 11) {
        // Insert Jack

      }
      else if (j == 12) {
        // Insert Queen

      }
      else if (j == 13) {
        // Insert KING

      }
      else {
        // Insert 2-10 as appropriate
        
      }

    }

  }

}

/*

  // Input array values
  // Use vector container member types for size() function
  for (vector<int>::sizetype i = 0; i < a.size(); ++i){
    cout << "Input element value " << i << ": ";
    cin >> a[i];
  }
  
  // Output array values
  for (vector<int>::size_type i = 0; i < a.size(); ++i) {
    cout << a[i] << ' ';
  }

}

*/