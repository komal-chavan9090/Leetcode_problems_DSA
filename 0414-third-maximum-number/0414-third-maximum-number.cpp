class Solution {
public:
    int thirdMax(vector<int>& nums) {
        sort(nums.rbegin(),nums.rend());
    //  if(nums.size()<3) return nums[0];
        int count=0;

        for(int i=0;i<nums.size()-1;i++)
        {
            if(nums[i]!=nums[i+1])
            {
                count++;
            }
            if(count==2)
            {
                return nums[i+1];
            }
        }
        return nums[0];
    }
};