class Solution {
public:
    vector<string> findRestaurant(vector<string>& list1, vector<string>& list2) {
        map<string, int> mpp;
        for (int i = 0; i < list1.size(); i++) {
            mpp[list1[i]] = i;
        }

        int mini = INT_MAX;
        vector<string> ans;

        for (int i = 0; i < list2.size(); i++) {
            if (mpp.find(list2[i]) != mpp.end()) {
                int sum = i + mpp[list2[i]];
                if (sum < mini) {
                    ans.clear();  // new smallest sum → reset result
                    ans.push_back(list2[i]);
                    mini = sum;
                } else if (sum == mini) {
                    ans.push_back(list2[i]);  // same min sum → add to result
                }
            }
        }

        return ans;
    }
};
