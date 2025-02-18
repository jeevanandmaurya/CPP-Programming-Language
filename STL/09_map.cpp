#include <bits/stdc++.h>
using namespace std;
int main()
{

    // Map - (unique Key,Value)

    map<int, int> mpp;
    map<int, pair<int, int>> mpp2;
    map<pair<int, int>, int> mpp3;

    mpp[1] = 2; // {1,2}
    mpp.emplace(2, 4);
    mpp.insert({3, 9});

    for (auto it : mpp)
    {
        cout << it.first << " " << it.second << endl;
    }

    mpp2[1] = {1, 1};
    mpp2[2] = {1, 2};
    mpp2[3] = {1, 3};

    for (auto it : mpp2)
    {
        cout << it.first << " " << it.second.first << " " << it.second.second << endl;
    }

    // MutiMap - (dupicate keys,value) and sorted
    // UnorderedMap - (unique keys,vale) not sorted
}