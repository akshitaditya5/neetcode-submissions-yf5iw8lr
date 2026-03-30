class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.length()!=t.length()){
            return false;
        }
        map<char,int> charMap;
        for(auto it:s){
            charMap[it]++;
        }
        for(auto it:t){
            charMap[it]--;
            if(charMap[it]<0){
                return false;
            }
        }
        return true;
    }
};
