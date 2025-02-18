#include <bits/stdc++.h>
using namespace std;
int main()
{

    //Set - Stores in sorted order and contains unique elements;
    //Its not liear,its trees structure

    set<int> st;
    st.insert(10);
    st.emplace(7);
    st.emplace(8);
    st.emplace(9);
    st.emplace(10);
    st.insert(88);
    st.insert(50);//{7.10,50,88}
    
    //begin,end,ebegin,rend ... same as vector
    auto it1 = st.find(7);
    auto it2 = st.find(10);
    st.erase(88);
    st.erase(it1,it2);

    for(auto i:st){
        cout<<i<<endl;
    }


    //Unordered Set - Not Sorted, Random but Unique 
    unordered_set<int> us;
    us.insert(110);
    us.insert(110);
    us.insert(17);
    us.insert(18);
    us.insert(19);

    for(auto i:us){
        cout<<i<<endl;
    }

    //MultiSet - Sorted order but not unique
    multiset<int> ms;
    
    ms.insert(10);
    ms.insert(10);
    ms.insert(10);
    ms.insert(10);

    for(auto i:st){
        cout<<i<<endl;
    }


    return 0;
}