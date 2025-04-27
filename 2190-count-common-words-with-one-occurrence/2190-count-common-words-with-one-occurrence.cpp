class Solution {
public:
    int countWords(vector<string>& w1, vector<string>& w2) {
        unordered_map<string,int> map1,map2;
        int count=0;

        for(int i=0;i<w1.size();i++) map1[w1[i]]++;
        for(int i=0;i<w2.size();i++) map2[w2[i]]++;

        for(int i=0;i<w1.size();i++)
        {
            if(map1[w1[i]]==1 && map2[w1[i]]==1)
            {
                count++;
            }
        }
        return count;
    }
};