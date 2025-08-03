class Solution {
public:
    vector<int> addToArrayForm(vector<int>& nums, int k) {
        vector<int> result;
        int i = nums.size() - 1;
        int carry = 0;

        while (i >= 0 || k > 0 || carry > 0) {
            int numDigit = (i >= 0) ? nums[i] : 0;
            int kDigit = k % 10;
            
            int sum = numDigit + kDigit + carry;
            result.push_back(sum % 10);
            carry = sum / 10;

            k /= 10;
            i--;
        }

        reverse(result.begin(), result.end());
        return result;
    }
};
