class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        double avg=INT_MIN;

        int i=0,j=0;
        int sum=0;
        while(j<nums.size())
        {
            sum+=nums[j];
            if(j-i+1 == k)
            {
                avg = max(avg, static_cast<double>(sum) / k);
                sum-=nums[i];
                i++;
                // j++;
            }
            j++;
        }
        return avg;
    }
};