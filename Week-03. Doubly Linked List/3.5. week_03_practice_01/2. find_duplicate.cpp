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

void insert_at_tail(Node *&head, int val)
{
    Node *newNode = new Node(val);

    //* for special case
    if (head == NULL)
    {
        head = newNode;
        return;
    }

    Node *tmp = head;
    while (tmp->next != NULL)
    {
        tmp = tmp->next;
    } //* now tmp position is last node

    //* connect last now tail to new node
    tmp->next = newNode;
}

bool is_duplicate(Node *head)
{
    int feq[101] = {0}; //* array to store frequencies of values

    Node *tmp = head;
    while (tmp != NULL)
    {
        feq[tmp->val]++; //* Increment the frequency of the current value
        if (feq[tmp->val] > 1)
        {
            return true;
        }
        tmp = tmp->next;
    }
    return false;
}

int main()
{
    int val;
    Node *head = NULL;

    while (true)
    {
        cin >> val;
        if (val == -1)
            break;

        insert_at_tail(head, val);
    }

    if (is_duplicate(head))
        cout << "YES" << endl;
    else
        cout << "NO" << endl;

    return 0;
}