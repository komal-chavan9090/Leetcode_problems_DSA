class Solution {
public:
    int dominantIndex(vector<int>& nums) {
        int maxVal = -1;
        int maxIdx = -1;

        // Step 1: Find the maximum element and its index
        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] > maxVal) {
                maxVal = nums[i];
                maxIdx = i;
            }
        }

        // Step 2: Check if it's at least twice every other element
        for (int i = 0; i < nums.size(); i++) {
            if (i != maxIdx && nums[i] * 2 > maxVal) {
                return -1;
            }
        }

        // Step 3: Return index of the dominant element
        return maxIdx;
    }
};
