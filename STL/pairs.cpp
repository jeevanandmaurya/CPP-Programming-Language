#include <bits/stdc++.h>
using namespace std;
int main()
{

    pair<int, int> p = {1, 3};
    cout << p.first << " " << p.second << endl;

    pair<int, pair<int, int>> p3 = {1, {3, 4}};
    cout << p3.first << " " << p3.second.first << " " << p3.second.second << endl;

    pair<int, int> arr[] = {{1, 2}, {3, 4}, {5, 6}};
    cout << arr[2].first << " " << arr[2].second;

    return 0;
}