#include <iostream>
using namespace std;

int main () {

  int size = 8;
  for (int row = 1; row <= size; row++) {
    for (int column = 1; column <= size; column++){
        if (column == 1 || row == 1 || column == size || row == size) cout << "# ";
        else cout << "  ";
    }
    cout << endl;
  }

  return 0;
}
