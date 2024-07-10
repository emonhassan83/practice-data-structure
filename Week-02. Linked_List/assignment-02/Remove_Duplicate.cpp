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

void remove_duplicates(Node *&head) {
    Node *tmp = head;
    
    while (tmp != NULL) {
        Node *checker = tmp;
        while (checker->next != NULL) {
            if (checker->next->val == tmp->val) {
                Node *temp = checker->next;
                checker->next = checker->next->next;
                delete temp;
            } else {
                checker = checker->next;
            }
        }
        tmp = tmp->next;
    }
}

void print_list(Node *head) {
    Node *temp = head;
    while (temp != NULL) {
        cout << temp->val << " ";
        temp = temp->next;
    }
    cout << endl;
}

int main() {
    Node *head = NULL;
    Node *tail = NULL;

    int val;
    while (true) {
        cin >> val;
        if (val == -1)
            break;
        insert_tail(head, tail, val);
    }

    remove_duplicates(head);
    print_list(head);
    
    return 0;
}
