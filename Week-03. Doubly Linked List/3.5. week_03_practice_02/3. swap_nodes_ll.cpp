//* https://leetcode.com/problems/swapping-nodes-in-a-linked-list/

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
//     ListNode* swapNodes(ListNode* head, int k) {
//         //* Initialize pointers to find the kth node from the beginning and end.
//         ListNode* first = head;
//         ListNode* second = head;
//         ListNode* kthNode = NULL;

//         //* Move the `first` pointer to the kth node from the beginning.
//         for (int i = 1; i < k; i++) {
//             first = first->next;
//         }

//         //* Keep track of the kth node from the beginning.
//         kthNode = first;

//         //* Move the `first` pointer to the end of the list while moving the `second` pointer.
//         while (first->next != NULL) {
//             first = first->next;
//             second = second->next;
//         }

//         //* Now, `second` points to the kth node from the end.
//         //* Swap the values of the kth node from the beginning and the end.
//         int temp = kthNode->val;
//         kthNode->val = second->val;
//         second->val = temp;

//         //* Return the head of the modified list.
//         return head;
//     }
// };
