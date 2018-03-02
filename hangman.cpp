#include <iostream>
#include <string>
using namespace std;

// Declare functions
int clearScreen();
int drawStuff(int);
string getRedacted(string, string);

// Declare variables
int wrong = 0;
int limit = 6;
string word;
string guess;
string redacted;
string oldRedacted;

int main() {
	// Clear screen
	clearScreen();

	// Ask played for a word and return it
	cout << "Please input a word for guessing: ";
	getline(cin, word);

	clearScreen();
	
	getRedacted(word, guess);

	// While wrong is less than or equal to limit do game stuff
	while (wrong < limit) {

		clearScreen();
		
		// draw gallows and hangman
		drawStuff(wrong);

		getRedacted(word, guess);
 		
 		cout << redacted << endl;
    
    cout << "You have " << limit << " guesses left." << endl << endl;
   
		cout << "Guess a letter: ";
		getline(cin, guess);

		// Limit guess to first character to catch cheaters
		guess = guess[0];

	}

	return 0;

}

// Function to compare strings
string getRedacted (string inputWord, string guessLetter) {

  // Itterate through the word to guess
	for (unsigned int i = 0; i != inputWord.length(); i++) {
		
    // If match found then
    if (guessLetter.find(inputWord) != string::npos) {
   	//if (guessLetter == inputWord[i]) {

			// If guess does match a letter in word then "un-redact" it
			redacted += guessLetter;

    // If match not found then
		} else {

			// If guess does not match a letter in word then redact it
			redacted += "_";

		}

	}

	return redacted;
	
}

int clearScreen() {
	cout << "\033[2J\033[1;1H";
	return 0;
}






// default guesses = 5
int drawStuff(int wrong) {

		// Draw gallows
  if (wrong == 0) {
  	cout << R"(


    |  +===+
    |  |   |
    |      |
    |      |
    |      |
    |      |
    |======|
    )" << '\n';
  }

	// Draw the head
  if (wrong > 0) {
  	cout << R"(


    |  +===+
    |  |   |
    |  O   |
    |      |
    |      |
    |      |
    |======|
    )" << '\n';
  }
  
  // Draw body
  if (wrong > 1) {
  	cout << R"(


    |  +===+
    |  |   |
    |  O   |
    |  |   |
    |      |
    |      |
    |======|
    )" << '\n';
  }

  // Draw left arm
  if (wrong > 2) {
  	cout << R"(


    |  +===+
    |  |   |
    |  O   |
    |  |\  |
    |      |
    |      |
    |======|
    )" << '\n';
  }

  // Draw right arm
  if (wrong > 3) {
   	cout << R"(


    |  +===+
    |  |   |
    |  O   |
    | /|\  |
    |      |
    |      |
    |======|
    )" << '\n';
  }

  // Draw left leg 
  if (wrong > 4) {
   	cout << R"(


    |  +===+
    |  |   |
    |  O   |
    | /|\  |
    |   \  |
    |      |
    |======|
    )" << '\n';
  }

  // Draw left leg
  if (wrong > 5) {
   	cout << R"(


    |  +===+
    |  |   |
    |  O   |
    | /|\  |
    | / \  |
    |      |
    |======|
    )" << '\n';
  	}
    return 0;
  
}
