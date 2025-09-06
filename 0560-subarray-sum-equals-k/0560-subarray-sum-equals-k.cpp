class Solution {

public:
    int subarraySum(vector<int>& nums, int k) {
        unordered_map<int,int> mpp1;
	   mpp1[0]=1;
	   int presum=0;
	   int cnt=0;
	   
	   for(int i=0;i<nums.size();i++)
	   {
	       presum+=nums[i];
	       int remove=presum-k;
	       cnt+=mpp1[remove];
	       mpp1[presum]+=1;
	       
	   }
	   
	   return cnt;
    }
};