class Solution {
public:
    bool isAnagram(string s, string t) {

        if (s.length() != t.length()) return false;

        map<char, int> mpp1;
        map<char, int> mpp2;

        for (char c : s) mpp1[c]++;
        for (char c : t) mpp2[c]++;

        // Compare full maps
        return mpp1 == mpp2;
    }
};