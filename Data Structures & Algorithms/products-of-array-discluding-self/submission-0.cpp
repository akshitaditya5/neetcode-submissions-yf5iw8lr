class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector<int> product;
        for(int i=0;i<nums.size();i++){
            int leftSide=1;
            int rightSide=1;
            if(i==0){
                leftSide=1;
                for(int j=i+1;j<nums.size();j++){
                    rightSide=rightSide*nums[j];
                }
                product.push_back(rightSide);
            }
            else{
for(int k=0;k<i;k++){
                leftSide=leftSide*nums[k];
            }
            for(int k=i+1;k<nums.size();k++){
                rightSide=rightSide*nums[k];
            }
            product.push_back(rightSide * leftSide);
            }
            
        }
        return product;
    }
};
