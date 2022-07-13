#include <iostream>

class Shape {
public:
    void draw_shape(Shape* shape_ptr){
        shape_ptr->draw();
    }

    void draw_shape(const Shape& shape){
        shape.draw();
    }
private:
    virtual void draw() const = 0;

};

class Circle : public Shape {
public:
    void draw() const;
};

void Circle::draw() const{
    std::cout<< "Hello Circle";
}

class Rectangle : public Shape {
public:
    void draw() const;
};

void Rectangle::draw() const{
    std::cout<< "Hello Rectangle";
}

class Oval : public Shape {
public:
    void draw() const;
};

void Oval::draw() const{
    std::cout<< "Hello Oval";
}

int main(){
    Circle c;
    Rectangle r;
    Oval o;
    Shape* shape_ptr = &c;
    shape_ptr->draw();
    std::cout << std::endl;

    shape_ptr = &r;
    shape_ptr->draw();
    std::cout << std::endl;

    shape_ptr = &o;
    shape_ptr->draw();
    std::cout << std::endl;


    return 0;
}