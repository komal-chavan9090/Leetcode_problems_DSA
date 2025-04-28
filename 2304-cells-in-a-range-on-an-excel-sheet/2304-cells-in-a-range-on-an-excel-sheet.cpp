class Solution {
public:
    vector<string> cellsInRange(string s) {
            char startCol = s[0];
        int startRow = s[1] - '0';
        char endCol = s[3];
        int endRow = s[4] - '0';

        vector<string> result;

        for (char c = startCol; c <= endCol; c++) {
            for (int r = startRow; r <= endRow; r++) {
                result.push_back(string(1, c) + to_string(r));
            }
        }

        return result;

    }
};