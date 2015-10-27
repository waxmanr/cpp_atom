#include <iostream>
#include <string>
using namespace std;

enum class Animal {
  PIG,
  CHICKEN,
  GOAT,
  CAT,
  DOG,
  OSTRICH
};

string getAnimalName(Animal animal) {
  switch (animal) {
    case Animal::PIG:
      return "pig";
      break;
    case Animal::CHICKEN:
      return "chicken";
    case Animal::GOAT:
      return "goat";
    case Animal::CAT:
      return "cat";
    case Animal::DOG:
      return "dog";
    case Animal::OSTRICH:
      return "ostrich";

    default:
      return "getAnimalName(): Unhandled enumerator.";
  }
}

int getNumberOfLegs(Animal animal) {
  switch (animal) {
    case Animal::PIG:
    case Animal::GOAT:
    case Animal::CAT:
    case Animal::DOG:
      return 4;
    case Animal::CHICKEN:
    case Animal::OSTRICH:
      return 2;

    default:
      cout << "printNumberOfLegs(): Unhandled enumerator";
      break;
  }
}

void printInfo(Animal animal) {
  cout <<"A " << getAnimalName(animal) << " has " << getNumberOfLegs(animal) << " legs.\n";
}

int main () {
  Animal an1 = Animal::CAT;
  Animal an2 = Animal::CHICKEN;
  printInfo(an1);
  printInfo(an2);
  return 0;
}
