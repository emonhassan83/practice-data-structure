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

void insert_tail(Node *&head, Node *&tail, int val)
{
    Node *newNode = new Node(val);

    if (tail == NULL)
    {
        head = newNode;
        tail = newNode;
        return;
    }

    tail->next = newNode;
    newNode->prev = tail;
    tail = tail->next;
}

void print_forward(Node *head)
{
    Node *tmp = head;

    while (tmp != NULL)
    {
        cout << tmp->val << " ";
        tmp = tmp->next;
    }
    cout << endl;
}

void sort_doubly_linked_list(Node *head)
{
    if (head == NULL)
        return;

    Node *i = head;
    while (i != NULL)
    {
        Node *j = i->next;
        while (j != NULL)
        {
            if (i->val > j->val)
                swap(i->val, j->val);
                
            j = j->next;
        }
        i = i->next;
    }
}

int main()
{
    Node *head = NULL;
    Node *tail = NULL;

    int val;
    while (cin >> val && val != -1)
    {
        insert_tail(head, tail, val);
    }

    sort_doubly_linked_list(head);
    print_forward(head);

    return 0;
}
