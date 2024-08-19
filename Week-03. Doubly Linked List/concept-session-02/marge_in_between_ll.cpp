//* https://leetcode.com/problems/merge-in-between-linked-lists/description/

/* 
class Solution {
public:
    ListNode* mergeInBetween(ListNode* list1, int a, int b, ListNode* list2) {
        ListNode* tmp = list1;
        for (int i = 1; i < a; i++) {
            tmp = tmp->next;
        }

        ListNode* tmp2 = tmp->next;
        for (int i = a; i <= b; i++) {
            tmp2 = tmp2->next;
        }

        tmp->next = list2;

        ListNode* tmp3 = list2;
        while (tmp3->next != NULL) {
            tmp3 = tmp3->next;
        }
        tmp3->next = tmp2;
        
        return list1;
    }
};
 */