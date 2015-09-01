#include <iostream>
using namespace std;

int main () {

  int size = 8;
  for (int row = 1; row <= size; row++) {
    for (int column = 1; column <= size; column++){
        if (row == 1 || row == size || row == column) cout << "# ";
        else cout << "  ";
    }
    cout << endl;
  }

  return 0;
}
