#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int val;
    Node *next;
    Node *prev;

    Node(int val)
    {
        this->val = val;
        this->next = NULL;
        this->prev = NULL;
    }
};

void print_forward(Node *head)
{
    cout << "L -> ";
    Node *tmp = head;
    while (tmp != NULL)
    {
        cout << tmp->val << " ";
        tmp = tmp->next;
    }
    cout << endl;
}

void print_reverse(Node *tail)
{
    cout << "R -> ";
    Node *tmp = tail;
    while (tmp != NULL)
    {
        cout << tmp->val << " ";
        tmp = tmp->prev;
    }
    cout << endl;
}

int list_size(Node *head)
{
    int size = 0;
    Node *tmp = head;
    while (tmp != NULL)
    {
        size++;
        tmp = tmp->next;
    }
    return size;
}

void insert_head(Node *&head, Node *&tail, int val)
{
    Node *newNode = new Node(val);
    if (head == NULL)
    {
        head = newNode;
        tail = newNode;
    return;
    }
    newNode->next = head; //* connect newNode next to head
    head->prev = newNode; //* connect newNode prev to head

    head = newNode; //* update to head
}

void insert_tail(Node *&head, Node *&tail, int val)
{
    Node *newNode = new Node(val);
    if (tail == NULL)
    {
        head = newNode;
        tail = newNode;
    return;
    }
    tail->next = newNode; //* connect tail next to newNode
    newNode->prev = tail; //* connect newNode prev to tail

    tail = tail->next; //* update tail
}

void insert_at_position(Node *&head, Node *&tail, int pos, int val)
{
    Node *newNode = new Node(val);
    Node *tmp = head;

    for (int i = 1; i <= pos - 1; i++)
    {
        tmp = tmp->next;
    }

    newNode->next = tmp->next;
    tmp->next = newNode;
    newNode->next->prev = newNode;
    newNode->prev = tmp;
}

int main()
{
    Node *head = NULL;
    Node *tail = NULL;

    int q;
    cin >> q;

    for (int i = 0; i < q; i++)
    {
        int pos, val;
        cin >> pos >> val;

        int size = list_size(head);
        if (pos < 0 || pos > size)
        {
            cout << "Invalid" << endl;
        }
        else if (pos == 0)
        {
            insert_head(head, tail, val);
            print_forward(head);
            print_reverse(tail);
        }
        else if (pos == size)
        {
            insert_tail(head, tail, val);
            print_forward(head);
            print_reverse(tail);
        }
        else
        {
            insert_at_position(head, tail, pos, val);
            print_forward(head);
            print_reverse(tail);
        }
    }

    return 0;
}
