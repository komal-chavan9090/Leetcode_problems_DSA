class Solution {
public:
    int maxChunksToSorted(vector<int>& arr) {
        
        int count=0;
        int max1=INT_MIN;
        for(int i=0;i<arr.size();i++)
        {
            max1=max(max1,arr[i]);
            if(i==max1)
            {
                count++;
                max1=INT_MIN;
            }
        }
        return count;
    }
};