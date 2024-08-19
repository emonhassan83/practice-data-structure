//* https://leetcode.com/problems/design-browser-history/

/* 
class BrowserHistory {
public:
    class Node {
    public:
        string val;
        Node* next;
        Node* prev;

        Node(string val) {
            this->val = val;
            this->next = NULL;
            this->prev = NULL;
        }
    };

    Node* current = new Node(" ");
    BrowserHistory(string homepage) { current->val = homepage; }

    void visit(string url) {
        Node* newNode = new Node(url);

        current->next = newNode;
        newNode->prev = current;
        current = newNode;
        return;   
    }

    string back(int steps) {
        for (int i = 0; i < steps; i++) {
            if (current->prev != NULL)
                current = current->prev;
        }
        return current->val;
    }

    string forward(int steps) {
        for (int i = 0; i < steps; i++) {
            if (current->next != NULL)
                current = current->next;
        }
        return current->val;
    }
};
 */