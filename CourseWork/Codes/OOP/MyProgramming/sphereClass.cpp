#include <cassert>
#include <cmath>
#include <stdexcept>
#include <math.h>

// TODO: Define class Sphere
class Sphere {
 public:
  // Constructor
    Sphere(int r):radius(r){};
  // Accessors
    int Radius();
    void Radius(int r){
      radius = r;  
    };
    float Volume();
 private:
  // Private members
    int radius;
    float volume; 
};

int Sphere::Radius(){
    return radius;
}
float Sphere::Volume(){
    return M_PI*4/3*(pow(Sphere::Radius(),3));
}

// Test
int main(void) {
  Sphere sphere(5);
  assert(sphere.Radius() == 5);
  assert(abs(sphere.Volume() - 523.6) < 1);
}