// remove nth node from end
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
class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode* temp = head;

        if (head == NULL)
            return NULL;
        if (head->next == NULL)
            return NULL;
        int s = 0;
        ListNode* temp1 = head;

        while (temp1 != NULL) {
            s++;
            temp1 = temp1->next;
        }
        if (s == n) {
            head = head->next;
            return head;
        }

        for (int i = 1; i < s - n; i++) {
            if (temp->next != NULL && temp->next->next != NULL)
                temp = temp->next;
        }

        temp->next = temp->next->next;

        return head;
    }
};