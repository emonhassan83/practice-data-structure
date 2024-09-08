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

int linked_list_size(Node *head)
{
    Node *tmp = head;
    int count = 0;
    while (tmp != NULL)
    {
        count++;
        tmp = tmp->next;
    }
    return count;
}

void insert_tail(Node *&head, Node *&tail, int val)
{
    Node *newNode = new Node(val);
    if (head == NULL)
    {
        head = newNode;
        tail = newNode;
        return;
    }

    tail->next = newNode; //* Connect newNode to the current tail
    tail = newNode;       //* Update tail to the new node
}

int main()
{
    Node *head1 = NULL;
    Node *tail1 = NULL;
    int val;

    //* Input the first linked list
    while (true)
    {
        cin >> val;
        if (val == -1)
            break;
        insert_tail(head1, tail1, val);
    }

    Node *head2 = NULL;
    Node *tail2 = NULL;

    //* Input the second linked list
    while (true)
    {
        cin >> val;
        if (val == -1)
            break;
        insert_tail(head2, tail2, val);
    }

    int size1 = linked_list_size(head1);
    int size2 = linked_list_size(head2);

    if (size1 == size2)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;

    return 0;
}
