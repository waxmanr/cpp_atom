#include <iostream>
using namespace std;

int readNumber () {
  int x;
  cout << "Enter integer: ";
  cin >> x;
  return x;
}

void writeAnswer (int result) {
  cout << "The sum is: " << result << ".\n";
}
