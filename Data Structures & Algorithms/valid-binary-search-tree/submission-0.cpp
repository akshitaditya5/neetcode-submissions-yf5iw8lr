/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */

class Solution {
public:
    bool isValidBST(TreeNode* root) {
        return vlidBST(root,INT_MIN,INT_MAX);
    }
    bool vlidBST(TreeNode* root,int min,int max){
        if(root==nullptr){
            return true;
        }
        if(root->val>=max || root->val<=min){
            return false;
        }
        return (vlidBST(root->left,min,root->val) && vlidBST(root->right,root->val,max));

    }
};
