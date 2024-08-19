//* https://leetcode.com/problems/insert-greatest-common-divisors-in-linked-list/

/*
class Solution {
public:
    ListNode* insertGreatestCommonDivisors(ListNode* head) {
        ListNode* temp = head;
        while (temp->next != NULL) {
            int gcd = __gcd(temp->val, temp->next->val);
            ListNode* newNode = new ListNode(gcd);

            newNode->next = temp->next;
            temp->next = newNode;

            temp = temp->next->next;
        }
        return head;
    }
};
 */