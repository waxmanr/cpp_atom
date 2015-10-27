#include <iostream>
using namespace std;

int getNum() {
  int x;
  cout << "Enter a number: ";
  cin >> x;
  return x;
}

char getOp () {
  char a;
  cout << "Choose an operation (+, -, /, or *): ";
  cin >> a;
  switch (a) {
    case '+':
    case '-':
    case '/':
    case '*':
      return a;
      break;
    default:
      cout << "You did not enter a valid operator.\n";
      return 1;
      break;
    }
}

int performOp(int x, int y, char a) {
  switch (a) {
    case '+':
      return x + y;
      break;
    case '-':
      return x - y;
      break;
    case '/':
      return x / y;
      break;
    case '*':
      return x * y;
      break;
    }
}

int main () {
  int x, y, ans;
  char a;
  x = getNum();
  y = getNum();
  a = getOp();
  switch (a) {
    case 1:
      return -1;
      break;
    default:
      ans = performOp(x,y,a);
      cout << "The answer is: " << ans << endl;
      return 0;
  }
}
