class Solution {
public:
    string solve(string str) {
        string result = "";
        for (char ch : str) {
            if (isalpha(ch)) {
                result += tolower(ch);
            }
        }
        return result;
    }

    bool isCompletingWord(map<char, int>& required, string& word) {
        map<char, int> wordFreq;
        for (char ch : word) {
            wordFreq[ch]++;
        }

        for (auto& it : required) {
            if (wordFreq[it.first] < it.second) {
                return false;
            }
        }

        return true;
    }

    string shortestCompletingWord(string licensePlate, vector<string>& words) {
        string cleaned = solve(licensePlate);
        
        // Build frequency map of licensePlate letters
        map<char, int> required;
        for (char ch : cleaned) {
            required[ch]++;
        }

        string answer = "";
        for (string& word : words) {
            if (isCompletingWord(required, word)) {
                if (answer == "" || word.length() < answer.length()) {
                    answer = word;
                }
            }
        }

        return answer;
    }
};
