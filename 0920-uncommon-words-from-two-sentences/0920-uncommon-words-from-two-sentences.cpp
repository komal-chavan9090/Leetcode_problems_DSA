class Solution {
public:
    vector<string> uncommonFromSentences(string s1, string s2) {
        string str=s1+" "+s2;
        stringstream ss(str);

        map<string,int> mpp;
        vector<string> ans;

        string word;
        while(ss>>word)
        {
            mpp[word]++;
        }
        for(auto it:mpp)
        {
            if(it.second==1)
            {
                ans.push_back(it.first);
            }
        }
        return ans;
    }
};