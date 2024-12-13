class Solution {
public:
    long long findScore(vector<int>& nums) {
        long long score = 0;
        int n = nums.size();

        // Priority queue to store elements along with their indices, sorted by value
        priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq;

        // Array to mark visited indices
        vector<bool> visited(n, false);

        // Push all elements with their indices into the priority queue
        for (int i = 0; i < n; i++) {
            pq.push({nums[i], i});
        }

        while (!pq.empty()) {
            pair<int, int> min_element = pq.top();
            pq.pop();

            int ele = min_element.first;
            int index = min_element.second;

            // If the current index is already marked, skip it
            if (visited[index]) {
                continue;
            }

            // Add the value to the score
            score += ele;

            // Mark the current index and its adjacent indices as visited
            visited[index] = true;
            if (index > 0) {
                visited[index - 1] = true;
            }
            if (index < n - 1) {
                visited[index + 1] = true;
            }
        }

        return score;
    }
};
