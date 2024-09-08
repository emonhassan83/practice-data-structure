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

void insert_tail(Node *&head, Node *&tail, int val)
{
    Node *newNode = new Node(val);
    if (head == NULL)
    {
        head = newNode;
        tail = newNode;
        return;
    }

    tail->next = newNode; //* Connect newNode to the current tail
    tail = newNode;       //* Update tail to the new node
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
    Node *head = NULL;
    Node *tail = NULL;
    int val;

    //* Input the first linked list
    while (true)
    {
        cin >> val;
        if (val == -1)
            break;
        insert_tail(head, tail, val);
    }

    print_recursion_rev(head); //* recursion function call
    return 0;
}