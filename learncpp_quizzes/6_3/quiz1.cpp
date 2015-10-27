#include <iostream>
using namespace std;

int main () {
  const int arrayLength(9);
  int array[arrayLength] = { 4, 6, 7, 3, 8, 2, 1, 9, 5 };

  for (int i=0; i<arrayLength; ++i)
    cout << array[i] << " ";

  cout << endl;

  return 0;
}
