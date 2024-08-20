class Solution {
public:
    int distributeCandies(vector<int>& candyType) {
        
        unordered_map<int,int> mpp;

        for(int i=0;i<candyType.size();i++)
        {
            mpp[candyType[i]]++;
        }

        int n=mpp.size();
        if(candyType.size()/2 >= n )
        {
           return mpp.size();
        }
        else
        {
            return floor(candyType.size()/2);
        }

        

    }
};