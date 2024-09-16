#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;

    stack<int> originalStack;
    stack<int> auxiliaryStack;

    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;

        originalStack.push(x);
    }

    //* transfer elements from the original stack to the auxiliary stack
    while (!originalStack.empty())
    {
        auxiliaryStack.push(originalStack.top());
        originalStack.pop();
    }

    //* transfer elements back to the original stack and print them
    while (!auxiliaryStack.empty())
    {
        cout << auxiliaryStack.top() << " ";

        originalStack.push(auxiliaryStack.top());
        auxiliaryStack.pop();
    }

    cout << endl;

    return 0;
}