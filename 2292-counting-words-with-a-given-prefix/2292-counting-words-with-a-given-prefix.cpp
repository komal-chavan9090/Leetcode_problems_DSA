class Solution {
public:
    int prefixCount(vector<string>& words, string pref) {
        int count=0;

        for(int i=0;i<words.size();i++)
        {
            string temp=words[i];
            int pos=temp.find(pref);
            if(pos==0)
            {
                count++;
            }
        }
        return count;
    }
};