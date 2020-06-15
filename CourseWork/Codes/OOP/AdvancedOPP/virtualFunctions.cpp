// Example solution for Shape inheritance
#include <assert.h>
#include <cmath>

// TODO: Define pi
#define PI 3.14159
// TODO: Define the abstract class Shape
  // TODO: Define public virtual functions Area() and Perimeter()
  // TODO: Append the declarations with = 0 to specify pure virtual functions
class Shape {
public:
    Shape(){}
    virtual double Area() const = 0;
    virtual double Perimeter() const = 0;
};
// TODO: Define Rectangle to inherit publicly from Shape
  // TODO: Declare public constructor
  // TODO: Override virtual base class functions Area() and Perimeter()
  // TODO: Declare private attributes width and height
class Rectangle : public Shape {
public:
    Rectangle(float w,float h) : width(w),height(h){}
    double Area() const {
        return (Width()*Height());
    }
    double Perimeter() const{
        return (2*Width()+2*Height());
    }
    double Width() const{
        return width;
    }
    double Height() const{
        return height;
    }
private:
    double width;
    double height;
};
// TODO: Define Circle to inherit from Shape
  // TODO: Declare public constructor
  // TODO: Override virtual base class functions Area() and Perimeter()
  // TODO: Declare private member variable radius
class Circle : public Shape {
public:
    Circle(){};
    double Area() const {}
    double Perimeter() const {}
private:
    double radius;
};
// Test in main()
int main() {
  double epsilon = 0.1; // useful for floating point equality

  // Test circle
  /*Circle circle(12.31);
  assert(abs(circle.Perimeter() - 77.35) < epsilon);
  assert(abs(circle.Area() - 476.06) < epsilon);
    */
  // Test rectangle
  Rectangle rectangle(10, 6);
  assert(rectangle.Perimeter() == 32);
  assert(rectangle.Area() == 60);
}