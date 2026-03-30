class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.length()!=t.length()){
            return false;
        }
        vector<int>charCount(26,0);
        vector<int>charCheck(26,0);
        for(char ch:s){
            charCount[ch-'a']++;
        }
        for(char ch:t){
            charCheck[ch-'a']++;
        }
        if(charCount==charCheck){
            return true;
        }
        return false;
    }
};
