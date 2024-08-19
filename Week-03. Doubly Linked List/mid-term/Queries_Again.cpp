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

    while (tmp)
    {
        cout << tmp->val << " ";
        tmp = tmp->prev;
    }
    cout << endl;
}

int get_list_size(Node *head)
{
    int size = 0;
    Node *tmp = head;

    while (tmp)
    {
        size++;
        tmp = tmp->next;
    }
    return size;
}

void insert(Node *&head, Node *&tail, int pos, int val)
{
    int size = get_list_size(head);

    if (pos < 0 || pos > size)
    {
        cout << "Invalid" << endl;
        return;
    }

    Node *newNode = new Node(val);

    if (head == NULL)
    { //* Insert into empty list
        head = newNode;
        tail = newNode;
    }
    else if (pos == 0)
    { //* Insert at the head
        newNode->next = head;
        head->prev = newNode;
        head = newNode;
    }
    else if (pos == size)
    { //* Insert at the tail
        tail->next = newNode;
        newNode->prev = tail;
        tail = newNode;
    }
    else
    { //* Insert at a specific position
        Node *tmp = head;
        for (int i = 0; i < pos - 1; ++i)
        {
            tmp = tmp->next;
        }

        newNode->next = tmp->next;
        newNode->prev = tmp;
        tmp->next->prev = newNode;
        tmp->next = newNode;
    }

    print_forward(head);
    print_reverse(tail);
}

int main()
{
    Node *head = NULL;
    Node *tail = NULL;

    int q;
    cin >> q;

    for (int i = 0; i < q; ++i)
    {
        int pos, val;
        cin >> pos >> val;
        insert(head, tail, pos, val);
    }

    return 0;
}
