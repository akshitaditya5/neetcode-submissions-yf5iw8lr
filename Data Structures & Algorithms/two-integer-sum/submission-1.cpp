class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        map<int,int> numMap;
        for(int i=0;i<nums.size();i++){
            int complement = target - nums [i];
            if(numMap.find(complement) != numMap.end()){
                //this basically checks if the element is present
                //in the numMap or not; here it basically points to
                //the invalid value post the last element
                return {numMap[complement],i};
            }
            numMap[nums[i]]=i;
        }
        return {};
    }
};
