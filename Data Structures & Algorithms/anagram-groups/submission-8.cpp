class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string,vector<string>>anagramMap;

       for(int i=0;i<strs.size();i++){
        string toBeSortedStr=strs[i];
        sort(toBeSortedStr.begin(),toBeSortedStr.end());
        anagramMap[toBeSortedStr].push_back(strs[i]);//at this point all the sortedStr for tea,eat,ate becomes aet 
            //and so all thes tea,eat,ate are mapped against this aet
       }

       vector<vector<string>> result;
       for(const auto &entry:anagramMap){  //very important visualisation
        result.push_back(entry.second);
       }
       return result;
    }
};
