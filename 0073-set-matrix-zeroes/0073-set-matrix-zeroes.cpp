class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        unordered_set<int> rows;
        unordered_set<int> cols;

        int n = matrix.size();
        int m = matrix[0].size();

        // Step 1: record rows and columns with zeros
        for(int i = 0; i < n; i++) {
            for(int j = 0; j < m; j++) {
                if(matrix[i][j] == 0) {
                    rows.insert(i);
                    cols.insert(j);
                }
            }
        }

        // Step 2: set rows to 0
        for(int r : rows) {
            for(int j = 0; j < m; j++) {
                matrix[r][j] = 0;
            }
        }

        // Step 3: set cols to 0
        for(int c : cols) {
            for(int i = 0; i < n; i++) {
                matrix[i][c] = 0;
            }
        }
    }
};