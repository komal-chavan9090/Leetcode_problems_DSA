class Solution {
public:
    
     int cjh(int start,int end , vector<int> arr)
     {
        int ans=0;
        for(int i=start;i<=end;i++)
        {
            ans=ans^arr[i];
        }
        return ans;
     }
    vector<int> xorQueries(vector<int>& arr, vector<vector<int>>& queries) {
        vector<int> ans;
        for(int i=0;i<queries.size();i++)
        {
            
            ans.push_back(cjh(queries[i][0],queries[i][1],arr));
        }
        return ans;
    }
};