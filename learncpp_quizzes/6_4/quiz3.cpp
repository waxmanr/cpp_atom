#include <iostream>
#include <utility>
#include <cstring>
using namespace std;

int main () {
  const int size(9);
  int array[size] = { 25, 96, 64, 15, 67, 39, 48, 2, 70 };
  int notDone = 1;

  do {
    notDone = 0;
    for (int i=0; i<(size-1); ++i) {
      if (array[i]>array[i+1]) {
        swap(array[i],array[i+1]);
        notDone = 1;}
      }

    for (auto &value : array)
      cout << value << " ";

    cout << endl;

    //if (arrayOld==array) notDone = 0;

  } while (notDone);

  return 0;
}
