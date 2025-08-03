class Solution {
public:
    bool validMountainArray(vector<int>& arr) {
        int n = arr.size();
        if (n < 3) return false;  // A mountain needs at least 3 points

        int i = 0;

        // Climb up: strictly increasing
        while (i + 1 < n && arr[i] < arr[i + 1]) {
            i++;
        }

        // If we never climbed or we climbed to the end: not a mountain
        if (i == 0 || i == n - 1) return false;

        // Climb down: strictly decreasing
        while (i + 1 < n && arr[i] > arr[i + 1]) {
            i++;
        }

        // Check if we reached the end: if yes, it's a valid mountain
        return i == n - 1;
    }
};
