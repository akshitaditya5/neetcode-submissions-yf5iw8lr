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
    void reversePreOrder(TreeNode* root,vector<int> &result,int level){
        if(root==NULL){
            return ;
        }
        if(result.size()==level){
            result.push_back(root->val);
            // level++;
        }
        //add this level++ over here and not on top because
        // for cases like root=[1,2,3,4] if(result.size()==level)
        // fails if one side has already been traversed at a 
        //deeper level mainly when rh depth>lh depth
        level++;
        reversePreOrder(root->right,result,level);
        reversePreOrder(root->left,result,level);
    }


    vector<int> rightSideView(TreeNode* root) {
        vector<int> result;
        int level=0;
        reversePreOrder(root,result,level);
        return result;
    }
};
