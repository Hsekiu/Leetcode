/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
        ListNode *head = new ListNode(0);
        ListNode *dummy = head;
        
        while(l1 || l2) {
            //Return dummy list if one of the input lists is null.
            if(!l1) {
                dummy->next = l2;
                l2 = nullptr;
            } else if(!l2) {
                dummy->next = l1;
                l1 = nullptr;
            //Build the dummy list with the next least element.
            } else {
                if(l1->val > l2->val) {
                    dummy->next = new ListNode(l2->val);
                    dummy = dummy->next;
                    l2 = l2->next;
                } else {
                    dummy->next = new ListNode(l1->val);
                    dummy = dummy->next;
                    l1 = l1->next;
                }
            }
        }
        
        return head->next;
    }
};