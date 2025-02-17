#include <iostream>


using namespace std;

int main()
{

    for (int i = 0; i < 10; i++)
    {
        cout << "Hello World"<<endl;
    }
    
    int j=0;
    while (j<10)
    {
        cout << "Hello World Again"<<endl;
        j++;
    }
    

    int k=1;
    do
    {
         cout << "Hello,My friend"<<endl;
         k++;
        
    } while (k>1 && k<=10);
    
    

    return 0;
}