/*
class BaseClass {
    // Base class members
};

class DerivedClass : accessSpecifier BaseClass {
    // Derived class members
};

*/
#include <iostream>
using namespace std;

class Animal
{
public:
    void eat()
    {
        cout << "Animal is eating." << endl;
    }
};

// class Mammal : public Animal {
//     public:
//         void breathe() { cout << "Mammal is breathing." << endl; }
//     };

class Mammal
{
public:
    void breathe() { cout << "Mammal is breathing." << endl; }
};

// class Dog : public Mammal{ // Dog inherits from Animal
// public:
//     void bark() {
//         cout << "Dog is barking." << endl;
//     }
// };

class Dog : public Mammal, public Animal
{ // Dog inherits from Animal AND Mammals
public:
    void bark()
    {
        cout << "Dog is barking." << endl;
    }
};

int main()
{
    Dog myDog;
    myDog.breathe(); // Inherited from Mammal
    myDog.eat();     // Inherited from Animal
    myDog.bark();    // Own method

    return 0;
}
