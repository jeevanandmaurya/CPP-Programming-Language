#include <iostream>

using namespace std;

// Call by value/copy
int sumNum(int a, int b)
{

    return a + b;
}

// Call by reference/address
void sqr(int &a)
{
    a = a * a;
}

int main()
{

    // call by value
    int a = 23, b = 34;
    int sum = sumNum(a, b);
    cout << sum<<endl;
    int c = 5;
    cout << c<<endl;
    sqr(c);

    cout << c;
    return 0;
}