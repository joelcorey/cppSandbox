#include <iostream>
#include <vector>
using namespace std;

int n;

int main() {
  
  cout << "Array size: ";
  cin >> n;

  // Make vector (dynamic array) of int typer and n size
  vector<int> a(n);

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
