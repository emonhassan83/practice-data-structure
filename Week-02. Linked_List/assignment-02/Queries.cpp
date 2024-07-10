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

void insert_at_head(Node *&head, Node *&tail, int val)
{
    Node *newNode = new Node(val);

    if (head == NULL) //* if head is NULL
    {
        head = newNode;
        tail = newNode;
    }
    else
    {
        newNode->next = head;
        head = newNode;
    }
}

void insert_at_tail(Node *&head, Node *&tail, int val)
{
    Node *newNode = new Node(val);

    if (head == NULL) //* if head is NULL
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

void delete_at_index(Node *&head, Node *&tail, int pos)
{
    if (pos == 0 && head != NULL)
    {
        Node *temp = head;
        head = head->next;

        if (head == NULL)
            tail = NULL;

        delete temp;
        return;
    }

    Node *temp = head;
    for (int i = 0; i < pos - 1 && temp != NULL; ++i)
    {
        temp = temp->next;
    } //* moved in temp

    if (temp != NULL && temp->next != NULL)
    {
        Node *deleteNode = temp->next;
        temp->next = temp->next->next;

        if (temp->next == NULL)
            tail = temp;

        delete deleteNode;
    }
}

void print_linked_list(Node *head)
{
    Node *tmp = head;
    while (tmp != NULL)
    {
        cout << tmp->val << " ";
        tmp = tmp->next;
    }
    cout << endl;
}

int main()
{
    Node *head = NULL;
    Node *tail = NULL;

    int query;
    cin >> query;

    while (query--)
    {
        int x, v;
        cin >> x >> v;

        if (x == 0)
            insert_at_head(head, tail, v);
        else if (x == 1)
            insert_at_tail(head, tail, v);
        else if (x == 2)
            delete_at_index(head, tail, v);

        print_linked_list(head);
    }

    return 0;
}