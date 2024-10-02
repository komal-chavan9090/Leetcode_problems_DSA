class Solution {
public:
    vector<int> arrayRankTransform(vector<int>& arr) {
        vector<int> res=arr;
        sort(res.begin(),res.end());

        vector<int> ans;
        unordered_map<int,int> mpp;

        int rank=1;
        for(int i=0;i<res.size();i++)
        {         
            if(mpp[res[i]]>0) continue;

            mpp[res[i]]=rank++;
        }
        for(int i=0;i<arr.size();i++)
        {
            ans.push_back(mpp[arr[i]]);
        }
        return ans;
    }
};