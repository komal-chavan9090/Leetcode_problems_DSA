class Solution {
public:
    int uniqueMorseRepresentations(vector<string>& words) {

        map<char, string> morseMap = {
            {'a', ".-"},   {'b', "-..."}, {'c', "-.-."}, {'d', "-.."},
            {'e', "."},    {'f', "..-."}, {'g', "--."},  {'h', "...."},
            {'i', ".."},   {'j', ".---"}, {'k', "-.-"},  {'l', ".-.."},
            {'m', "--"},   {'n', "-."},   {'o', "---"},  {'p', ".--."},
            {'q', "--.-"}, {'r', ".-."},  {'s', "..."},  {'t', "-"},
            {'u', "..-"},  {'v', "...-"}, {'w', ".--"},  {'x', "-..-"},
            {'y', "-.--"}, {'z', "--.."}};


        map<string,int> mpp;
        for(int i=0;i<words.size();i++)
        {
            string word=words[i];
            string morsecode="";
            for(int j=0;j<word.length();j++)
            {
                morsecode+=morseMap[word[j]];
            }   
            mpp[morsecode]++;
        }
        return mpp.size();
    }
};