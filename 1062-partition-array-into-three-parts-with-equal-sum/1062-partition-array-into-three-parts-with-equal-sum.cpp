class Solution {
public:
    bool canThreePartsEqualSum(vector<int>& arr) {
        int totalSum = accumulate(arr.begin(), arr.end(), 0);

        // If totalSum is not divisible by 3, we can't partition
        if (totalSum % 3 != 0) return false;

        int target = totalSum / 3;
        int count = 0;
        int currentSum = 0;

        for (int i = 0; i < arr.size(); i++) {
            currentSum += arr[i];

            if (currentSum == target) {
                count++;
                currentSum = 0;
                // If we find two partitions, the third is implicit
                if (count == 2 && i < arr.size() - 1) return true;
            }
        }

        return false;
    }
};
