class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        // int leftSide=1;
        // int rightSide=1;
        vector<int> ans;
        for(int i=0;i<nums.size();i++){
            int leftSide=1;
            int rightSide=1;
            if(i==0){
            //  leftSide=1;
             for(int i=1;i<nums.size();i++){
                rightSide=rightSide*nums[i];
             } 
             ans.push_back(rightSide);
            } else {
                // leftSide=1;
                // rightSide=1;
                for(int k=0;k<i;k++){
                    leftSide=leftSide*nums[k];
                }
                for(int k=i+1;k<nums.size();k++){
                    rightSide=rightSide*nums[k];
                }
                ans.push_back(leftSide*rightSide);
            }
        }
        return ans;
    }
};
