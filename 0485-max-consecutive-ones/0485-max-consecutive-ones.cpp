class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
    int max=0;
    int n= nums.size();
    int currmax=0;
    for(int i=0 ;i<n;i++)
    {
        if(nums[i]==1)
        currmax++;
        else{
            if(max < currmax)
              max=currmax;
          currmax=0;
        }
    }
    if(max<currmax)
    max=currmax;
    return max;

    }
};