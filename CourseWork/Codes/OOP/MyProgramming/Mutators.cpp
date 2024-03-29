#include <string>
#include <cstring>
#include <iostream>

class Car {
    // TODO: Declare private attributes
    private:
        std::string _brand;
        
    // TODO: Declare getter and setter for brand
    public:
        void brand(char*);
        std::string brand() const;
        
};

// Define setters
void Car::brand(char* brand)
{
    Car::_brand = brand;
}

// Define getters
std::string Car::brand() const
{
    return _brand;
}

// Test in main()
int main() 
{
    Car car;
    car.brand("Peugeot");
    std::cout << car.brand() << "\n";   
}