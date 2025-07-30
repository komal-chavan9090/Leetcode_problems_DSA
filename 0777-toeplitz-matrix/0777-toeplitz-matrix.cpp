class Solution {
public:
    bool check(int i, int j, int row, int col, vector<vector<int>>& mat) {
        int val = mat[i][j];
        while (i < row && j < col) {
            if (mat[i][j] != val)
                return false;
            i++;
            j++;
        }
        return true;
    }

    bool isToeplitzMatrix(vector<vector<int>>& matrix) {
        int rows = matrix.size();
        int cols = matrix[0].size();

        // Check diagonals starting from first row
        for (int j = 0; j < cols; j++) {
            if (!check(0, j, rows, cols, matrix))
                return false;
        }

        // Check diagonals starting from first column (excluding 0,0 again)
        for (int i = 1; i < rows; i++) {
            if (!check(i, 0, rows, cols, matrix))
                return false;
        }

        return true;
    }
};
