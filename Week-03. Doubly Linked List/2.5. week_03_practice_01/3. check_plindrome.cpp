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

void insert_tail(Node *&head, Node *&tail, int val)
{
    Node *newNode = new Node(val);
    if (tail == NULL)
    {
        head = newNode;
        tail = newNode;
        return;
    }
    tail->next = newNode;
    newNode->prev = tail;
    tail = newNode;
}

bool isPalindrome(Node *head, Node *tail)
{
    Node *left = head;
    Node *right = tail;

    while (left != NULL && right != NULL && left != right && left->prev != right)
    {
        if (left->val != right->val)
            return false;

        left = left->next;
        right = right->prev;
    }

    return true;
}

int main()
{
    Node *head = NULL;
    Node *tail = NULL;

    //* input for the first list
    int val;
    while (true)
    {
        cin >> val;
        if (val == -1)
            break;
        insert_tail(head, tail, val);
    }

    //* check if the list is a palindrome
    if (isPalindrome(head, tail))
        cout << "YES" << endl;
    else
        cout << "NO" << endl;

    return 0;
}