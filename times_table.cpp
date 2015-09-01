#include <iostream>
using namespace std;

int main () {
  for (int i = 1; i <= 9; i++) {
    for (int n = 1; n <= 9; n++)
      if (n*i >= 10)  cout << " " << n*i;
      else cout << "  " << n*i;
      cout << endl;
  }

  return 0;
}
