class Solution {
public:
    int totalFruit(vector<int>& fruits) {
        int i=0;
        int j=0;
        if(fruits.size()<=2) return fruits.size();

        unordered_map<int,int> mpp;
        int ans=0;

        while(j<fruits.size())
        {
            mpp[fruits[j]]++;

            if(mpp.size()<=2)
            {
                ans=max(ans,((j-i)+1) );
            }
            if(mpp.size()>2)
            {
                while(mpp.size()>2)
                {
                    mpp[fruits[i]]--;
                    if(mpp[fruits[i]]==0)
                    {
                        mpp.erase(fruits[i]);
                    }
                    i++;
                }
            }
            j++;
        }
        return ans;
    }
};