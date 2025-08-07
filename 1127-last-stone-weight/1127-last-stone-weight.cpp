class Solution {
public:
    int lastStoneWeight(vector<int>& stones) {
        priority_queue<int> pq;

        // Push all stones into max heap
        for (int stone : stones) {
            pq.push(stone);
        }

        // Process stones until at most one is left
        while (pq.size() > 1) {
            int first = pq.top(); pq.pop();
            int second = pq.top(); pq.pop();

            if (first != second) {
                pq.push(abs(first - second));
            }
        }

        // Return the last remaining stone, or 0 if none
        return pq.empty() ? 0 : pq.top();
    }
};
