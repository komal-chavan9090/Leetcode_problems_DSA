class Solution {
public:
    
    vector<vector<int>> flipAndInvertImage(vector<vector<int>>& matrix) {
        for (int i = 0; i < matrix.size(); i++) {
            reverse(matrix[i].begin(),matrix[i].end());
        }
        for(int i=0;i<matrix.size();i++)
        {
            for(int j=0;j<matrix[i].size();j++)
            {
                matrix[i][j] = matrix[i][j] ^ 1;
            }
        }
        return matrix;
    }
};