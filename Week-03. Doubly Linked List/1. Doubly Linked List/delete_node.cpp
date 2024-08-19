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

void print_forward(Node *head) //* O(N)
{
    Node *tmp = head;
    while (tmp != NULL)
    {
        cout << tmp->val << " ";
        tmp = tmp->next;
    }
    cout << endl;
}

void print_reverse(Node *tail) //* O(N)
{
    Node *tmp = tail;
    while (tmp != NULL)
    {
        cout << tmp->val << " ";
        tmp = tmp->prev;
    }
    cout << endl;
}

int size(Node *head) //* O(N)
{
    Node *tmp = head;
    int cnt = 0;
    while (tmp != NULL)
    {
        cnt++;
        tmp = tmp->next;
    }
    return cnt;
}

void delete_at_position(Node *head, int pos) //* O(N)
{
    Node *tmp = head;
    for (int i = 1; i <= pos - 1; i++)
    {
        tmp = tmp->next;
    }

    Node *deleteNode = tmp->next; //* copy the delete node

    tmp->next = tmp->next->next; //* tmp next connect delete after node
    tmp->next->prev = tmp;       //* tmp after deleteNode node connect tmp
    delete deleteNode;           //* finally delete node
}

void delete_tail(Node *&head, Node *&tail) //* O(1)
{
    Node *deleteNode = tail; //* cpy delete Node

    tail = tail->prev; //* tail move to tail prev
    delete deleteNode; //* delete copy node

    if (tail == NULL)
    {
        head = NULL;
        return;
    }
    tail->next = NULL; //* set tail next to null
}

void delete_head(Node *&head, Node *&tail) //* O(1)
{
    Node *deleteNode = head;

    head = head->next; //* move head to next
    delete deleteNode; //* delete head

    if (head == NULL)
    {
        tail = NULL;
        return;
    }
    head->prev = NULL; //* set new head prev to null
}

int main()
{
    Node *head = new Node(10);
    Node *a = new Node(20);
    Node *b = new Node(30);
    Node *c = new Node(40);
    Node *tail = c;

    //* connection
    head->next = a;
    a->prev = head;
    a->next = b;
    b->prev = a;
    b->next = c;
    c->prev = b;

    int pos;
    cin >> pos;

    if (pos >= size(head))
        cout << "Invalid" << endl;
    else if (pos == 0)
        delete_head(head, tail);
    else if (pos == size(head) - 1)
        delete_tail(head, tail);
    else
        delete_at_position(head, pos);

    print_forward(head);
    print_reverse(tail);
    return 0;
}