#include <iostream>
#include <string>
using namespace std;

int main () {
  string names [] = {"Alex", "Betty", "Caroline", "Dave", "Emily", "Fred", "Greg", "Holly"};

  cout << "Enter a name: ";
  string x;
  cin >> x;

  int a = 0;
  for (auto &name : names) {
      if (x == name) {
        a = 1;
        break;
      }
  }

  if (a) cout << x << " was found.\n";
  else cout << x << " was not found.\n";

  return 0;
}
