#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    cin.ignore();

    while (t--)
    {
        string s;
        getline(cin, s);

        stack<char> st;

        //* apply logic and poping the stack value
        for (char c : s)
        {
            if (c == '0' && !st.empty() && st.top() == '1')
                st.pop();
            else if (c == '1' && !st.empty() && st.top() == '0')
                st.pop();
            else
                st.push(c);
        }

        if (st.empty())
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }

    return 0;
}