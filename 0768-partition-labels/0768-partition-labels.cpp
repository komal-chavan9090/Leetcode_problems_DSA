class Solution {
public:
    vector<int> partitionLabels(string s) {
        map<char, int> lastIndex; // store only last index, count is not needed

        for (int i = 0; i < s.length(); i++) {
            lastIndex[s[i]] = i;
        }

        vector<int> result;
        int i = 0;

        while (i < s.length()) {
            int end = lastIndex[s[i]];
            int j = i;
            
            while (j < end) {
                end = max(end, lastIndex[s[j]]);
                j++;
            }

            result.push_back(j - i + 1);
            i = j + 1;
        }

        return result;
    }
};