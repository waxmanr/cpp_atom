#include <iostream>
using namespace std;

int main ()
{
  double E, nu, Lambda, G;
  cout << "----Inputs----\n";
  cout << "Enter E: ";
  cin >> E;
  cout << "Enter nu: ";
  cin >> nu;

  Lambda = (E * nu) / ((1 + nu) * (1 - 2 * nu));
  G = E / (2*(1 + nu));

  cout << "----Results----\n";
  cout << "Lambda = " << Lambda << endl;
  cout << "G = " << G << endl;

  return 0;
}
