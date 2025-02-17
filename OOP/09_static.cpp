#include <iostream>
using namespace std;

void func()
{
    // int count = 0;
    static int count = 0;
    count++;
    cout << "count: " << count << endl;
}


class ABC
{
public:
    static int x;
    void incr()
    {
        x++;
    }
};
int ABC::x = 10;
int main()
{

    func();
    func();
    func();

    
    ABC a,b;
    a.incr();
    cout << a.x<<endl;
    cout << b.x<<endl;

    return 0;
}
