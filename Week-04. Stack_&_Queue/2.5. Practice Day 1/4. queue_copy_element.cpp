#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;

    queue<int> originalQueue;
    stack<int> tempStack;
    queue<int> reversedQueue;

    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;

        originalQueue.push(x);
    }

    //* Transfer elements from the queue to the stack to reverse their order
    while (!originalQueue.empty())
    {
        tempStack.push(originalQueue.front());
        originalQueue.pop();
    }

    //* Transfer elements from the stack to the new queue
    while (!tempStack.empty())
    {
        reversedQueue.push(tempStack.top());
        tempStack.pop();
    }

    //* Print the reversed queue
    while (!reversedQueue.empty())
    {
        cout << reversedQueue.front() << " ";
        reversedQueue.pop();
    }

    cout << endl;

    return 0;
}