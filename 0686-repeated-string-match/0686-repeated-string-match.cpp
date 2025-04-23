class Solution {
public:
 // temp=abcpabcd
    // b=cdabcd
    bool check(const string& temp, const string& b) {
        int n = temp.length();
        int m = b.length();

        if (m > n) return false;

        int i = 0;
        while (i <= n - m) {
            int j = 0;
            while (j < m && temp[i + j] == b[j]) {
                j++;
            }
            if (j == m) {
                return true;
            }
            i++;
        }
        return false;
    }

    int repeatedStringMatch(string a, string b) {
        int count = 1;
        string temp = a;

        while (temp.length() < b.length() + a.length()) {
            if (check(temp, b)) {
                return count;
            }
            temp += a;
            count++;
        }

        if (check(temp, b)) {
            return count;
        }

        return -1;
    }
};
