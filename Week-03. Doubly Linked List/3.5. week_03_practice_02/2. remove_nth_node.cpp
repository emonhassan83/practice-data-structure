//* https://leetcode.com/problems/remove-nth-node-from-end-of-list/
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
//     ListNode* removeNthFromEnd(ListNode* &head, int n) {
//         //* Create a temp node that points to the head.
//         //* This helps in handling edge cases like removing the first node.
//         ListNode* temp = head;

//         //* Initialize two pointers, both starting at the temp node.
//         ListNode* fast = temp;
//         ListNode* slow = temp;

//         //* Move the fast pointer n steps ahead.
//         for (int i = 0; i < n; i++) {
//             fast = fast->next;
//         }

//         //* Edge case: if `fast` is NULL after moving `n` steps, 
//         //* it means we need to remove the head node.
//         if (fast == NULL) {
//             head = head->next;  //* Move head to the next node
//             delete temp;         //* Delete the old head
//             return head;         //* Return the new head
//         }

//         //* Move both pointers until the fast pointer reaches the end of the list.
//         while (fast->next != NULL) {
//             fast = fast->next;
//             slow = slow->next;
//         }

//         //* The slow pointer will now be just before the node we need to remove.
//         ListNode* deleteNode = slow->next;  //* The node to delete
//         slow->next = slow->next->next;      //* Bypass the node to delete

//         //* Delete the node to free memory.
//         delete deleteNode;

//         //* Return the head of the modified list.
//         return head;
//     }
// };
