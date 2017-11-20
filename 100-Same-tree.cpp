/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    bool isSameTree(TreeNode* p, TreeNode* q) {
        
        //base case reached end of both trees must be equal.
        if(!p && !q) {
            return true; 
        }
        
        //base case reached end of one tree only must be diffrent trees.
        if(!p || !q) {
            return false;
        }
        bool left = isSameTree(p->left, q->left);
        bool right = isSameTree(p->right, q->right);
        
        return p->val==q->val && left && right;
    }
};