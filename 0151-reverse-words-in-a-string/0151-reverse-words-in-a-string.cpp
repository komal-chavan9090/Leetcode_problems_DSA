class Solution {
public:
    string reverseWords(string s) {
        stack<string> st;
        string word;
        for (int i = 0; i < s.length(); ++i) {
            if (s[i] != ' ') {
                word += s[i];
            } else if (!word.empty()) {
                st.push(word);
                word.clear();
            }
        }
        if (!word.empty()) {
            st.push(word);
        }

        string res;
        while (!st.empty()) {
            res += st.top();
            st.pop();
            if (!st.empty()) {
                res += " ";
            }
        }
        return res;
    }
};