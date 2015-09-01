#include <iostream>
using namespace std;

int main () {

  int size = 8;
  for (int row = 1; row <= size; row++) {
    if (row % 2 != 0)
      cout << " ";
    for (int column = 1; column <= size; column++){
        if (column % 2 != 0) cout << "# ";
        else cout << "* ";
    }
    cout << endl;
  }

  return 0;
}
