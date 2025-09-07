class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int i = 0, j = 0;
        int miniLength = INT_MAX;
        int sum = 0;

        while (j < nums.size()) {
            sum += nums[j];

            while (sum >= target) {
                miniLength = min(miniLength, j - i + 1); // fix: +1 for correct length
                sum -= nums[i];
                i++;
            }

            j++;
        }

        return miniLength != INT_MAX ? miniLength : 0;
    }
};
