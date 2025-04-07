class Solution {
public:
    void moveZeroes(vector<int>& nums) {
         int lastNonzerofoundat=0;

         for(int i=0;i<nums.size();i++)
         {
            if(nums[i]!=0)
            {
                nums[lastNonzerofoundat++]=nums[i];
            }

         }

         for(int i=lastNonzerofoundat;i<nums.size();i++)
         {
            nums[i]=0;
         }
    }
};