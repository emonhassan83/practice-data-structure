#include <iostream>
#include <vector>
using namespace std;

class myStack
{
public:
    vector<int> v;

    void push(int val)
    {
        v.push_back(val);
    }

    void pop()
    {
        if (!empty())
            v.pop_back();
    }

    int top()
    {
        if (!empty())
            return v.back();

        return -1; // or throw an exception
    }

    int size()
    {
        return v.size();
    }

    bool empty()
    {
        return v.size() == 0;
    }
};

bool areStacksEqual(myStack &s1, myStack &s2)
{
    myStack temp1, temp2;

    //* check if sizes are equal
    if (s1.size() != s2.size())
        return false;

    //* compare elements
    while (!s1.empty() && !s2.empty())
    {
        int val1 = s1.top();
        int val2 = s2.top();

        temp1.push(val1);
        temp2.push(val2);

        //* compare the top elements
        if (val1 != val2)
            return false;

        s1.pop();
        s2.pop();
    }

    //* restore the original stacks
    while (!temp1.empty())
    {
        s1.push(temp1.top());
        temp1.pop();
    }
    while (!temp2.empty())
    {
        s2.push(temp2.top());
        temp2.pop();
    }

    return true;
}

int main()
{
    myStack stack1, stack2;

    int n1, n2;
    cin >> n1;
    for (int i = 0; i < n1; i++)
    {
        int x;
        cin >> x;
        stack1.push(x);
    }

    cin >> n2;
    for (int i = 0; i < n2; i++)
    {
        int x;
        cin >> x;
        stack2.push(x);
    }

    if (areStacksEqual(stack1, stack2))
        cout << "YES" << endl;
    else
        cout << "NO" << endl;

    return 0;
}
