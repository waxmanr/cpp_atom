// more pointers
#include <iostream>
using namespace std;

int main ()
{
  int firstvalue = 5, secondvalue = 15;
  int * p1, * p2;

  p1 = &firstvalue;  // p1 = address of firstvalue
  p2 = &secondvalue; // p2 = address of secondvalue
  *p1 = 10;          // value pointed to by p1 = 10 (fv = 10)
  *p2 = *p1;         // value pointed to by p2 = value pointed to by p1 (sv = 10)
  // above line is not needed; still works if commented out
  p1 = p2;           // p1 = p2 (value of pointer is copied) (*p1 = *p2 = sv)
  *p1 = 20;          // value pointed to by p1 = 20 (sv = 10)

  cout << "firstvalue is " << firstvalue << '\n';
  cout << "secondvalue is " << secondvalue << '\n';
  return 0;
}
