#include <iostream>
using namespace std;

int main () {
int size = 8;
int row = size;
  while (row > 0) {
    for (int column = 1; column<=8; column++) {
      if (column + row < size + 1) cout << "  ";
      else cout << "# ";
    }
  row--;
  cout << endl;
  }

  return 0;
}
