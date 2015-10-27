#include <iostream>
using namespace std;

int main () {
  const int arrayLength(9);
  int array[arrayLength] = { 4, 6, 7, 3, 8, 2, 1, 9, 5 };

  cout << "Enter a number between 1 and 9: ";
  int x;
  cin >> x;
  while (x > 9 || x < 1) {
    if (cin.fail()){
      cin.ignore('\n', 32767); // ignore any characters in the input buffer
      cin.clear(); // reset any error flags
    }
    cout << "Not a valid number. Enter a number between 1 and 9: ";
    cin >> x;
  }

  for (int i=0; i<arrayLength; ++i) {
    cout << array[i] << " ";
  }

  cout << endl;

  for (int i=0; i<arrayLength; ++i) {
    if (array[i]==x) {
      cout << "The index number matching your choice is: " << i << endl;
    }
  }

  return 0;
} // gets stuck in loop if non-number entered
