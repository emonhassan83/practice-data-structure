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

void insert_at_position(Node *head, int pos, int val) //* O(N)
{
    Node *newNode = new Node(val);
    Node *tmp = head;

    for (int i = 1; i <= pos - 1; i++)
    {
        tmp = tmp->next;
    }

    newNode->next = tmp->next;     //* Connect newNode to the next node
    tmp->next = newNode;           //* Connect current node to newNode
    newNode->next->prev = newNode; //* Connect next node's prev to newNode
    newNode->prev = tmp;           //* Connect newNode's prev to the current node
}

void insert_head(Node *&head, Node *&tail, int val) //* O(1)
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

void insert_tail(Node *&head, Node *&tail, int val) //* O(1)
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

int main()
{
    Node *head = NULL;
    Node *tail = NULL;

    int q;
    cin >> q;
    while (q--)
    {
        int pos, val;
        cin >> pos >> val;
        int current_size = size(head);

        if (pos > current_size)
            cout << "Invalid" << endl;
        else if (pos == 0)
        {
            insert_head(head, tail, val);
            print_forward(head);
            print_reverse(tail);
        }
        else if (pos == current_size)
        {
            insert_tail(head, tail, val);
            print_forward(head);
            print_reverse(tail);
        }
        else
        {
            insert_at_position(head, pos, val);
            print_forward(head);
            print_reverse(tail);
        }
    }

    return 0;
}