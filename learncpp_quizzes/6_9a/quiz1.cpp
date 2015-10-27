#include <iostream>
#include <string>
#include <utility>
using namespace std;

int main () {
  cout << "How many names do you want to enter? ";
  int size;
  cin >> size;

  string *array = new string[size];
  cout << "I just allocated a string array of size " << size << " for your names.\n";

  for (int i = 0; i < size; ++i) {
    cout << "Enter name #" << i+1 << ": ";
    cin >> array[i];
  }

  bool done = 0;
  do {
    done = 1;
    for (int i = 0; i < size-1; ++i) {
      if (array[i]>array[i+1]) {
        swap(array[i],array[i+1]);
        done = 0;
      }
    }
  } while (done == 0);

  cout << "Here is your sorted list of names: \n";

  for (int i = 0; i < size; ++i) {
    cout << "Name #" << i+1 << ": " << array[i] << endl;
  }

  delete[] array;
  array = 0;

  return 0;
}
