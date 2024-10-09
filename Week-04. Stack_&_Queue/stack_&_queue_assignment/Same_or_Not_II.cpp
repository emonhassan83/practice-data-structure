#include <bits/stdc++.h>
using namespace std;
class myStack
{
public:
    list<int> l;

    void push(int val)
    {
        l.push_back(val);
    }

    void pop()
    {
        l.pop_back();
    }

    int top()
    {
        return l.back();
    }

    int size()
    {
        return l.size();
    }

    bool empty()
    {
        if (l.size() == 0)
            return true;
        else
            return false;
    }
};

class myQueue
{
public:
    list<int> l;

    void push(int val)
    {
        l.push_back(val);
    }

    void pop()
    {
        l.pop_front();
    }

    int front()
    {
        return l.front();
    }

    int size()
    {
        return l.size();
    }

    bool empty()
    {
        if (l.size() == 0)
            return true;
        else
            return false;
    }
};

int main()
{
    int n, m;
    cin >> n >> m;

    myStack s;
    myQueue q;

    for (int i = 0; i < n; i++)
    {
        int val;
        cin >> val;
        s.push(val);
    }

    for (int i = 0; i < m; i++)
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