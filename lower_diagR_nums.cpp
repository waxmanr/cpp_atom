#include <iostream>
using namespace std;

int main () {
int size = 8;
int row = size;
  while (row > 0) {
    int count = 1;
      for (int column = 1; column<=8; column++) {
        if (column < row) cout << "  ";
        else {cout << count << " "; count++;}
      }
  row--;
  cout << endl;
  }

  return 0;
}
