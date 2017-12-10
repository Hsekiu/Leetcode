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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        int size = 0;
        ListNode* dummy = head;
        
        //Get size of list
        while(dummy) {
            dummy = dummy->next;
            size++;
        }
        
        //Reset head
        dummy = head;
        
        //If size is 1 then list is empty.
        if(size == 1) return nullptr;
        
        //Delete head
        if(size - n == 0) {
            dummy = dummy->next;
            return dummy;
        }
        
        //Find list node before the element we want to delete
        for(int i = 1; i <= size - n - 1 && dummy; i++) {
            dummy = dummy->next;
        }
        
        //Set the node before the element to the one after
        dummy->next = dummy->next->next;
        dummy = head;
        
        return dummy;
    }
};