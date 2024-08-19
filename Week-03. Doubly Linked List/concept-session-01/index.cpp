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

int sz = 0;
void insert_at_tail(Node *&head, int val)
{
    sz++;

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
    }
    tmp->next = newNode;
    newNode->prev = tmp;
}

void print_list(Node *head)
{
    while (head != NULL)
    {
        cout << head->val << " ";
        head = head->next;
    }
    cout << endl;
}

void size_list(Node *head)
{
    int cnt = 0;
    while (head != NULL)
    {
        cnt++;
        head = head->next;
    }
    cout << cnt << endl;
}

void size(Node *head)
{
    cout << sz << endl;
}

int main()
{
    Node *head = NULL;

    while (true)
    {
        int val;
        cin >> val;

        if (val == -1)
            break;

        insert_at_tail(head, val);
    }

    print_list(head);
    size_list(head);
    size(head);

    return 0;
}