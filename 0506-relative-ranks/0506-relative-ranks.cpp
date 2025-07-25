class Solution {
public:
    vector<string> findRelativeRanks(vector<int>& score) {
        priority_queue<pair<int, int>> pq;  // max heap: {score, index}

        for (int i = 0; i < score.size(); i++) {
            pq.push({score[i], i});
        }

        vector<string> ans(score.size());
        int k = 1;

        while (!pq.empty()) {
            auto it = pq.top(); // it.first = score, it.second = index
            if (k == 1) {
                ans[it.second] = "Gold Medal";
            } else if (k == 2) {
                ans[it.second] = "Silver Medal";
            } else if (k == 3) {
                ans[it.second] = "Bronze Medal";
            } else {
                ans[it.second] = to_string(k);
            }
            pq.pop();
            k++;
        }

        return ans;
    }
};
