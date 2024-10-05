//* https://www.codingninjas.com/studio/problems/reverse-stack-using-recursion_631875

/*
void reverseStack(stack<int> &s) {
    // Write your code here
    if(s.empty()) return; // base case

    int x = s.top();
    s.pop();

    reverseStack(s); // recursive call

    stack<int> s2; // copy stack
    while(!s.empty()){
        s2.push(s.top());
        s.pop();
    }

    s2.push(x);
    while(!s2.empty()){
        s.push(s2.top());
        s2.pop();
    }
}
 */