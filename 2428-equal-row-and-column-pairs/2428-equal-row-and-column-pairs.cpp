class Solution {
public:
    int equalPairs(vector<vector<int>>& grid) {
        map<vector<int>,int> mpp;

        for(int i=0;i<grid.size();i++)
        {
            mpp[grid[i]]++;
        }
        int count=0;
        int n=grid.size();
        for(int i=0;i<grid[0].size();i++)
        {
            vector<int> col;
            for(int j=0;j<n;j++)
            {
                col.push_back(grid[j][i]);
            }
            count+=mpp[col];
        }
        return count;
    }
};