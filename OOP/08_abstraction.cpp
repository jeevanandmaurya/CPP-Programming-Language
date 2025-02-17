#include <iostream>
using namespace std;

// Abstract class
class Shape {
public:
    virtual void draw() = 0; // Pure virtual function (must be overridden)
    
    void info() { // Concrete function
        cout << "This is a shape." << endl;
    }
};

// Derived class
class Circle : public Shape {
public:
    void draw() override { // Implementing the abstract function
        cout << "Drawing a Circle" << endl;
    }
};

class Square : public Shape {
public:
    void draw() override {
        cout << "Drawing a Square" << endl;
    }
};

int main() {
    // Shape obj; ❌ ERROR: Cannot create an object of an abstract class

    Shape* shape1 = new Circle(); // ✅ Allowed (polymorphism)
    Shape* shape2 = new Square();

    shape1->draw(); // Output: Drawing a Circle
    shape2->draw(); // Output: Drawing a Square

    delete shape1;
    delete shape2;

    return 0;
}
