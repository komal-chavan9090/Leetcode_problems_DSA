class Solution {
public:
    int myAtoi(string s){

    int sign = 1 , ans = 0 , n = s.size() ,i = 0;
    // Ignore leading spaces
    while (i < n && s[i] == ' ') {
        i++;
    }
    // Handle the sign
    if (i < n && (s[i] == '-' || s[i] == '+')){
       if( s[i] == '+' ) sign = 1;
       else sign = -1 ;
       i++;
    }

    // Handle the case where the first non-space character is '0'
    if (i < n && s[i] == '0') {
        while (i < n && s[i] == '0') {
            i++;
        }

        // Check if there's a valid number after leading zeros
        if (i < n && s[i] >= '1' && s[i] <= '9') {
            while (i < n && s[i] >= '0' && s[i] <= '9') {
                int digit = s[i++] - '0';

                // Check for overflow before updating ans
                if (ans > INT_MAX / 10 || (ans == INT_MAX / 10 && digit > 7)) {
                    if(sign == 1)return INT_MAX;
                    else return INT_MIN;
                }

                ans = ans * 10 + digit;
            }
            return ans * sign;
        } else {
            return 0; // Invalid input
        }
    }

    // Handle the general case of non-zero digits
    if (i < n && s[i] >= '1' && s[i] <= '9') {
        while (i < n && s[i] >= '0' && s[i] <= '9') {
            int digit = s[i++] - '0';

            // Check for overflow before updating ans
            if (ans > INT_MAX / 10 || (ans == INT_MAX / 10 && digit > 7)) {
                if(sign == 1)return INT_MAX;
                else return INT_MIN;
            }
            ans = ans * 10 + digit;
        }
        return ans * sign;
    } else {
        return 0; // Invalid input
    }
    }
};