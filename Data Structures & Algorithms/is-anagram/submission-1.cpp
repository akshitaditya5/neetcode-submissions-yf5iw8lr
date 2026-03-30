class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.length()!=t.length()){
            return false;
        }
        vector<int>charCount(26,0);
        vector<int>charCheck(26,0);
        for(char ch:s){
            //ch-'a'....ch=a(let)...ch-'a'=0
            charCount[ch-'a']++;
        }
        for(char ch:t){
            charCheck[ch-'a']++;
        }
        if(charCount==charCheck){
            //vector comparison only possible in vector
            return true;
        }
        return false;
    }
};
