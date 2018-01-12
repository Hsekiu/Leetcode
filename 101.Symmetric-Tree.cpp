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
    bool isSymmetric(TreeNode* root) {
        return mirror(root, root);
    }
    
    bool mirror(TreeNode* x, TreeNode* y) {
    //End of right and left subtree thus the same.
    if (x == nullptr && y == nullptr) return true;
    //End of of either left or right subtree thus not symmetric.
    if (x == nullptr || y == nullptr) return false;
    //Recursive case.
    return (x->val == y->val) && mirror(x->right, y->left) 
        && mirror(x->left, y->right);
    }
};