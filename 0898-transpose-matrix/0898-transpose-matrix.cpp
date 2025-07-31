class Solution {
public:
    vector<vector<int>> transpose(vector<vector<int>>& matrix) {
        int m = matrix.size();       // original rows
        int n = matrix[0].size();    // original columns

        vector<vector<int>> transpose(n, vector<int>(m)); // Note: n x m

        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++) {
                transpose[j][i] = matrix[i][j];
            }
        }
        return transpose;
    }
};
