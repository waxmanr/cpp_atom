#include <iostream>
using namespace std;

int op;

double getNumber() {
  double x;
  cout << "Enter number: ";
  cin >> x;
  return x;
}

int getOperator () {
  cout << "Enter operator (1 = +, 2 = -, 3 = *, 4 = /): ";
  cin >> op;
  return op;
}

double perfOperation (double d1, double d2) {
  if (op==1) return d1 + d2;
  if (op==2) return d1 - d2;
  if (op==3) return d1 * d2;
  if (op==4) return d1 / d2;
}

int main () {
  double result;
  double d1 = getNumber();
  double d2 = getNumber();
  op = getOperator();
  if (op !=1 && op !=2 && op !=3 && op!=4) {
    cout << "You did not enter a valid operator.\n";
    return -1;
  }
  else {
    result = perfOperation(d1, d2);
    cout << "The result is: " << result << ".\n";
    return 0;
  }
}
