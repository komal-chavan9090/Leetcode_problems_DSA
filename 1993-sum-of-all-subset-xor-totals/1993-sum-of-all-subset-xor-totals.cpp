class Solution {
public:
    int solve(int i,int &n,vector<int> &nums,int xorsum)
    {
        if(i>=n) return xorsum;
        int pick=0,nonpick=0;
        
        
           pick=solve(i+1,n,nums,nums[i]^xorsum);
            nonpick=solve(i+1,n,nums,xorsum);
        
        return pick+nonpick;

    }
    int subsetXORSum(vector<int>& nums) {
        int n=nums.size();
        return solve(0,n,nums,0);
    }
};