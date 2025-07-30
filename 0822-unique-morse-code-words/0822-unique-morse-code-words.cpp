class Solution {
    const string key[26] = {".-","-...","-.-.","-..",".","..-.","--.","....","..",".---","-.-",".-..","--","-.","---",".--.","--.-",".-.","...","-","..-","...-",".--","-..-","-.--","--.."};
public:
    int uniqueMorseRepresentations(const vector<string>& words) {
        unordered_set<string> results;
        for (const string& str : words){
            string result = "";
            for (const char& c : str) result += key[c-97];
            results.insert(result);
        }
        return results.size();
    }
};