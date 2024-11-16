class Solution {
public:
    vector<int> resultsArray(vector<int>& nums, int k) {
        
      int n = nums.size();
    std::vector<int> results(n - k + 1, -1);

    for (int i = 0; i <= n - k; i++) {
        int maxElement = nums[i];
        bool isConsecutive = true;

        for (int j = 1; j < k; j++) {
            if (nums[i + j] - nums[i + j - 1] != 1) {
                isConsecutive = false;
                break;
            }
            maxElement = std::max(maxElement, nums[i + j]);
        }

        if (isConsecutive) {
            results[i] = maxElement;
        }
    }

    return results;
        
    }
};