#include <iostream>
#include "io.h"
using namespace std;

int main () {
  int int1 = readNumber();
  int int2 = readNumber();
  int result = int1 + int2;
  writeAnswer(result);

  return 0;
}
