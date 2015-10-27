#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;

unsigned int getRandomNumber(int min, int max) {
  static const double fraction = 1.0 / (static_cast<double>(RAND_MAX) + 1);
  return static_cast<int>(rand() * fraction * (max - min + 1) + min);
}

int main () {
  char p = 'y';
  while (p == 'y') {
    srand(static_cast<unsigned int>(time(0)));
    unsigned int number = getRandomNumber(1,100);
    cout << "Let's play a game.  I'm thinking of a number.  You have 7 tries to guess what it is.\n";
    for (int i=1; i<8; ++i) {
      cout << "Guess #" << i << ": ";
      int guess;
      cin >> guess;
      if (guess==number) {
        cout << "Correct! You win!\n";
        return 0;
      }
      else if (guess < number)
        cout << "You guess is too low.\n";
      else
        cout << "Your guess is too high.\n";
    }
  cout << "You didn't guess the number. It was " << number << ". Play again? (y/n)";
  cin >> p;
  while (p != 'n' && p != 'y') {
    cout << "I said y/n. Try again: ";
    cin >> p;
  }
}
  cout << "Thanks for playing.\n";
  return 0;
}
