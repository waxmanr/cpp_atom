#include <iostream>
using namespace std;

int main () {
  int x;

  do {
    cout << "Enter a number between 1 and 9: ";
    cin >> x;

    // if user enters invalid character
    if (cin.fail()) {
      cin.ignore('\n', 32767); // ignore any characters in the input buffer
      cin.clear(); // reset any error flags
    }

  } while (x > 9 || x < 1);

  const int arrayLength(9);
  int array[arrayLength] = { 4, 6, 7, 3, 8, 2, 1, 9, 5 };

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
}
