
        // vector<int> even;
        // vector<int> odd;

        // for(int i=0;i<nums.size();i++)
        // {
        //     if(nums[i]%2==0)
        //     {
        //         even.push_back(nums[i]);
        //     }
        //     else
        //     {
        //         odd.push_back(nums[i]);
        //     }
        // }

        // for(int i=0;i<even.size();i++)
        // {
        //     nums[i]=even[i];
        // }
        // // int j=even.size()

        // for(int i=0;i<odd.size();i++)
        // {
        //      nums[i+even.size()]=odd[i];
        // }
        // return nums;


        class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& nums) {
        int i = 0;
        int j = nums.size() - 1;

        while (i < j) {
            // Move i forward while it's even
            while (i < j && nums[i] % 2 == 0) {
                i++;
            }
            // Move j backward while it's odd
            while (i < j && nums[j] % 2 != 0) {
                j--;
            }
            // Swap if both pointers stopped on wrong elements
            if (i < j) {
                swap(nums[i], nums[j]);
            }
        }
        return nums;
    }
};


