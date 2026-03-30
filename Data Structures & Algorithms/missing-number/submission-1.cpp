class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int xori=0;
        int n=nums.size();
        for(int i=0;i<=n;i++){
            xori=xori^i;
        }
        for(int num:nums){
            xori=xori^num;
        }
        return xori;
    }
};