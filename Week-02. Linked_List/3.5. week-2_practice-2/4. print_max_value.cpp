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

void insert_at_tail(Node *&head, Node *&tail, int val)
{
    Node *newNode = new Node(val);

    if (head == NULL)
    {
        head = newNode;
        tail = newNode;
    }
    else
    {
        tail->next = newNode;
        tail = newNode;
    }
}

int find_max(Node *head)
{
    if (head == NULL)
        return INT_MIN; //* Handle empty list case

    int maxVal = head->val;
    Node *tmp = head;

    while (tmp != NULL)
    {
        if (tmp->val > maxVal)
        {
            maxVal = tmp->val;
        }
        tmp = tmp->next;
    }

    return maxVal;
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
        insert_at_tail(head, tail, val);
    }

    int maxVal = find_max(head);
    cout << maxVal << endl;

    return 0;
}
