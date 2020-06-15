#include <iostream>
// TODO: Write hello() function
std::string hello(){
    std::cout << "Hello, World!" <<std::endl;
}
// TODO: Overload hello() three times
class Human {};

std::string hello(Human h){
    std::cout << "Hello, Human!"<<std::endl;
}

// TODO: Call hello() from main()
int main(){
    Human h;
    hello(h);
}