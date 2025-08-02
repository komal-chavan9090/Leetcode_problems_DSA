class Solution {
public:
    int smallestRangeI(vector<int>& nums, int k) {
        int mini = *min_element(nums.begin(), nums.end());
        int maxi = *max_element(nums.begin(), nums.end());

        // Reduce range by increasing min and decreasing max
        int new_min = mini + k;
        int new_max = maxi - k;

        return max(0, new_max - new_min);
    }
};
