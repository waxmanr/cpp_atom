// more pointers
#include <iostream>
using namespace std;

int main ()
{
  int numbers[5]; // declares array of length 5, type int
  int * p; // declares pointer named p, of type int
  p = numbers;  *p = 10; // p = array numbers; assigned value 10 to all five locations (index 0-5)
  p++;  *p = 20; // adds one to all elements#s of p; assigns 20 elements 2-7 (index 1-5)
  p = &numbers[2];  *p = 30; // p = the address of numbers element 3; assigns 30 to 3rd elt of numbers (index2)
  p = numbers + 3;  *p = 40; // adds 3 to all elts of p (p = 4 5 6 7 8 9); assigns 40 to elts 4-9 (index3-8)
  p = numbers;  *(p+4) = 50; // p = array numbers; assigns 50 to elts 5-10 (index 4-9)
  for (int n=0; n<5; n++) // outputs numbers[0-4] (elts 1-5), which should be 10, 20, 30, 40, 50
    cout << numbers[n] << ", ";
    cout << endl; // added to force new line
  return 0;
}
