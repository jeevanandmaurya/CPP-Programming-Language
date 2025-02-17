// Encapsulation
//  It is Wrapping up of data & member functions in a single unit called class

// It refers to the practice of bundling data (variables) and methods (functions)
// that operate on the data into a single unit, typically a class,
// while restricting direct access to some of the object's details.
/*
Data Hiding: Prevents direct access to the internal state of an object. Instead,
 access is controlled using getter and setter methods.
*/

#include <iostream>
#include <string>
using namespace std;

class Account
{

public:
    string accountID;
    string username;

private:
    double balance;
    string password;



};

int main()
{

Account a1;

    return 0;
}
