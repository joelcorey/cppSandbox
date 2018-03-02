// Ideally you would use vectors for this problem instead of
// arrays
#include <iostream>
using namespace std;

int arraySize = 0;

// C++ needs to allocate memory for arrays at compile times
// Dynamic arrays not possible, use vectors next time .. lame
int* myArray = 0;

int main() {

	// Let user decide size of array
	cout <<  "Input size of array: " << endl;
	cin >> arraySize;	
	
	// Because we reserved memory in advance we can dynamically
	// generate an array of any size
	myArray = new int[arraySize];

	// Let user know size of array
	cout << endl; 
	cout << "Size: " << arraySize << endl;
	cout << endl;

	// Loop through however big the array is and let
	// user input values	
	for (int i = 0; i < arraySize; i++) {
		cout << "Please input value for " << i << ":";
		cin >> myArray[i];
		//cout << endl;
	}

	// Itterate through array and print ouy values
	for (int i = 0; i < arraySize; i++) {
		cout << "Value " << i << ": " << myArray[i];
		cout << endl;
	}
}
