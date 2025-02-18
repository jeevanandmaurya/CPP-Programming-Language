#include <bits/stdc++.h>
using namespace std;
int main()
{

    // FIFO-FIRST IN FIRST OUT
    //KIND of LIKE WAITING LINE 
    /*
    Last element that goes into the stack will only be accessed first.
    */

    queue<int> qu;
    qu.push(5); // {5}
    qu.push(57); // {5,57}
    qu.push(7); // {5,57,7}
    qu.emplace(4); // {5,57,7,4}
    while (qu.size())
    {
        cout << qu.front() << endl;
        qu.pop();//pops front
    }
    

    return 0;
}