#include <iostream>
#include <string>
using namespace std;

class Teacher
{

    // Access Modifier
public:
    // data & methods accessible outside the Class

    string name;
    string department;
    string subject;

    void showDetails()
    {
        cout << name << " " << department << " " << subject << " " << getSalary() << endl;
    }

    void changeDepartment(string s)
    {
        department = s;
    }
    // Setter
    void setSalary(int s)
    {
        salary = s;
    }
    // Getter
    int getSalary()
    {
        return salary;
    }

private:
    // data & methods can be accessible inside the Class
    int age;
    int salary;

protected:
    // data & methods can be access inside class & 5o its Class
};

int main()
{

    Teacher t1;
    t1.name = "Harry";
    t1.department = "CSE";
    t1.subject = "Algorithms";
    t1.setSalary(100000);

    t1.showDetails();

    return 0;
}