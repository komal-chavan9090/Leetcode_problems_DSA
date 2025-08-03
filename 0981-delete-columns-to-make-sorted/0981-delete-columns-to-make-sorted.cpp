class Solution {
public:
    bool check(string str)
    {
        for(int i=0;i<str.length()-1;i++)
        {
            if(int(str[i]) > int(str[i+1]))
            {
                return false;
            }
        }
        return true;
    }
    int minDeletionSize(vector<string>& strs) {
        int count=0;
        for(int i=0;i<strs[0].size();i++)
        {
            string temp="";
            for(int j=0;j<strs.size();j++)
            {
               string str=strs[j];
               temp+=str[i];
            }
            if(!check(temp))
            {
                count++;
            }
        }
        return count;
    }
};