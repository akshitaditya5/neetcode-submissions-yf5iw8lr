class Solution {
public:
    bool isPalindrome(string s) {
        string reversed;
        for(int i=0;i<s.size();i++){
            char ch=s[i];
            if((ch>='A' && ch<='Z') || (ch>='a' && ch<='z') || (ch>='0' && ch<='9')){
                if(ch>='A' && ch<='Z'){
                    ch=ch-'A'+'a';
                }
                reversed.push_back(ch);
            }
        }
       int start=0;
       int end=reversed.size()-1;
       while(start<end){
        if(reversed[start]!=reversed[end]){
            return false;
        }
        start++;
        end--;
       }
       return true;
    }
};
