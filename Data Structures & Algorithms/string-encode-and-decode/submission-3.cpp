class Solution {
public:
    // Encode: for each string, prefix it with its length and a '#' delimiter
    // e.g. ["Hello","World"] → "5#Hello5#World"
    // e.g. ["#", "1#1"]     → "1##4#1#1"
    string encode(vector<string>& strs) {
        string result = "";
        for (const string& s : strs) {
            result += to_string(s.size()) + "#" + s;
        }
        return result;
    }

    // Decode: read length up to '#', then slice exactly that many chars
    vector<string> decode(string s) {
        vector<string> result;
        int i = 0;
        while (i < s.size()) {
            // Find the '#' delimiter to extract the length prefix
            int j = i;
            while (s[j] != '#') j++;

            int len = stoi(s.substr(i, j - i)); // parse the length
            result.push_back(s.substr(j + 1, len)); // extract exactly 'len' chars
            i = j + 1 + len; // advance past the '#' and the string content
        }
        return result;
    }
};