class Solution
{
public:
    void solve(int i, int j, vector<vector<int>> &img, vector<vector<int>> &smoothed)
    {
        int count = 0;
        int sum = 0;
        for (int dx = -1; dx <= 1; dx++)
        {
            for (int dy = -1; dy <= 1; dy++)
            {
                int newRow = i + dx;
                int newCol = j + dy;
                if (newRow >= 0 && newRow < img.size() && newCol >= 0 && newCol < img[0].size())
                {
                    sum += img[newRow][newCol];
                    count++;
                }
            }
        }
        smoothed[i][j] = sum / count;
    }
    vector<vector<int>> imageSmoother(vector<vector<int>> &img)
    {
        vector<vector<int>> smoothed(img.size(), vector<int>(img[0].size(), 0));


        for (int i = 0; i < img.size(); i++)
        {
            for (int j = 0; j < img[0].size(); j++)
            {
                solve(i, j, img, smoothed);
            }
        }
        return smoothed;
    }
};