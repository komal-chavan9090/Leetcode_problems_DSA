class Solution {
public:
    int maxChunksToSorted(vector<int>& arr) {
        
        int n = arr.size();
        
        vector<int> leftmax(n), rightmin(n);
        
        // Initialize leftmax and rightmin
        leftmax[0] = arr[0];
        for (int i = 1; i < n; i++) {
            leftmax[i] = max(arr[i], leftmax[i - 1]);
        }
        
        rightmin[n - 1] = arr[n - 1];
        for (int i = n - 2; i >= 0; i--) {
            rightmin[i] = min(rightmin[i + 1], arr[i]);
        }
        
        int count = 0;
        for (int i = 0; i < n - 1; i++) {
            if (leftmax[i] <= rightmin[i + 1]) {
                count++;
            }
        }
        
        return count + 1; // Add 1 for the last chunk
    }
};