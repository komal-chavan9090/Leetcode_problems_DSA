class Solution {
public:
    bool hasIncreasingSubarrays(vector<int>& nums, int k) 
    {
        int n=nums.size();
        if(n<2*k) return false;

        for(int i=0;i<=n-2*k;i++)
        {
            bool i1=true;
            bool i2=true;

            for(int j=0;j<k-1;j++)
            {
                if(nums[i+j]>=nums[i+j+1])
                {
                    i1=false;
                    break;
                }
                if(nums[i+k+j]>=nums[i+k+j+1]){
                    i2=false;
                    break;
                }
            }
            if(i1&&i2) return true;
        }
        return false;
    }
};