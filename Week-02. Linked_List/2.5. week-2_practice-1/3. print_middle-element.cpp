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

void insert_at_tail(Node *&head, int val)
{
    Node *newNode = new Node(val);

    //* for special case
    if (head == NULL)
    {
        head = newNode;
        return;
    }

    Node *tmp = head;
    while (tmp->next != NULL)
    {
        tmp = tmp->next;
    } //* now tmp position is last node

    //* connect last now tail to new node
    tmp->next = newNode;
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

    //* traverse to the middle of the list
    for (int i = 1; i < (size + 1) / 2; i++)
        tmp = tmp->next;

    //* if the size is odd, print the single middle element
    if (size % 2 != 0)
        cout << tmp->val << endl;
    //* if the size is even, print both middle elements
    else
        cout << tmp->val << " " << tmp->next->val << endl;
}

int main()
{
    int val;
    Node *head = NULL;

    while (true)
    {
        cin >> val;
        if (val == -1)
            break;

        insert_at_tail(head, val);
    }
    print_middle(head);

    return 0;
}