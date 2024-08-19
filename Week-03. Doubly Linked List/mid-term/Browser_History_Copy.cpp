#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    string val;
    Node *next;
    Node *prev;

    Node(string val)
    {
        this->val = val;
        this->next = NULL;
        this->prev = NULL;
    }
};

void insert_at_tail(Node*& head, string val) {
    Node* newNode = new Node(val);
    if (head == NULL) {
        head = newNode;
        return;
    }

    Node* tmp = head;
    while (tmp->next != NULL) {
        tmp = tmp->next;
    }
    tmp->next = newNode;
    newNode->prev = tmp;
}

string visit(Node*& head, Node*& current, string address) {
    Node* tmp = head;
    while (tmp != NULL) {
        if (tmp->val == address) {
            current = tmp;
            return address;
        }
        tmp = tmp->next;
    }
    return "Not Available";
}

string next(Node*& current) {
    if (current->next != NULL) {
        current = current->next;
        return current->val;
    }
    return "Not Available";
}

string prev(Node*& current) {
    if (current->prev != NULL) {
        current = current->prev;
        return current->val;
    }
    return "Not Available";
}

int main() {
    Node* head = NULL;
    Node* current = NULL;
    string address;

    while (cin >> address && address != "end") {
        insert_at_tail(head, address);
    }
    
    current = head;

    int q;
    cin >> q;
    cin.ignore();

    while (q--) {
        string cmd;
        getline(cin, cmd);

        if (cmd.find("visit") == 0) {
            string url;
            //* get actual url 
            for (size_t i = 6; i < cmd.size(); ++i) {
                url += cmd[i];
            }
            cout << visit(head, current, url) << endl;
        } else if (cmd == "next") {
            cout << next(current) << endl;
        } else if (cmd == "prev") {
            cout << prev(current) << endl;
        }
    }

    return 0;
}
