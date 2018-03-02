#include <iostream>
using namespace std;

#include <iomanip>
using std::setw;

#include <gmpxx.h>

int main ()
{
int G;
  cout << "For what Generation would you like to know the count?";
  cin >> G;

  mpz_class a[G];
  mpz_class b[G];
    a[0] = 1;
    b[0] = 0;
    for ( int n = 0; n+1 < G; n++ ) {
      a[n+1] = a[n] + b[n];
      b[n+1] = a[n];
    }
  cout << "Adults" << setw(48) <<  "Babies" << setw(50) << "Generation" << endl;

    for ( int n = 0; n < G; n++) {

if (((n)*(n)) == (b[n]))  {
 cout << "Square: " << b[n]<< " : " << n << endl;
}
// cout << setw(5) << a[n] << setw(48) << b[n] << setw(50) <<  n << endl;

}

  return 0;

}

