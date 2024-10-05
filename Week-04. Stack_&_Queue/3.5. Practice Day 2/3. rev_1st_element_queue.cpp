//* https://www.naukri.com/code360/problems/reverse-first-k-elements-of-queue_982771

// #include <bits/stdc++.h>
// queue<int> reverseElements(queue<int> q, int k)
// {
//     stack<int> s;

//     //* Step 1: Push first k elements onto the stack
//     for (int i = 0; i < k; i++)
//     {
//         s.push(q.front());
//         q.pop();
//     }

//     //* Step 2: Pop elements from the stack and enqueue back to the queue
//     while (!s.empty())
//     {
//         q.push(s.top());
//         s.pop();
//     }

//     //* Step 3: Move the rest of the elements to the back of the queue
//     int remainingSize = q.size() - k;
//     for (int i = 0; i < remainingSize; i++)
//     {
//         q.push(q.front());
//         q.pop();
//     }

//     return q;
// }