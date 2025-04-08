class Solution {
public:
    vector<vector<int>> findDifference(vector<int>& nums1, vector<int>& nums2) {
        map<int,int> nums1map;
        map<int,int> nums2map;

        for(int i=0;i<nums1.size();i++) nums1map[nums1[i]]++;
        for(int i=0;i<nums2.size();i++) nums2map[nums2[i]]++;

        vector<int> ans1;
        for(int i=0;i<nums1.size();i++)
        {
            if(nums2map.find(nums1[i])==nums2map.end() && !count(ans1.begin(),ans1.end(),nums1[i]))
            {
                ans1.push_back(nums1[i]);
            }
        }

        vector<int> ans2;
        for(int i=0;i<nums2.size();i++)
        {
            if(nums1map.find(nums2[i])==nums1map.end() && !count(ans2.begin(),ans2.end(),nums2[i]))
            {
                ans2.push_back(nums2[i]);
            }
        }
        return {ans1,ans2};
    }
};