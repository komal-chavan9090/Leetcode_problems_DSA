class Solution {
public:
    int findShortestSubArray(vector<int>& nums) {
        unordered_map<int, int> freq;
        unordered_map<int, int> firstIndex;
        unordered_map<int, int> lastIndex;

        int degree = 0;

        for (int i = 0; i < nums.size(); i++) {
            int num = nums[i];
            if (firstIndex.find(num) == firstIndex.end()) {
                firstIndex[num] = i;
            }
            lastIndex[num] = i;
            freq[num]++;
            degree = max(degree, freq[num]);
        }

        int minLen = INT_MAX;
        for (auto& [num, count] : freq) {
            if (count == degree) {
                int length = lastIndex[num] - firstIndex[num] + 1;
                minLen = min(minLen, length);
            }
        }

        return minLen;
    }
};
