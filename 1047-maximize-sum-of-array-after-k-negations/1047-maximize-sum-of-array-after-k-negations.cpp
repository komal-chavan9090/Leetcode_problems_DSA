class Solution {
public:
    int largestSumAfterKNegations(vector<int>& nums, int k) {
        priority_queue<int, vector<int>, greater<int>> pq;

        // Push all elements into min-heap
        for (int num : nums) {
            pq.push(num);
        }

        // Negate the smallest element k times
        while (k-- > 0) {
            int smallest = pq.top();
            pq.pop();
            pq.push(-smallest);  // Negate and push back
        }

        // Sum all elements
        int sum = 0;
        while (!pq.empty()) {
            sum += pq.top();
            pq.pop();
        }

        return sum;
    }
};
