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
    ListNode* reverseList(ListNode* head) {
        ListNode* curr = nullptr;
        ListNode* next;
        
        while(head) {
            next = head->next;
            head->next = curr;
            curr = head;
            head = next;
        }
        
        return curr;
    }
};