class Solution {
public:
    int largestAltitude(vector<int>& gain) 
    {
        int n=gain.size();
        vector<int> prefixSum(n+1);

        prefixSum[0]=0;
        int mini=INT_MIN;
        for(int i=1;i<=n;i++)
        {
             prefixSum[i]=prefixSum[i-1]+gain[i-1];
             mini=max(mini,max(prefixSum[i],prefixSum[0]));
        }
        return mini;
    }
};