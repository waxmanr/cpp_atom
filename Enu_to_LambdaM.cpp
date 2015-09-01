#include <iostream>
using namespace std;

int main ()
{
  double E, nu, Lambda, M;
  cout << "Enter E: ";
  cin >> E;
  cout << "Enter nu: ";
  cin >> nu;

  Lambda = (E * nu) / ((1 + nu) * (1 - 2 * nu));
  M =  (E * (1 - nu)) / ((1 + nu) * (1 - 2 * nu));

  cout << "Lambda = " << Lambda << endl;
  cout << "M = " << M << endl;

  return 0;
}
