class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        vector<int> results;
        if(!nums.size()){
            return 0;
        }
        sort(nums.begin(),nums.end());

        results.push_back(nums[0]);
        for(int i=1;i<nums.size();i++){
            if(nums[i]!=nums[i-1]){
                results.push_back(nums[i]);
            }
        }
        unordered_map<int,vector<int>>aMap;
        for(int i=0;i<results.size();i++){
            int currentVal=results[i];
            vector<int> currentStreak;
            currentStreak.push_back(currentVal);
            while(i+1<results.size() && results[i]+1==results[i+1]){
                currentVal++;
                currentStreak.push_back(currentVal);
                i++;
            }
            aMap[results[i]]=currentStreak;
        }
        int longestStreak=0;
        for(const auto&pair:aMap){
            longestStreak=max(longestStreak,(int)pair.second.size());
        }
        return longestStreak;
    }
};
