#include <iostream>
using namespace std;

class Car
{
private:
    string brand;
    string mode;
    int speed;

public:
    // Parameterized constructor
    Car(string brand, int speed, string m)
    {
        cout << "Car object created!" << endl;
        mode = m;
        (*this).speed = speed;
        this->brand = brand;
    }

    // Copy constructor
    Car(const Car &c)
    {
        cout<<"I am Copy Constructor"<<endl;
        brand = c.brand;
        speed=c.speed;
        mode=c.mode;
    }
    //ShallowCopy vs DeepCopy
    // Shallow Copy: Copies only the address of dynamically allocated memory, 
    // leading to shared memory between objects.
    // Deep Copy: Copies the actual data, ensuring each object has its own independent copy of the memory.

    ~Car()
    { // Destructor
        cout << "Car object destroyed!" << endl;
    }

    void display()
    {
        cout << "Car Brand: " << brand << ", Speed: " << speed << " km/h" << ", Mode: " << mode << endl;
    }
};

int main()
{
    Car car1("Toyota", 180, "auto");
    car1.display();

    Car car2("BMW", 220, "auto");
    car2.display();

    cout<<"\n\n";
    Car car3(car1);
    car3.display();

    return 0;
}
