// stress_check for pressure
// for 2D-RZ_finiteStrain_test.i to be pushed for changes
#include <iostream>
#include <math.h>
using namespace std;

int main ()
{
  int ri = 5, ro = 10;
  double Sri, tf, P1, P2; // P1 = 10000, P2 = 200000;
    cout << "----Inputs----\n";
    cout << "Final time: ";
    cin >> tf;
    cout << "Inner pressure: ";
    cin >> P1;
    cout << "Outer pressure: ";
    cin >> P2;
    P1 *= tf;
    P2 *= tf;
   Sri = ( P1*(pow(ri,3)*(2*pow(ri,3)+pow(ro,3))) - P2*(pow(ro,3)*(2*pow(ri,3)+pow(ri,3))) ) \
    / (2*pow(ri,3)*(pow(ro,3)-pow(ri,3)));
   cout << "----Results----\n";
   cout << "Final time is " << tf << ".\n";\
   cout << "Inner pressure is " << P1 << ".\n";\
   cout << "Outer pressure is " << P2 << ".\n";\
   cout << "Inner radius is " << ri << ".\n";\
   cout << "Outer radius is " << ro << ".\n";\
   cout << "Stress at the inner wall is " << Sri << ".\n";\
  return 0;
}
