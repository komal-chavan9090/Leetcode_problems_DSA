class Solution {
public:
    int longestOnes(vector<int>& nums, int k) 
    {
        int i=0;
        int j=0;
        int zeroCount=0;
        int maxi=0;
        while(j<nums.size())
        {
            if(nums[j]==0) zeroCount++;
            if(zeroCount<=k)
            {
                maxi=max(maxi,j-i+1);
            }
            if(zeroCount>k)
            {
                while(zeroCount>k)
                {
                    if(nums[i]==0)
                    {
                        zeroCount--;
                    }
                    i++;
                }
            }
            j++;
        }
        return maxi;
    }
};