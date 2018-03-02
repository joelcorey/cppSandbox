// 2 bucket problem 
//
#include <iostream>
using namespace std;
 
int capacityA = 0;
int capacityB = 0;
int bucketA = 0;
int bucketB = 0;
int amount = 0;
int measure = 0;

int main() {
	cout << "This program asks for 2 quantities, each placed in to 2 buckets." << endl;
	cout << "It then pours these buckets back and forth until the sum of the buckets is equal to the input measure" << endl;
	cout << endl;
	cout << "Please enter a capacity for bucket A: " << endl;
	cin >> capacityA;
	cout << "Please enter a capacity for bucket B: " << endl;
	cin >> capacityB; 
	cout << "Please enter a quantity of milliliters to measure: " << endl;
	cin >> measure;
	
	// Euclidean problem
	// Left over code from a previous problem, potentially useful here
	//	
	//while (a != 0 && b != 0) {
	//	if(b > a) {
 	//			
	//		b = b % a;
	//	}
	//	else {
	//		
	//		a = a % b;
	//	}
	//}
	//gcd = x + y;
	
	
	while ((bucketA + bucketB) != measure) {
		// these steps are very important to do in order
		// when done out of order they can be tricky
		if (bucketB == capacityB) {
			bucketB = 0;
			cout << "Empty bucket B" << endl;
			cout << "Current volume of buckets A: " << bucketA << " and B: " << bucketB << endl;
			cout << "------" << endl;
		}
		else if (bucketA == 0) {
			bucketA = capacityA;
			cout << "Fill bucket A" << endl;
			cout << "Current volume of buckets A: " << bucketA << " and B: " << bucketB << endl;
			cout << "------" << endl;
		}
		else { 
			amount = min(bucketA, capacityB - bucketB);
			bucketA = bucketA - amount; 
			bucketB = bucketB + amount;
			cout << "Pour A into B" << endl;
			cout << "Current volume of buckets A: " << bucketA << " and B: " << bucketB << endl;
			cout << "------" << endl;
		}
		if (bucketA == 0 && bucketB == 0) {
			cout << "Impossible" << endl;
			break;
		}
	}

}



