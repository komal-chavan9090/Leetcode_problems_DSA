class Solution {
public:
    int lengthOfLastWord(string sentence) {
         while (!sentence.empty() && isspace(sentence.back())) {
        sentence.pop_back();
    }

    // Find last word
    size_t pos = sentence.find_last_of(' ');
    string lastWord = (pos == string::npos) ? sentence : sentence.substr(pos + 1);
    return lastWord.length();
    }
};