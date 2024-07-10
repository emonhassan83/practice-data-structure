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
    if (head == NULL)
    {
        head = newNode;
        return;
    }

    Node *tmp = head;
    while (tmp->next != NULL)
    {
        tmp = tmp->next;
    } //* reached end of node

    tmp->next = newNode; //* connected to last node to new node
    return;
}

void insert_at_head(Node *&head, int val)
{
    Node *newNode = new Node(val);
    if (head == NULL)
    {
        head = newNode;
        return;
    }

    newNode->next = head;
    head = newNode;
    return;
}

void insert_at_any(Node *&head, int pos, int val)
{
    if (pos == 1)
    {
        insert_at_head(head, val);
        return;
    }
    else
    {
        Node *newNode = new Node(val);
        Node *tmp = head;

        for (int i = 1; i < pos - 1; i++)
        {
            tmp = tmp->next;
        } //* previous new node

        newNode->next = tmp->next;
        tmp->next = newNode;
        return;
    }
}

void print_list(Node *head)
{
    Node *tmp = head;
    while (tmp != NULL)
    {
        cout << tmp->val << " ";
        tmp = tmp->next;
    }
}

int main()
{
    Node *head = NULL;
    while (1)
    {
        int val;
        cin >> val;

        if (val == -1)
        {
            break;
        }
        insert_at_tail(head, val);
        // insert_at_head(head, val);
    }
    print_list(head);
    cout << endl;

    int pos, val;
    cin >> pos >> val;

    insert_at_any(head, pos, val);
    print_list(head);
    return 0;
}