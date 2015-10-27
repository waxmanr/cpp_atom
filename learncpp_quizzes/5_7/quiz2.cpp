#include <iostream>
using namespace std;

int total = 0;

int sumTo (int x) {
  for (int i=1; i<=x; ++i)
    total += i;

  return total;
}

int main () {
  int y;
  cout << "Enter an integer: ";
  cin >> y;
  cout << "The sum to " << y << " = " << sumTo(y) << endl;

  return 0;
}
