class Solution {
public:
    
    vector<vector<int>> flipAndInvertImage(vector<vector<int>>& matrix) {
        int m=matrix.size();
          for(int i=0;i<m;i++){
            int left = 0;
            int right = m-1;
            while(left<=right){
                swap(matrix[i][left],matrix[i][right]);
                left++;
                right--;
            }
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