#include <bits/stdc++.h>
using namespace std;
int main()
{

    // FIFO-FIRST IN FIRST OUT
    //KIND of LIKE WAITING LINE 
    /*
    Last element that goes into the stack will only be accessed first.
    */

     //Push-O(logN)
     //Top-O(1)
     //Pop-O(logN)

    //Maximum Heap
    priority_queue<int> pq;
    pq.push(5); // {5}
    pq.push(57); // {5,57}
    pq.push(7); // {5,57,7}
    pq.emplace(4); // {5,57,7,4}
    //It seems sorted and linear but its not linear, its trees
    while (pq.size())
    {
        cout << pq.top() << endl;//prints largest
        pq.pop();//pops largest
    }

    //Minimum Heap
    priority_queue<int,vector<int>,greater<int>> pq2;
    pq2.push(5); // {5}
    pq2.push(57); // {5,57}
    pq2.push(7); // {5,57,7}
    pq2.emplace(4); // {5,57,7,4}
    //It seems sorted and linear but its not linear, its trees
    while (pq2.size())
    {
        cout << pq2.top() << endl;//prints largest
        pq2.pop();//pops largest
    }
    

    return 0;
}