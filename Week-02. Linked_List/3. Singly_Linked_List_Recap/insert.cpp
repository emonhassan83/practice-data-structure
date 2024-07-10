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

void print_linked_list(Node *head)
{
    Node *tmp = head;
    while (tmp != NULL)
    {
        cout << tmp->val << " ";
        tmp = tmp->next;
    }
    cout << endl;
}

int linked_list_size(Node *head)
{
    Node *tmp = head;

    int count = 0;
    while (tmp != NULL)
    {
        count++;
        tmp = tmp->next;
    }
    return count;
}

void insert_node(Node *head, int pos, int val)
{
    Node *newNode = new Node(val);
    Node *tmp = head;

    for (int i = 1; i <= pos - 1; i++)
    {
        tmp = tmp->next;
    } //* moved to insert position

    newNode->next = tmp->next;
    tmp->next = newNode;
}

void insert_head(Node *&head, int val)
{
    Node *newVal = new Node(val);

    newVal->next = head; //* newVal contain head address
    head = newVal;       //* now head is newVal
}

void insert_tail(Node *&head, Node *&tail, int val) //* O(1) complexity
{
    Node *newNode = new Node(val);
    if (head == NULL)
    {
        head = newNode;
        tail = newNode;
        return;
    }

    tail->next = newNode; //* connect to newNode to tail
    tail = newNode;       //* update tail
}

int main()
{
    Node *head = new Node(10);
    Node *a = new Node(20);
    Node *b = new Node(30);
    Node *c = new Node(40);
    Node *d = new Node(50);

    Node *tail = d;

    head->next = a;
    a->next = b;
    b->next = c;
    c->next = d;

    // cout << a->val << " " << b->val << endl;
    // cout << a->next->val << endl;

    // insert_node(head, 3, 100);
    print_linked_list(head);

    int pos, val;
    cin >> pos >> val;

    if (pos > linked_list_size(head))
        cout << "Invalid Index" << endl;
    else if (pos == 0)
        insert_head(head, val);
    else if (pos == linked_list_size(head))
        insert_tail(head, tail, val);
    else
        insert_node(head, pos, val);

    print_linked_list(head);
    return 0;
}