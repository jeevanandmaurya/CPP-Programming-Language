#include <bits/stdc++.h>

using namespace std;

bool comp(pair<int, int> p1, pair<int, int> p2)
{

    if (p1.second < p2.second)
        return true;
    if (p1.second > p2.second)
        return false;
    if (p1.first > p2.first)
        return true;
    return false;
}

int main()
{

    // Sorting
    vector<int> arr = {24, 5, 497, 8, 5, 0, 44};
    for (auto i : arr)
    {
        cout << i << " ";
    }
    // Increasing Order
    cout << "\n";
    sort(arr.begin(), arr.end());
    for (auto i : arr)
    {
        cout << i << " ";
    }
    // Decreasing order
    sort(arr.begin(), arr.end(), greater<int>());

    // Sort According to Second Element
    // if Second is same , sort acc First but in descending
    vector<pair<int, int>> p = {{1, 2}, {1, 4}, {3, 5}, {1, 1}};

    sort(p.begin(), p.end(), comp);

    cout << "\n";
    for (auto i : p)
    {
        cout << i.first << " " << i.second << endl;
    }

    // Binary
    int num = 7;
    // Binary - 0000000....00111
    cout << "\n"
         << __builtin_popcount(num);
    long long num2 = 56835435465;
    cout << "\n"
         << __builtin_popcountll(num2);

    // Permutation
    string str = "123";
    //Start from sorted postion so that we can get all possible permutation
    // 123 132 213 231 312 312
    do
    {
        cout << str << endl;
    } while (next_permutation(str.begin(), str.end()));
    
    //MaxElement
    int m=max_element(10,20);

    return 0;
}