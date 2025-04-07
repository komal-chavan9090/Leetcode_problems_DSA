class Solution {
public:
    int maxOperations(vector<int>& nums, int k) {
        int count=0;
        sort(nums.begin(),nums.end());
        map<int,int> mpp;
        for(int i=0;i<nums.size();i++)
        {
            int target=0;
            target=k-nums[i];
            if(mpp.find(target)!=mpp.end())
            {
                count++;
                mpp[target]--;
                if(mpp[target]==0)
                {
                    mpp.erase(target);
                }
            }
            else 
            {
                mpp[nums[i]]++;
            }
        }
        return count;
    }
};