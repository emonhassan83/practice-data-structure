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
    tail->next = newNode; //* connect tail next to newNode
    newNode->prev = tail; //* connect newNode prev to tail

    tail = tail->next; //* update tail
}

bool is_palindrome(Node *head, Node *tail)
{
    while (head != NULL && tail != NULL)
    {
        if (head->val != tail->val)
            return false;

        head = head->next;
        tail = tail->prev;
    }
    return true;
}

int main()
{
    Node *head = NULL;
    Node *tail = NULL;

    int val;
    while (true)
    {
        cin >> val;

        if (val == -1)
            break;
        insert_tail(head, tail, val);
    }

    if (is_palindrome(head, tail))
        cout << "YES" << endl;
    else
        cout << "NO" << endl;

    return 0;
}