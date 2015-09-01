#include <iostream>
using namespace std;

int main () {

  int size = 8;
  for (int row = 1; row <= size; row++) {
    for (int column = 1; column <= size; column++){
        if (row == 1 || row == size || row == column || row + column == size + 1 || column == 1 || column == size) cout << "# ";
        else cout << "  ";
    }
    cout << endl;
  }

  return 0;
}
