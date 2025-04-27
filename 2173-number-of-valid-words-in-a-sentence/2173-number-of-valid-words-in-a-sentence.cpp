class Solution {
public:
    bool isValidToken(string word) {
        int countHyphen = 0;
        int countPunc = 0;
        int n = word.length();

        for (int i = 0; i < n; i++) {
            char ch = word[i];

            // Rule 1: No digits allowed
            if (isdigit(ch)) return false;

            // Rule 2: Hyphen check
            if (ch == '-') {
                countHyphen++;
                if (countHyphen > 1) return false;
                // Hyphen must be surrounded by lowercase letters
                if (i == 0 || i == n - 1 || !islower(word[i - 1]) || !islower(word[i + 1]))
                    return false;
            }

            // Rule 3: Punctuation check
            if (ch == '!' || ch == '.' || ch == ',') {
                countPunc++;
                if (countPunc > 1) return false;
                if (i != n - 1) return false;  // Punctuation must be at the end
            }

            // Rule 4: All other characters must be lowercase letters
            if (!islower(ch) && ch != '-' && ch != '!' && ch != '.' && ch != ',')
                return false;
        }

        return true;
    }

    int countValidWords(string sentence) {
        string word;
        int count = 0;
        stringstream ss(sentence);
        while (ss >> word) {
            if (isValidToken(word)) {
                count++;
            }
        }
        return count;
    }
};
