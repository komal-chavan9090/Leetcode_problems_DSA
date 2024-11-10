class Solution {
    public boolean hasIncreasingSubarrays(List<Integer> nums, int k) {
        int n = nums.size();
        int[] arr = new int[n];
        arr[0] = 1;
        for(int i=1; i<n; i++) {
            if(nums.get(i) > nums.get(i-1)) arr[i] = arr[i-1]+1;
            else arr[i] = 1;
        }
        for(int i=0; i<n-k; i++) {
            if(arr[i] >= k && arr[i+k] >= k) return true;
        }
        return false;
    }
}