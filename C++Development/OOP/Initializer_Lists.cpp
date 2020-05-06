#include <assert.h>
#include <string>
#include <iostream>

// TODO: Define class Person
  // TODO: Define a public constructor with an initialization list
  // TODO: Define a public member variable: name
class Person {
    public:
    std::string name;
    Person(std::string n);
};

Person::Person(std::string n) : name(n){}

// Test
int main() {
  Person alice("Alice");
  Person bob("Bob");
  assert(alice.name != bob.name);
  std::cin.get();
  return 0;
}