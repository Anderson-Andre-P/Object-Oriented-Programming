// RPG Inheritance Example
// Description: base class 'Character' inherited by 'Mage', 'Warrior', 'Archer'

#include <iostream>
#include <string>
using namespace std;

// Base Class
class Character
{
public:
  string name;
  int health;
  int mana;
  int focus;
  int strength;
  int endurance;
  int intellect;
  int resistance;
  string weapon;
  int attack;
  int defense;
  int speed;
  int criticalChance;
  int luck;

  // Constructor
  Character(string n)
      : name(n), health(100), mana(50), focus(50), strength(10), endurance(10),
        intellect(10), resistance(10), weapon("None"), attack(10), defense(10),
        speed(10), criticalChance(5), luck(5) {}

  // Method to show status
  void showStatus()
  {
    cout << "Character: " << name << endl;
    cout << "Health: " << health << ", Mana: " << mana << ", Focus: " << focus
         << endl;
    cout << "Strength: " << strength << ", Endurance: " << endurance
         << ", Intellect: " << intellect << ", Resistance: " << resistance
         << endl;
    cout << "Weapon: " << weapon << ", Attack: " << attack
         << ", Defense: " << defense << endl;
    cout << "Speed: " << speed << ", Critical Chance: " << criticalChance
         << "%, Luck: " << luck << endl;
    cout << "-----------------------------------" << endl;
  }
};

// Class: Mage
class Mage : public Character
{
public:
  Mage(string n) : Character(n)
  {
    mana = 150;
    intellect = 25;
    weapon = "Staff";
    attack = 20;
  }
};

// Class: Warrior
class Warrior : public Character
{
public:
  Warrior(string n) : Character(n)
  {
    health = 150;
    strength = 25;
    endurance = 20;
    weapon = "Sword";
    attack = 30;
    defense = 20;
  }
};

// Class: Archer
class Archer : public Character
{
public:
  Archer(string n) : Character(n)
  {
    speed = 25;
    focus = 20;
    weapon = "Bow";
    attack = 22;
    criticalChance = 15;
  }
};

int main()
{
  Mage gandalf("Gandalf");
  Warrior conan("Conan");
  Archer legolas("Legolas");

  gandalf.showStatus();
  conan.showStatus();
  legolas.showStatus();

  return 0;
}

// 7. polimorfistmo via métodos