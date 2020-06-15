#include <iostream>
#include <string>
using std::string;

class Vehicle {
public:
    int wheels = 0;
    string color = "blue";
    int doors = 0;
    void Print() const
    {
        std::cout << "This " << color << " vehicle has " << wheels << " wheels and "<< doors << " doors. \n";
    }
};

class Car : public Vehicle {
public:
    bool sunroof = false;
};

class Bicycle : public Vehicle {
public:
    bool kickstand = true;
};

class Motorcycle : public Vehicle {
public:
      bool sunroof = false;
};

int main() 
{
    Car car;
    car.wheels = 4;
    car.sunroof = true;
    car.doors = 5; 
    car.Print();
    if(car.sunroof)
        std::cout << "And a sunroof!\n";
    Motorcycle moto;
    moto.Print();
};