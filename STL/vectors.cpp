#include <iostream>
#include<vector>
using namespace std;
int main()
{


    int arr[5]={1,2,3,4,5}; //Constant Size

    vector<int> v; //Dynamic Size
    v.push_back(10);
    v.push_back(12);
    v.push_back(13);
    v.emplace_back(2);//faster than push back

    for (int i : v)
    {
        cout<<i<<" ";
    }


    //Pair in Vector
    vector<pair<int,int>> pairs;
    pairs.push_back({1,2});
    pairs.emplace_back(3,4);//Automatically assumes it as pair not two elements
    
    
    for (pair i : pairs)
    {
        cout<<i.first<<" "<<i.second<<" ";
    }

    //Vector with initial values
    vector<int> array(5);//{0,0,0,0,0}
    for (int i : array)
    {
        cout<<i<<" ";
    }
    vector<int> array2(5,10);//{10,10,10,10,10}
    for (int i : array2)
    {
        cout<<i<<" ";
    }
    
    return 0;
}