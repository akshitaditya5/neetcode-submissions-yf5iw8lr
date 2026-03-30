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

void order(TreeNode* root,vector<int>&result){
if(root==NULL){
    return;
}
result.push_back(root->val);
order(root->left,result);
order(root->right,result);
}

    int kthSmallest(TreeNode* root, int k) {
        vector<int> result;
        order(root,result);
        sort(result.begin(),result.end());
        int val=0;
        for(int i=0;i<k;i++){
            val=result[i];
        }
        return val;
    }
};
