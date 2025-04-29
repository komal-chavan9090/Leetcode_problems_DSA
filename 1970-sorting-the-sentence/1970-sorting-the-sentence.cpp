class Solution {
public:
    string sortSentence(string s) {
       map<int, string> mpp;
        string temp = "";

        for (int i = 0; i < s.length(); i++) {
            if (s[i] != ' ') {
                temp += s[i];
            } else {
                int pos = temp.back() - '0'; // last character is the position
                temp.pop_back(); // remove the digit
                mpp[pos] = temp;
                temp = "";
            }
        }

        // handle last word (not followed by a space)
        int pos = temp.back() - '0';
        temp.pop_back();
        mpp[pos] = temp;

        string answer = "";
        for (auto it : mpp) {
            answer += it.second + " ";
        }

        // remove trailing space
        if (!answer.empty()) {
            answer.pop_back();
        }

        return answer;
    }
};