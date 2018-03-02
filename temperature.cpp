#include <iostream>
using namespace std;

// declare variables
int tempc;
int tempf;

// declare arrays
int formulae[2] = {
 
  // convert from c to f
  '* 9 / 5 + 32',

  // convert from f to c
  '(- 32) * 5 / 9' 

};

// declare functions
int convertF(int);
int convertC(int);

int main() {
  
}

int menu(whichtemp) {
  
  cout << "Please input a celcius temperature: ";
  cin >> tempc;
  tempf = convertF(tempc);
  cout << "That temperature in fahrenheit is: " << tempf;
  cout << endl;
  
  cout << "Please input a fahrenheit temperature: ";
  cin >> tempc;
  tempf = convertC(tempc);
  cout << "That temperature in celcius is: " << tempf;
  cout << endl;
}

int convertF(int temp) {
  return temp * 9 / 5 + 32;
}


int convertC(int temp) {
  return (temp - 32) * 5 / 9;
}
