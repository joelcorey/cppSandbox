#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

// Let the compiler know functions are somewhere so it doesn't panic stupidly
int clearscreen();

// Declare variables and other stuff
string string1;
char char1;
char char2;

int main() {
	
	clearscreen();

	cout << "Please enter a short string of characters: ";
	cin >> string1;
	cout << "string1 = " << string1 << endl;
	cout << endl;

	cout << "Select a character in the string that you don't like: ";
	cin >> char1;
	cout << endl;	
	
	cout << "Now, select a character to replace " << char1 << " with: ";
	cin >> char2;
	cout << endl;

	replace(string1.begin(), string1.end(), char1, char2);

	cout << "You replaced " << char1 << " with " << char2 << endl;
	cout << string1;	
	cout << endl;

	return 0;
}

int clearscreen() {
	cout << "\033[2J\033[1;1H";
	return 0;
}
