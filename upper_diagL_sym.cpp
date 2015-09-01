#include <iostream>
using namespace std;

int main () {
int row = 8;
  int size = 8;
  while (row > 0) {
    int column = 1;
    while (column <= row){
        cout << "# ";
        column++;
    }
    row--;
    cout << endl;
  }

  return 0;
}
