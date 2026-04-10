class Solution {
public:
    bool isValid(string s) {
        stack<char> st;

        for(int i=0;i<s.length();i++){
            if(s[i]=='(' || s[i]=='{' ||s[i]=='['){
                st.push(s[i]);
            }
            if(s[i]==')' || s[i]=='}' ||s[i]==']'){
                if(st.empty()){
                    return false;
                }
                char topOfStack=st.top();
                st.pop();
                if((s[i]==')' && topOfStack!='(') ||
                (s[i]=='}' && topOfStack!='{') ||
                (s[i]==']' && topOfStack!='[')){
                    return false;
                }
            }
        }
        return st.empty();
    }
};
