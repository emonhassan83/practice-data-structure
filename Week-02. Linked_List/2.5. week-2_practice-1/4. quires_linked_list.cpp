#include <bits/stdc++.h>
using namespace std;

class Node {
public:
    int val;
    Node *next;

    Node(int val) {
        this->val = val;
        this->next = NULL;
    }
};

// Function to print the linked list
void print_linked_list(Node *head) {
    Node *tmp = head;
    while (tmp != NULL) {
        cout << tmp->val << " ";
        tmp = tmp->next;
    }
    cout << endl;
}

// Function to calculate the size of the linked list
int linked_list_size(Node *head) {
    Node *tmp = head;
    int count = 0;
    while (tmp != NULL) {
        count++;
        tmp = tmp->next;
    }
    return count;
}

// Function to insert a node at a specific position
void insert_node(Node *&head, int pos, int val) {
    Node *newNode = new Node(val);

    if (pos < 0) { // Invalid position
        cout << "Invalid" << endl;
        return;
    }

    if (pos == 0) { // Insert at the head
        newNode->next = head;
        head = newNode;
        return;
    }

    Node *tmp = head;
    for (int i = 1; i < pos; i++) {
        if (tmp == NULL) { // Position out of bounds
            cout << "Invalid" << endl;
            return;
        }
        tmp = tmp->next;
    }

    if (tmp == NULL) { // Position out of bounds
        cout << "Invalid" << endl;
        return;
    }

    newNode->next = tmp->next;
    tmp->next = newNode;
}

// Function to insert a node at the end of the list
void insert_tail(Node *&head, Node *&tail, int val) {
    Node *newNode = new Node(val);
    if (head == NULL) {
        head = newNode;
        tail = newNode;
        return;
    }
    tail->next = newNode;
    tail = newNode;
}

int main() {
    Node *head = NULL;
    Node *tail = NULL;
    int val;

    // Read initial linked list
    while (cin >> val && val != -1) {
        if (head == NULL) {
            head = new Node(val);
            tail = head;
        } else {
            insert_tail(head, tail, val);
        }
    }

    // Process queries
    while (cin >> val) {
        if (val == -1) break;
        int pos = val;
        cin >> val;

        int size = linked_list_size(head);
        if (pos < 0 || pos > size) {
            cout << "Invalid" << endl;
        } else if (pos == size) {
            insert_tail(head, tail, val);
        } else {
            insert_node(head, pos, val);
        }
        print_linked_list(head);
    }

    return 0;
}
