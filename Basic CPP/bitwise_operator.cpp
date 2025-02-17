#include <iostream>
using namespace std;


int main()
{

   
    int a = 5;  // Binary: 0101
    int b = 3;  // Binary: 0011
    cout<<"a = "<<a<<" b = "<<b<<endl;
    int result;
     // AND(&)
    result = a & b; // Result: 0001 (Decimal: 1)
    cout << "a & b = " << result << endl;

    // OR(|)
    result = a | b; // Result: 0111 (Decimal: 7)
    cout << "a | b = " << result << endl;

    // XOR(^)
    //Diff->1 Same->0
    result = a ^ b; // Result: 0110 (Decimal: 6)
    cout << "a ^ b = " << result << endl;

    //NOT(~)
    //Unary Bitwise Operator
    //1->0 0->1
    unsigned int c=5;
    int d=5;
    cout << "unsigned ~c= " << ~c << endl;
    cout<<"signed ~d= "<<~d<<endl;

    //LEFTSHIFT(<<)
    result = b<<2; // Result: 1100 (Decimal: 12)
    cout << "b<<2= " << result << endl;
    
    //RIGHTSHIFT(>>)
    result = b>>2; // Result: 0000 (Decimal: 0)
    cout << "b>>2= " << result << endl;



    return 0;
}