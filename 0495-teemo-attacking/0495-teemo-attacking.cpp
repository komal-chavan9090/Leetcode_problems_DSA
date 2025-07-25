class Solution {
public:
    int findPoisonedDuration(vector<int>& timeSeries, int duration) {
        if (timeSeries.empty()) return 0;

        int total = 0;

        for (int i = 0; i < timeSeries.size() - 1; i++) {
            int diff = timeSeries[i + 1] - timeSeries[i];
            total += min(diff, duration); // if overlap, only count up to the next attack
        }

        total += duration; // Add poison time from the last attack

        return total;
    }
};
