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

void print_recursion(Node *node)
{
    //* base case
    if (node == NULL)
        return;

    cout << node->val << " ";
    print_recursion(node->next); //* recursive call
}

void print_recursion_rev(Node *node)
{
    //* base case
    if (node == NULL)
        return;

    print_recursion_rev(node->next); //* recursive call
    cout << node->val << " ";
}

int main()
{
    Node *head = new Node(10);
    Node *a = new Node(20);
    Node *b = new Node(30);
    Node *c = new Node(40);
    Node *d = new Node(50);

    head->next = a;
    a->next = b;
    b->next = c;
    c->next = d;

    print_recursion(head); //* recursion function call
    cout << endl;
    print_recursion_rev(head); //* recursion function call
    return 0;
}