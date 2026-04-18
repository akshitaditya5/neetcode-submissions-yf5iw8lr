class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack<long> st;
        
        for(const string &token:tokens){
            if(token == "+" || token == "-" || token == "*" || token == "/"){
                //dont use ' ' rather use " "
                long b=st.top();
                st.pop();
                long a=st.top();
                st.pop();
                if(token == "+"){
                    st.push(a+b);
                } else if (token == "-"){
                    st.push(a-b);
                } else if (token == "*"){
                    st.push(a*b);
                } else if (token == "/"){
                    st.push(a/b);
                }
            } else {
                st.push(stol(token));
            }
        }
        return st.top();
    }
};
