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
    print_recursion(node->next);
}

void print_reverse(Node *node)
{
    //* base case
    if (node == NULL)
        return;

    print_reverse(node->next);
    cout << node->val << " ";
}

void print(Node *head)
{
    Node *tmp = head;
    while (tmp != NULL)
    {
        cout << tmp->val << " ";
        tmp = tmp->next;
    }
    cout << endl;
}

void reverse(Node *&head, Node *cur)
{
    if (cur->next == NULL) //* base case
    {
        head = cur;
        return;
    }
    reverse(head, cur->next); //* recursive call

    cur->next->next = cur;
    cur->next = NULL;
}

int main()
{
    Node *head = new Node(10);
    Node *a = new Node(20);
    Node *b = new Node(30);
    Node *c = new Node(40);

    head->next = a;
    a->next = b;
    b->next = c;

    // print_recursion(head);
    // cout << endl;
    // print_reverse(head);

    reverse(head, head);
    print(head);
    return 0;
}