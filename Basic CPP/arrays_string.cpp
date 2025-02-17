#include <iostream>

using namespace std;

int main()
{

    int arr[5]={34,45,43,545,666};
    float arrFloat[]={2.34,33.5,345.66};

    char ch='h';
    char chArr[5]={'a','b','c','d','e'};
 
    string str = "Hello World";

    cout<<str.length()<<endl;
    cout<<str.size()<<endl;
    cout<<str[str.size()-1]<<endl;

    cout << str<<endl;
  
    str=chArr[0];
    str+=chArr[1];

    cout <<str;

    return 1;
}