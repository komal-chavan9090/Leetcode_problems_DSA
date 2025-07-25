class Solution {
public:
    int arrayPairSum(vector<int>& nums) {
        sort(nums.begin(),nums.end());

        int total=0;
        int i=0;
        while(i<nums.size())
        {
            total+=nums[i];
            i+=2;
        } 
        return total;
    }
};