/*
Types of Polymorphism in C++
->Compile-time (Static) Polymorphism
   ->Function Overloading
   ->Operator Overloading
->Runtime (Dynamic) Polymorphism
   ->Method Overriding (using virtual functions)
*/

#include <iostream>
using namespace std;


//Static POLYMORPHISM

class Math
{
public:
    void add(int a, int b)
    {
        cout << "Sum: " << a + b << endl;
    }

    void add(double a, double b)
    { // Different parameter types
        cout << "Sum (double): " << a + b << endl;
    }

    void add(int a, int b, int c)
    { // Different number of parameters
        cout << "Sum of three: " << a + b + c << endl;
    }
};

class Complex
{
public:
    int real, imag;

    Complex(int r, int i)
    {
        real = r;
        imag = i;
    }

    // Overloading + operator
    Complex operator+(const Complex &c)
    {
        return Complex(real + c.real, imag + c.imag);
    }
    // Overloading - operator
    Complex operator-(const Complex &c)
    {
        return Complex(real - c.real, imag - c.imag);
    }
    // Overloading x operator
    Complex operator*(const Complex &c)
    {
        return Complex(real * c.real- imag* c.imag,real * c.imag+imag*c.real);
    }
    

    void display()
    {
        cout << real << " + " << imag << "i" << endl;
    }
};



//Dynamic POLYMORPHISM
//Override
class Parent
{
public:
    virtual void getInfo(){
        cout<<"This is Parent Class ";
    }
};

class child: public Parent{

public:
    void getInfo() override {
        cout<<"This is Child Class";
    }


};





int main()
{
    Math obj;
    obj.add(5, 10);
    obj.add(2.5, 3.5);
    obj.add(1, 2, 3);

    Complex c1(3, 4), c2(1, 2);
    c1.display();
    c2.display();
    Complex c3(0,0);
    
    c3 = c1 + c2; // Calls overloaded + operator
    c3.display();
    c3 = c1 - c2; // Calls overloaded - operator
    c3.display();
    c3 = c1 * c2; // Calls overloaded * operator
    c3.display();

    //Dynamic Polymorphism
    child ch1;
    ch1.getInfo();

    return 0;
}
