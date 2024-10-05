//* https://www.naukri.com/code360/problems/queue-using-array-or-singly-linked-list_2099908

/****************************************************************

    Following is the class structure of the Node class:

        class Node
        {
        public:
            int data;
            Node *next;
            Node()
            {
                this->data = 0;
                next = NULL;
            }
            Node(int data)
            {
                this->data = data;
                this->next = NULL;
            }
            Node(int data, Node* next)
            {
                this->data = data;
                this->next = next;
            }
        };


*****************************************************************/

// class Stack {
// public:
//   Node *top; // Pointer to the top of the stack
//   int size;  // To keep track of the stack size

// public:
//   Stack() {
//     top = NULL;
//     size = 0;
//   }

//   int getSize() { 
//       return size; 
//       }

//   bool isEmpty() {
//        return top == NULL; 
//        }

//   void push(int data) {
//     Node *newNode = new Node(data); // Create a new node with the given data

//     newNode->next = top;            // Point the new node to the current top
//     top = newNode;                  // Update the top to the new node

//     size++;
//   }

//   void pop() {
//     if (isEmpty())
//       return; // Do nothing if the stack is empty
    
//     Node *temp = top; // Store the current top node
//     top = top->next;  // Move the top pointer to the next node
//     delete temp;      // Delete the old top node
    
//     size--;
//   }

//   int getTop() {
//     if (isEmpty()) {
//       return -1; // Return -1 if the stack is empty
//     }
//     return top->data; // Return the data at the top of the stack
//   }
// };