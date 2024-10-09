#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, m;
    cin >> n >> m;

    stack<int> s;
    queue<int> q;

    for (int i = 0; i < n; ++i)
    {
        int val;
        cin >> val;
        s.push(val);
    }

    for (int i = 0; i < m; ++i)
    {
        int val;
        cin >> val;
        q.push(val);
    }

    bool areSame = true;
    //* compare elements by popping from stack and queue
    while (!s.empty() && !q.empty())
    {
        if (s.top() != q.front())
        {
            areSame = false;
            break;
        }
        s.pop();
        q.pop();
    }

    //* If both are not empty, they are not the same
    if (!s.empty() || !q.empty())
        areSame = false;

    if (areSame)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;

    return 0;
}