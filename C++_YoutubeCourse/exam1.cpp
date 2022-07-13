#include <iostream>

class Car {
    int position;
public:
    Car() : position(0) {};
    virtual void drive() {position += 1;}
};

class Taxi : public Car {
    // ...
};

class Limo : public Car {
    // ...
};

void startMeter() { std::cout << "where to?" << std::endl; }

int main()
{
    Car     c1;
    Taxi    c2;
    Limo    c3;
    Car *Cars[3] = {&c1, &c2, &c3};
    Car *cp;

    for(int i=0; i<3; i++)
    {
        cp = Cars[i];

        if(typeid(*cp) == typeid(Taxi)){startMeter();}        
        cp->drive();
    }
}