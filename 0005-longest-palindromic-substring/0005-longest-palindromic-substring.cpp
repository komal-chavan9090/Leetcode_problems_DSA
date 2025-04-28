class Solution {
public:
    string check(int left, int right, string& s) {
        while (left >= 0 && right < s.length() && s[left] == s[right]) {
            left--;
            right++;
        }
        // After the loop, the valid palindrome is from (left+1) to (right-1)
        return s.substr(left + 1, right - left - 1);
    }

    string longestPalindrome(string s) {
        if (s.empty()) return "";
        
        string longest = "";

        for (int i = 0; i < s.length(); i++) {
            // Odd length palindrome
            string odd = check(i, i, s);
            if (odd.length() > longest.length()) {
                longest = odd;
            }
            // Even length palindrome
            string even = check(i, i + 1, s);
            if (even.length() > longest.length()) {
                longest = even;
            }
        }
        
        return longest;
    }
};
