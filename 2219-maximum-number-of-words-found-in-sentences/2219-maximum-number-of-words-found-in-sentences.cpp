class Solution {
public:
   int getCount(string s)
    {
        stringstream ss(s);
        string word;
        int count = 0;
        while (ss >> word)
        {
            count++;
        }
        return count;
    }

    int mostWordsFound(vector<string>& s) {
        int maxi = 0;  // Change maxi to int to match the return type of getCount
        for (int i = 0; i < s.size(); i++) {
            maxi = max(maxi, getCount(s[i]));  // Both are now of type int
        }
        return maxi;
    }
};