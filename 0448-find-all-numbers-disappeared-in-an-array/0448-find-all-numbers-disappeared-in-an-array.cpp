class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        sort(nums.begin(), nums.end());

        vector<int> ans;
        int number = 1;
        int i = 0;
        int n = nums.size();

        while (number <= n && i < n) {
            if (nums[i] == number) {
                // Skip duplicates
                while (i < n && nums[i] == number) {
                    i++;
                }
                number++;
            } else if (nums[i] > number) {
                // Missing number
                ans.push_back(number);
                number++;
            } else {
                // nums[i] < number → move ahead
                i++;
            }
        }

        // If some numbers from number to n were missing at the end
        while (number <= n) {
            ans.push_back(number);
            number++;
        }

        return ans;
    }
};
