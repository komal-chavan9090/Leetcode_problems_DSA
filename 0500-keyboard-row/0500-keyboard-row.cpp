class Solution {
public:
    bool check(string str, string temp) {
        for (int i = 0; i < temp.size(); i++) {
            if (str.find(temp[i]) == string::npos) {
                return false;
            }
        }
        return true;
    }

    vector<string> findWords(vector<string>& words) {
        string first =  "qwertyuiop";
        string second = "asdfghjkl";
        string third =  "zxcvbnm";

        vector<string> ans;

        for (int i = 0; i < words.size(); i++) {
            string temp = words[i];
            transform(temp.begin(), temp.end(), temp.begin(), ::tolower);

            if (first.find(temp[0]) != string::npos) {
                if (check(first, temp)) {
                    ans.push_back(words[i]);
                }
            }
            else if (second.find(temp[0]) != string::npos) {
                if (check(second, temp)) {
                    ans.push_back(words[i]);
                }
            }
            else {
                if (check(third, temp)) {
                    ans.push_back(words[i]);
                }
            }
        }

        return ans;
    }
};
