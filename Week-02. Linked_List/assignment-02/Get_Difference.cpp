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

void difference_min_max(Node *head)
{
    int min = INT_MAX;
    int max = INT_MIN;

    Node *tmp = head;
    while (tmp != NULL)
    {
        if (tmp->val < min)
            min = tmp->val;
        if (tmp->val > max)
            max = tmp->val;
        tmp = tmp->next;
    }
    cout << (max - min) << endl;
}

int main()
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

    if (head != NULL)
        difference_min_max(head);
    else
        cout << "0" << endl;

    return 0;
}