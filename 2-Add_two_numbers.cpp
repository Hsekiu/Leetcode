/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */

//Solves problem for inputs less then size of int
//Correct solution that solves leet codes test cases is b.
 
class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        
        ListNode* solution = new ListNode(0);
        ListNode* head = solution;
        
        int total = listToInt(l1) + listToInt(l2);
        if (total == 0) {
            return head;
        }
        std::cout << listToInt(l1) << "and: " << listToInt(l2) << std::enld;
        
        int i = 0;
        while (total != 0) {
            solution->next = new ListNode(total%10);
            solution = solution->next;
            total = (total - total%10) / 10;
            i++;
        }
        
        return head->next;
    }
    
    int listToInt(ListNode* l) {
        int power = 0;
        int tmp = 0;
        while (l != 0) {
            tmp += (l->val)*(pow(10,power));
            power++;
            l = l->next;
        }
        return tmp;
    }
};