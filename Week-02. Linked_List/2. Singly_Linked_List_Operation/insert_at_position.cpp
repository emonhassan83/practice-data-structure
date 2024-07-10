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
        cout << endl
             << "Inserted at head " << endl
             << endl;
        return;
    }

    Node *tmp = head;
    while (tmp->next != NULL)
    {
        tmp = tmp->next;
    } //* now tmp position is last node

    //* connect last now tail to new node
    tmp->next = newNode;
    cout << endl
         << "Inserted at tail " << endl
         << endl;
}

void print_linked_list(Node *head)
{
    cout << endl;
    cout << "Your linked list: ";
    Node *tmp = head;
    while (tmp != NULL)
    {
        cout << tmp->val << " ";
        tmp = tmp->next;
    }
    cout << endl;
}

void insert_at_position(Node *head, int pos, int val)
{
    Node *newNode = new Node(val);
    Node *tmp = head;

    for (int i = 1; i <= pos - 1; i++)
    {
        tmp = tmp->next;
    }

    newNode->next = tmp->next; //* connect newNode to next index node
    tmp->next = newNode;       //* connect newNode to previous index node
    cout << endl
         << "Inserted at position " << pos << endl
         << endl;
}

int main()
{
    Node *head = NULL;
    while (true)
    {
        cout << "Option 1: Insert at Tail" << endl;
        cout << "Option 2: Print linked list" << endl;
        cout << "Option 3: Insert at any position" << endl;
        cout << "Option 4: Terminate" << endl;

        int option;
        cin >> option;
        if (option == 1)
        {
            cout << "Please enter value: ";
            int val;
            cin >> val;

            insert_at_tail(head, val);
        }
        else if (option == 2)
        {
            print_linked_list(head);
        }
        else if (option == 3)
        {
            int pos, val;

            cout << "Please enter position: ";
            cin >> pos;

            cout << "Please enter value: ";
            cin >> val;
            insert_at_position(head, pos, val);
        }
        else if (option == 4)
        {
            break;
        }
    }

    return 0;
}