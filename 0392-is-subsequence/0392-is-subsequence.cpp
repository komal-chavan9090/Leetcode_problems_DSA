class Solution {
public:
    bool solve(int i, int j, string& s, string& t) {
        if (i < 0) return true;     // matched all of s
        if (j < 0) return false;    // t ended before matching s

        if (s[i] == t[j]) {
            return solve(i - 1, j - 1, s, t);
        } else {
            return solve(i, j - 1, s, t);
        }
    }

    bool isSubsequence(string s, string t) {
        int i = s.length() - 1;
        int j = t.length() - 1;
        if (s.empty()) return true;
        if (t.empty()) return false;
        return solve(i, j, s, t);
    }
};
