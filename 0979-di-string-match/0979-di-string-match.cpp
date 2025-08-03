class Solution {
public:
    vector<int> diStringMatch(string s) {
        vector<int> ans;
        int n = s.length();
        int low = 0, high = n;

        for (int i = 0; i < n; i++) {
            if (s[i] == 'I') {
                ans.push_back(low++);
            } else { // 'D'
                ans.push_back(high--);
            }
        }

        // Add the last remaining number (low == high here)
        ans.push_back(low);
        return ans;
    }
};
