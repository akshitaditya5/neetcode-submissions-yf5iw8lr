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
int sum(TreeNode* root,int &maxi){
    //add &maxi otherwise whatever operations you do over here won't show up in the main function maxi
if(root==NULL){
    return 0;
}
//vvi
// when receiving from children = "I won't use a negative subtree"
int lh=max(0,sum(root->left,maxi));
int rh=max(0,sum(root->right,maxi));
maxi=max(maxi,root->val+lh+rh);
int res=root->val+max(lh,rh);
return res;
}


    int maxPathSum(TreeNode* root) {
        if(root==NULL){
            return 0;
        }
        int maxi=INT_MIN;
        sum(root,maxi);
        return maxi;
    }
};
