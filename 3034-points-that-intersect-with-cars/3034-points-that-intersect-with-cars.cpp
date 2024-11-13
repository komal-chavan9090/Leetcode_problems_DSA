class Solution {
public:
    int numberOfPoints(vector<vector<int>>& nums) {
         int max1 = INT_MIN;

        // Find the maximum end point in `nums`
        for (const auto& range : nums) {
            max1 = max(max1, range[1]);
        }

        // Initialize `visited` vector to size `max1 + 1` with all elements as 0
        vector<int> visited(max1 + 1, 0);

        // Mark all points within each range as visited
        for (const auto& range : nums) {
            int first = range[0];
            int second = range[1];
            for (int i = first; i <= second; i++) {
                visited[i] = 1;
            }
        }

        // Count the number of points that are marked as visited
        int count = 0;
        for (int i = 0; i <= max1; i++) {
            if (visited[i] == 1) {
                count++;
            }
        }

        return count;
    }
};