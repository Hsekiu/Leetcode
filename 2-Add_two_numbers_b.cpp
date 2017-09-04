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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        
        return addLists(l1, l2);
    }
    
    ListNode* addLists(ListNode* l1, ListNode* l2) {
        ListNode* solution = new ListNode(0);
        ListNode* head = solution;
        
        int carry = 0;
        int tmp = 0;
        int a = 0;
        int b = 0;
        
        while (l1 != 0 || l2 != 0) {

            //If one list is shorter then other then set the next value to 0.
            if(l1 == 0) {
                a = 0;
            } else {
               a = l1->val; 
            }
            if (l2 == 0) {
                b = 0;
            } else {
                b = l2->val;
            }
            
            tmp += a + b + carry;
            carry = 0;
            
            //Resolve value and carry.
            if(tmp >= 10) {
                carry = (tmp - tmp % 10) / 10;
                tmp = tmp - (carry * 10);
            }

            solution->next = new ListNode(tmp);
            solution = solution->next;
            
            if(l1 != 0) {
                l1 = l1->next;
            }
            if(l2 != 0) {
               l2 = l2->next; 
            }

            tmp = 0;
        }
        
        //Add new node with value when last two elements result in carry.
        if (carry > 0) {
            solution->next = new ListNode(carry);
        }
        
        //First element of list is 0 since to create new list you have to give some value.
        return head->next;
    }
};