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

void search_linked_list(Node *head, int x)
{
    Node *tmp = head;
    int flag = 0;
    while (tmp != NULL)
    {
        if (tmp->val == x)
        {
            flag = 1;
            break;
        }

        tmp = tmp->next;
    }
    
    if (flag == 1)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
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

    search_linked_list(head, x);
    return 0;
}