class Solution {
public:
    bool canJump(vector<int>& nums) {
        int maxi=0;
        for(int i=0;i<nums.size();i++){
            if(i>maxi){
                return false;
            }
            if(nums[i]==0 && nums.size()==1){
                return true;
            }
            maxi=max(maxi,i+nums[i]);
        }
        return maxi;
    }
};
