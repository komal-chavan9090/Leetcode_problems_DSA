class Solution {
public:
    vector<int> shortestToChar(string s, char c) 
    {
        vector<int> temp;
        for(int i=0;i<s.length();i++)
        {
            if(s[i]==c)
            {
                temp.push_back(i);
            }
        }

        vector<int> ans;
        int j = 0;

        for(int i = 0; i < s.length(); i++)
        {
            // Move j forward if next occurrence of c is closer
            while(j < temp.size() - 1 && abs(temp[j+1] - i) < abs(temp[j] - i))
            {
                j++;
            }
            ans.push_back(abs(temp[j] - i));  // distance to nearest c
        }

        return ans; 
    }
};