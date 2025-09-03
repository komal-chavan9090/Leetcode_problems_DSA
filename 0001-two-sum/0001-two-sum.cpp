class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
    
        map<int,int> mpp;
        for(int i=0;i<nums.size();i++)
        {
            int currentNeed=target-nums[i];
            if(mpp.find(currentNeed)!=mpp.end())
            {
                return {mpp[currentNeed],i};
            }
            else
            {
                mpp[nums[i]]=i;
            }
        }
        return {-1,-1};
    }
};