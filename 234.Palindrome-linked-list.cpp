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
    bool isPalindrome(ListNode* head) {
        vector<int> temp;
        
        while(head != nullptr) {
            temp.push_back(head->val);
            head = head->next;
        }
        
        int end = temp.size() - 1;
        for(int i = 0; i < temp.size(); i++) {
            if(temp[i] != temp[end]) return false;
            end--;
        }
        
        return true;
    }
};