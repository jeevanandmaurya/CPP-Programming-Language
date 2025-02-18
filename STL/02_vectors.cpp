#include <iostream>
#include<vector>
using namespace std;
int main()
{


    int arr[5]={1,2,3,4,5}; //Constant Size

    vector<int> v; //Dynamic Size
    v.push_back(7);
    v.push_back(8);
    v.push_back(9);
    v.emplace_back(2);//faster than push back

  

    //Pair in Vector
    vector<pair<int,int>> pairs;
    pairs.push_back({1,2}); 
     for (int i : v)
    {
        cout<<i<<" ";
    }

    pairs.emplace_back(3,4);//Automatically assumes it as pair not two elements
    
    
    for (pair i : pairs)
    {
        cout<<i.first<<" "<<i.second<<" ";
    }

    cout<<"\n";
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


    cout<<"\n";
    //Iterator to access elements(ptr address)
    vector<int>::iterator it;
    it=v.begin();
    it++;
    cout<<*(it)<<" ";
    

    cout<<"\n";
    ///
    for (int i : v)
    {
        cout<<i<<" ";
    }
    cout<<"\n";
    //Erase
    v.erase(it);
    for (int i : v)
    {
        cout<<i<<" ";
    }

    //Insert
    cout<<"\n";
    v.insert(v.begin(),3,98);//Inserting (98,98,98) Elements
    v.insert(v.begin(),array2.begin(),array2.end());
    for (int i : v)
    {
        cout<<i<<" ";
    }


    //Size of Vector
    int n=v.size();
    //Swap 
    array.swap(array2);
    //POPBack
    v.pop_back();//Removes Last Elements

    v.clear();//Clears Vector
    cout<<v.empty()<<endl; 
 




    return 0;
}