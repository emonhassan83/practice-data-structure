#include <bits/stdc++.h>
using namespace std;

bool areStackAndQueueEqual(stack<int> s, queue<int> q)
{
    //* check if sizes are equal
    if (s.size() != q.size())
        return false;

    //* compare elements
    while (!s.empty() && !q.empty())
    {
        if (s.top() != q.front())
            return false;
        
        s.pop();
        q.pop();
    }

    return true;
}

int main()
{
    int n, m;

    cin >> n;
    stack<int> s;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        s.push(x);
    }

    cin >> m;
    queue<int> q;
    for (int i = 0; i < m; i++)
    {
        int x;
        cin >> x;
        q.push(x);
    }

    if (areStackAndQueueEqual(s, q))
        cout << "YES" << endl;
    else
        cout << "NO" << endl;

    return 0;
}