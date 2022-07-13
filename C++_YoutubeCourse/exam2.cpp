#include <iostream>
#include <vector>

using namespace std;
    
class Person {
    string *namePtr;

public:
    Person() {namePtr = new string;}
    void setName(char *s) {*namePtr = s;}
    void getName(){cout << *namePtr << endl;}
};


int main()
{
    Person president;
    Person chairman;

    president.setName("Tom");

    chairman = president;        // Tom is promoted to chairman

    chairman.getName();

    president.setName("Janet");    // Janet is new president

    chairman.getName();
    
    president.getName();


}