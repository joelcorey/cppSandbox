// Euclidean algorithm
#include <iostream>
using namespace std;
 
int y;
int x;

int main() {
	cout << "Please enter two  numbers to find their greatest common denomiator: ";
	cin >> x; 
	cin >> y;
	
	while (x != 0 && y != 0) {
		if(y > x) {
 				
			y = y % x;
		}
		else {
			
			x = x % y;
		}
	}

	cout << "The greatest common denominator is: " << x + y << endl;

}

