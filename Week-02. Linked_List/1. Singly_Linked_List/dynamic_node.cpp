#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
    int val;
    Node *next;

    Node(int val)
    {
        this->val = val;
        this->next = NULL;
    }
};
int main()
{
    // Node head(10); //* normal node
    Node *head = new Node(10); //* dynamic node
    Node *a = new Node(20);

    head->next = a;

    cout << head->val << " " << a->val << endl;
    cout << head->val << " " << head->next->val << endl; //* -> (*(*head).next).value
    return 0;
}