class Solution {
public:
    bool solve(int i, int target, vector<int>& nums, vector<vector<int>>& dp) {
        if (target == 0) return true;
        if (i >= nums.size() || target < 0) return false;

        if (dp[i][target] != -1) return dp[i][target];

        // pick or not pick
        bool pick = solve(i + 1, target - nums[i], nums, dp);
        bool notPick = solve(i + 1, target, nums, dp);

        return dp[i][target] = pick || notPick;
    }

    bool canPartition(vector<int>& nums) {
            int totalSum = accumulate(nums.begin(), nums.end(), 0);

        if (totalSum % 2 != 0) return false;

        int target = totalSum / 2;
        vector<vector<int>> dp(nums.size(), vector<int>(target + 1, -1));

        return solve(0, target, nums, dp);
    }
};