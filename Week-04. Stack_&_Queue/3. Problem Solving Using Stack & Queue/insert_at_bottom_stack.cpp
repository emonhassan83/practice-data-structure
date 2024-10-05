//* https://www.codingninjas.com/studio/problems/insert-an-element-at-its-bottom-in-a-given-stack_1171166

/* #include <bits/stdc++.h> 
stack<int> pushAtBottom(stack<int>& st, int x) 
{
   stack<int> newSt;

   while(!st.empty()){
       newSt.push(st.top());
       st.pop();
   }

   newSt.push(x);
    while(!newSt.empty()){
       st.push(newSt.top());
       newSt.pop();
   }

   return st;
}
 */