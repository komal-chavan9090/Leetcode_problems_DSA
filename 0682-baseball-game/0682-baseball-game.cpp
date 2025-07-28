class Solution {
public:
    int calPoints(vector<string>& op) {
        stack<int> st;

        for (string s : op) {
            if (s == "C") {
                st.pop();
            } else if (s == "D") {
                st.push(2 * st.top());
            } else if (s == "+") {
                int top = st.top(); st.pop();
                int newTop = st.top();
                int sum = top + newTop;
                st.push(top);      // restore
                st.push(sum);      // push sum
            } else {
                st.push(stoi(s));  // \U0001f525 This handles "9", "-5", "23", etc.
            }
        }

        int total = 0;
        while (!st.empty()) {
            total += st.top();
            st.pop();
        }
        return total;
    }
};
