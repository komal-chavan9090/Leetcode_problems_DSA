class Solution {
public:
    bool isOneBitCharacter(vector<int>& bits) {
        int i = 0;
        int n = bits.size();
        
        while (i < n - 1) { // Stop before the last bit
            if (bits[i] == 1) {
                i += 2; // two-bit character (10 or 11)
            } else {
                i += 1; // one-bit character (0)
            }
        }
        
        // If we land exactly on the last bit, it's a one-bit character
        return i == n - 1;
    }
};
