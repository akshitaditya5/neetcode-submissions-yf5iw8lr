class Solution {
public:
    bool isValid(string s) {
         stack<char> st;
        //  if(s.length()==0){
        //     return true;
        //  }
         for(int i=0;i<s.length();i++){
            if(s[i]== '(' || s[i]== '{' || s[i]=='['){
                st.push(s[i]);
            }
            if(s[i]==')'||s[i]== '}'||s[i]== ']'){
                 if (st.empty()) {
                    return false; 
                }
                char name=st.top();
                st.pop();
                if((s[i]==')' && name != '(') ||
                 (s[i]=='}' && name != '{') ||
                 (s[i]==']' && name != '[')){
                    return false;
                }
                
            }
            
         }
         return st.empty();
    }
};
