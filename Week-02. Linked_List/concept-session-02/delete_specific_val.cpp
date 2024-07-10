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

void delete_val(Node *&head, int x)
{
    if (head->val == x)
    {
        Node *deleteNode = head;
        head = head->next;
        delete deleteNode;
        return;
    }

    Node *tmp = head;
    while (tmp->next != NULL)
    {
        if (tmp->next->val == x)
        {
            Node *deleteNode = tmp->next;
            tmp->next = tmp->next->next;
            delete deleteNode;
            break;
        }

        tmp = tmp->next;
    }
    cout << endl;
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

    int x;
    cin >> x;

    delete_val(head, x);

    print_linked_list(head);
    return 0;
}