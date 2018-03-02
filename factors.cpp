#include <iostream>
using namespace std;

int main() {
  int n, i;
  
  cout << "Please enter a positive integer: ";
  cin >> n;

  for(i = 1; i <= n; ++i) {
    if(n % i == 0)
      cout << i << endl;
  }

  return 0;

}
