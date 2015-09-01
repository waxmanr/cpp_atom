#include <iostream>
using namespace std;

int main () {
  for (int i = 1; i <= 27; i++) {
      if (i % 9 == 0 && i < 10) cout << "  " << i << "\n";
      else if (i % 9 == 0 && i >= 10)  cout << " " << i << "\n";
      else if (i < 9) cout << "  " << i;
      else cout << " " << i;
  }

  return 0;
}
