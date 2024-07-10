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

int search_linked_list(Node *head, int x)
{
    Node *tmp = head;
    int index = 0;
    while (tmp != NULL)
    {
        if (tmp->val == x)
        {
            return index;
        }
        tmp = tmp->next;
        index++;
    }
    return -1;
}

int main()
{
    int test;
    cin >> test;

    while (test--)
    {
        Node *head = NULL;
        Node *tail = NULL;

        int val;
        while (true) //* O(N) complexity
        {
            cin >> val;
            if (val == -1)
                break;
            insert_tail(head, tail, val); //* O(1) complexity
        }

        int x;
        cin >> x;

        int index = search_linked_list(head, x);
        cout << index << endl;
    }

    return 0;
}