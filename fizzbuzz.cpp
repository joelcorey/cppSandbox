#include <iostream>
using namespace std;

int main() {
  	int length;

  
	cout << "Please input a number for fizzbuzz" << endl;
	cin >> length;
	
	for(int i = 1; i <= length; i++) {
    if(i % 3 == 0 && i % 5 == 0) 
			cout << "Fizzbuzz" << endl;
		else
		if(i % 3 == 0)
			cout << "Fizz" << endl;
		else
		if(i % 5 == 0)
			cout << "Buzz" << endl;
		else cout << i << endl;
	}
	return 0;
}
