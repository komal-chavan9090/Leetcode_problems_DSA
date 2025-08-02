class Solution {
public:
    vector<int> sortArrayByParityII(vector<int>& nums) {
        int i = 0; // even index
        int j = 1; // odd index
        int n = nums.size();

        while (i < n && j < n) {
            // i should point to an even index with an odd number (wrong)
            while (i < n && nums[i] % 2 == 0) {
                i += 2;
            }

            // j should point to an odd index with an even number (wrong)
            while (j < n && nums[j] % 2 == 1) {
                j += 2;
            }

            // swap mismatched values
            if (i < n && j < n) {
                swap(nums[i], nums[j]);
            }
        }

        return nums;
    }
};
