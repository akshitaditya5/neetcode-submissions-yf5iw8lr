class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int> frequencyMap;
        for(int i=0;i<nums.size();i++){
            frequencyMap[nums[i]]++;
        }

        vector<pair<int,int>> freqPair(frequencyMap.begin(),frequencyMap.end());

        sort(freqPair.begin(),freqPair.end(),[] ( pair<int,int> &a, pair<int,int> &b){
          return a.second>b.second;
        });

        vector<int> kElements;
        for(int i=0;i<k;i++){
            kElements.push_back(freqPair[i].first);
        }
return kElements;
    }
};
