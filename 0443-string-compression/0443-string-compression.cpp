class Solution {
public:
    int compress(vector<char>& chars) {
        int write = 0;  // Where to write in the chars vector
        int i = 0;      // Read pointer
        int n = chars.size();

        while (i < n) {
            char ch = chars[i];
            int j = i;
            // Count frequency
            while (j < n && chars[j] == ch) {
                j++;
            }

            int freq = j - i;
            chars[write++] = ch;

            if (freq > 1) {
                string f = to_string(freq);
                for (char c : f) {
                    chars[write++] = c;
                }
            }

            i = j;  // Move to next group
        }

        return write;
    }
};
