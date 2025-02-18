#include <bits/stdc++.h>
using namespace std;
int main()
{

    // LIFO-LAST IN FIRST OUT
    /*
    Last element that goes into the stack will only be accessed first.
    */

    stack<int> st;
    st.push(5);
    st.push(57);
    st.push(7);
    st.push(34);
    st.push(88);
    st.push(7);
    while (st.size())
    {
        cout << st.top() << endl;
        st.pop();
    }
    cout<<st.empty();
    stack<int>st1,st2;

    st1.push(99);

    st1.swap(st);
    while (st1.size())
    {
        cout << st1.top() << endl;
        st1.pop();
    }

    return 0;
}