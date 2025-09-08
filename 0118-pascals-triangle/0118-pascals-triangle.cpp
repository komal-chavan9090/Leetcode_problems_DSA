class Solution {
public:
    // Function to generate the 'row'-th row of Pascal's Triangle
    vector<int> solve(int row) {
        vector<int> res;
        long long ans = 1; // use long long to avoid overflow
        res.push_back(ans);

        for (int i = 1; i <= row; i++) {
            ans = ans * (row - i + 1) / i;  // formula: nCr = (nCr-1 * (n-r+1))/r
            res.push_back(ans);
        }

        return res;
    }

    // Function to generate the whole Pascal's Triangle
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> triangle;

        for (int i = 0; i < numRows; i++) {
            triangle.push_back(solve(i)); // i-th row
        }

        return triangle;
    }
};
