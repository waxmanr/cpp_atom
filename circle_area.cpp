#include <iostream>
#include <math.h>
using namespace std;

int main ()
{
  double r, A;
  cout << "Radius: ";
  cin >> r;

  A = M_PI * pow(r,2);

  cout << "Area: " << A << endl;

  return 0;
}
