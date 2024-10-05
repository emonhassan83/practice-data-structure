//* https://www.naukri.com/code360/problems/implement-stack-with-linked-list_630475

// #include <bits/stdc++.h>
// class Queue {
// public:
//   vector<int> data;
//   int frontIndex;

// public:
//   //* Implement the Constructor
//   Queue() { 
//     frontIndex = 0; 
//     }

//   /*----------------- Public Functions of Queue -----------------*/

//   //* Implement the isEmpty() function
//   bool isEmpty() { 
//     return frontIndex >= data.size(); 
//     }

//   //* Implement the enqueue() function
//   void enqueue(int val) {
//      data.push_back(val); 
//      }

//   //* Implement the dequeue() function
//   int dequeue() {
//     if (isEmpty()) {
//       return -1; //* If the queue is empty, return -1
//     }
//     return data[frontIndex++];
//   }

//   //* Implement the front() function
//   int front() {
//     if (isEmpty()) {
//       return -1; // *If the queue is empty, return -1
//     }
//     return data[frontIndex];
//   }
// };