#include <iostream>

using namespace std;

int main()
{


    //Integers - int,long,long long
    //Decimal Numbers - float,double
    //Characters and Strings - char , String

    //Numbers scale are not accurate just know that they are increasing
    short smallInt=24; //10^4
    int integer=1924; //10^9
    long bigInteger=10000000; //10^12
    long long verybigInteger=100000000000000;//10^18


    float floatingNum=19.243;
    double morePrecisefloatingNum=22.532434324;

    char ch='h';
    string str = "Hello World";
    cout<<str.length()<<endl;
    cout<<str.size()<<endl;
    cout<<str[str.size()-1]<<endl;

    cout << str;


    return 0;
}