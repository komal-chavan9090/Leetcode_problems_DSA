class Solution {
public:
    int maxArea(vector<int>& nums) {
        int i = 0, j = nums.size() - 1;
        int area = 0;

        while (i < j) {
            int height = min(nums[i], nums[j]);
            int width = j - i; // fix: no +1
            area = max(area, height * width);

            // move the smaller line inward
            if (nums[i] < nums[j]) {
                i++;
            } else {
                j--;
            }
        }

        return area;
    }
};
