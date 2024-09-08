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

void insert_at_tail(Node *&head, Node *&tail, int val)
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

int list_size(Node *head)
{
    int sz = 0;
    Node *tmp = head;
    while (tmp != NULL)
    {
        sz++;
        tmp = tmp->next;
    }
    return sz;
}

void print_middle(Node *head)
{
    int size = list_size(head);
    Node *tmp = head;

    for (int i = 1; i < (size + 1) / 2; i++)
    {
        tmp = tmp->next;
    }

    if (size % 2 != 0)
        cout << tmp->val << endl;
    else
        cout << tmp->val << " " << tmp->next->val << endl;
}

int main()
{
    int val;
    Node *head = NULL;
    Node *tail = NULL;

    while (true)
    {
        cin >> val;
        if (val == -1)
            break;
        insert_at_tail(head, tail, val);
    }

    print_middle(head);

    return 0;
}