class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        unordered_map<int,int> anagramMap;
        vector<int> check;
        for(int i=0;i<numbers.size();i++){
            int complement=target-numbers[i];
            if(anagramMap.find(complement)!=anagramMap.end()){
                check.push_back(i+1);
                check.push_back(anagramMap[complement]+1);
             }
             anagramMap[numbers[i]]=i;
             sort(check.begin(),check.end());
        }
        return check;

    }
};
