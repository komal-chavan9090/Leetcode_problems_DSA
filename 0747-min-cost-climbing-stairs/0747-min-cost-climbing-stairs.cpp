class Solution {
public:
    int solve(int ind, vector<int>& dp, vector<int>& cost) {
        int n = cost.size();
        if (ind >= n) return 0; // Base case: beyond top

        if (dp[ind] != -1) return dp[ind];

        // Choose min cost of taking 1 or 2 steps
        dp[ind] = cost[ind] + min(solve(ind + 1, dp, cost), solve(ind + 2, dp, cost));
        return dp[ind];
    }

    int minCostClimbingStairs(vector<int>& cost) {
        int n = cost.size();
        vector<int> dp(n + 1, -1);

        // We can start from step 0 or step 1
        return min(solve(0, dp, cost), solve(1, dp, cost));
    }
};
