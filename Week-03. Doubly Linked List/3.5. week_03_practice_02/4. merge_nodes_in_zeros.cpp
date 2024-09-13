//* https://leetcode.com/problems/merge-nodes-in-between-zeros/description/

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */

// class Solution {
// public:
//     ListNode* mergeNodes(ListNode* head) {
//         //* Initialize a dummy node to help with constructing the result list.
//         ListNode* dummy = new ListNode(0);
//         ListNode* current = dummy;  //* Pointer to track the current node in the result list.
        
//         //* Pointer to traverse the input list, skipping the initial 0.
//         ListNode* temp = head->next;
        
//         while (temp != NULL) {
//             int sum = 0;
            
//             //* Sum the values until the next 0 is encountered.
//             while (temp->val != 0) {
//                 sum += temp->val;
//                 temp = temp->next;
//             }
            
//             //* Create a new node with the sum and attach it to the result list.
//             current->next = new ListNode(sum);
//             current = current->next;
            
//             //* Move to the next segment by skipping the 0.
//             temp = temp->next;
//         }
        
//         //* Return the next node of dummy, which is the head of the result list.
//         return dummy->next;
//     }
// };
