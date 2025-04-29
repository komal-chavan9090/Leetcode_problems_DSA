class Solution {
public:
    string solve(string s)
    {
        string temp = "";
        for (int i = 0; i < s.length(); i++) {
             if (s[i] == '#') 
             {
                    if (!temp.empty()) 
                    {
                    temp.pop_back(); // remove last character
                    }
             } 
             else 
             {
                    temp += s[i]; // add current character
             }
        }
        return temp;
    }
    bool backspaceCompare(string s, string t) 
    {
         return solve(s) == solve(t);
    }
};