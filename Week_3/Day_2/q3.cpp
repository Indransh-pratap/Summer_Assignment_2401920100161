// palindrome - find middle , reverse rwmaoning part then compare and return
class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        ListNode* prev = NULL;
        ListNode* cur = head;

        while (cur != NULL) {
            ListNode* nextNode = cur->next;
            cur->next = prev;
            prev = cur;
            cur = nextNode;
        }
        return prev;
    }
    bool isPalindrome(ListNode* head) {
        if (head == NULL || head->next == NULL)
            return true;
        ListNode* slow = head;
        ListNode* fast = head;
        while (fast != NULL && fast->next != NULL) {

            slow = slow->next;
            fast = fast->next->next;
        }
        ListNode* first = head;
        ListNode* second = slow;
        second = reverseList(slow);
        while (second != NULL) {
            if (first->val != second->val) {
                return false;
            }
            first = first->next;
            second = second->next;
        }

        return true;
    }
};