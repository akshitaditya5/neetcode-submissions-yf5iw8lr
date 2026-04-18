class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        int n = temperatures.size();
        vector<int> result(n, 0); // default 0 = no warmer day found
        stack<int> st;            // stores indices, not temperatures

        for (int i = 0; i < n; i++) {
            // Current temp is warmer than temps at indices in the stack
            while (!st.empty() && temperatures[i] > temperatures[st.top()]) {
                int idx = st.top();
                st.pop();
                result[idx] = i - idx; // days waited = current index - stored index
            }
            st.push(i);
        }

        return result;
    }
};