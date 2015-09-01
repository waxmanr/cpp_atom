#include <iostream>
#include "gravity.h"
#include "math.h"
using namespace std;

int getHeight () {
  int height;
  cout << "Give height in metres: ";
  cin >> height;
  return height;
}

void calcNewHeight (int t, double h) {
  double newHeight;
  newHeight = h - constants::g * pow(t,2) / 2;
  if (newHeight < 0) newHeight = 0;
  cout << "At " << t << "seconds, the ball is at height: " << newHeight << " metres.\n";
}


int main () {
  int h = getHeight();
  calcNewHeight(0, h);
  calcNewHeight(1, h);
  calcNewHeight(2, h);
  calcNewHeight(3, h);
  calcNewHeight(4, h);
  calcNewHeight(5, h);

  return 0;
}
