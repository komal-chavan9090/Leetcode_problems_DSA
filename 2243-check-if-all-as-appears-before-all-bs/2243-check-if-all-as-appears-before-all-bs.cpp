class Solution {
public:
    bool checkString(string s) {
        bool seenB = false;
        for (char c : s) {
            if (c == 'b') {
                seenB = true; // Once we see 'b', mark it
            }
            if (seenB && c == 'a') {
                return false; // If after 'b' we see 'a', return false
            }
        }
        return true; // All good
    }
};