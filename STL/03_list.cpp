
#include <bits/stdc++.h>
using namespace std;
int main()
{

    list<int> ls;
    ls.push_back(2);
    ls.emplace_back(3);
    ls.push_front(4);
    ls.emplace_front(9);

    for(int i:ls){
        cout<<i<<" ";
    }

    return 0;
}