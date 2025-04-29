class Solution {
public:
    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>> result;

        permutation(nums,0,result);

        return result;
    }

    void permutation(vector<int>& nums,int index,vector<vector<int>>& result)
    {
        if(index>=nums.size())
        {
            result.push_back(nums);
            return;

        }
        for(int i=index;i<nums.size();i++)
        {
            swap(nums[index],nums[i]);
            permutation(nums,index+1,result);
            swap(nums[index],nums[i]);
        }
    }
};