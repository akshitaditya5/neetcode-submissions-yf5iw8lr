class Solution {
   static bool compare(pair<int, int> &a, pair<int, int> &b) {
        return a.second > b.second; // Compare frequencies in descending order
    }

public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        map<int, int> freqMap;
        
        // Count frequencies of each number
        for (int i = 0; i < nums.size(); i++) {
            freqMap[nums[i]]++;
        }

        // Create a vector of pairs (number, frequency)
        vector<pair<int, int>> freqPair(freqMap.begin(), freqMap.end());

        // Sort the frequency pairs using the separate comparison function
        // sort(freqPair.begin(), freqPair.end(), compare);

        sort(freqPair.begin(), freqPair.end(),
    [](pair<int, int> &a, pair<int, int> &b) {
        return a.second > b.second; // Sort by frequency in descending order
    });


        vector<int> kElements;

        // Extract the top k frequent elements
        for (int i = 0; i < k; i++) {
            kElements.push_back(freqPair[i].first);
        }

        return kElements;
    }
};
