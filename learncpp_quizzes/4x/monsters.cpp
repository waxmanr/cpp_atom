#include <iostream>
#include <string>
using namespace std;

enum class MonsterType{
  OGRE,
  DRAGON,
  ORC,
  GIANT_SPIDER,
  SLIME
};

struct Monster{
  MonsterType type;
  string name;
  int health;
};

void printMonster (Monster x) {
  string y;
  switch (x.type)
  {
    case MonsterType::OGRE:
    y = "Ogre"; break;
    case MonsterType::DRAGON:
    y = "Dragon"; break;
    case MonsterType::ORC:
    y = "Orc"; break;
    case MonsterType::GIANT_SPIDER:
    y = "Giant Spider"; break;
    case MonsterType::SLIME:
    y = "Slime"; break;
  }
  cout << "This " << y << " is named " << x.name << " and has " << x.health << " health.\n";
}

int main() {
  Monster ogre {MonsterType::OGRE, "Torg", 145};
  Monster slime {MonsterType::SLIME, "Blurp", 23};
  printMonster(ogre);
  printMonster(slime);

  return 0;
}
