#include <iostream>
using namespace std;

int main() {
  int x;
  bool prime;
  cout << "Enter a single-digit number: ";
  cin >> x;

  if (x >= 10) cout << "You did not enter a single-digit number.\n";
  else {if (x == 2 || x == 3 || x == 5 || x == 7) prime = true;
  else prime = false;

  if (prime) cout << "You entered "<< x << ", a prime number.\n";
  else cout << "You entered " << x << ", which is not a prime number.\n";
  }
}
