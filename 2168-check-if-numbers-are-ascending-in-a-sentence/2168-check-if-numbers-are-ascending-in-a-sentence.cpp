class Solution {
public:
    bool areNumbersAscending(string s) {
          int lastNumberFound = -1;  // Initialize to -1 so that any positive number can pass the first comparison
        
        stringstream ss(s);  // Use stringstream to break the string into words
        string token;
        
        while (ss >> token) {  // Iterate over each token in the string
            if (isdigit(token[0])) {  // Check if the token is a number
                int num = stoi(token);  // Convert the token to an integer
                if (num > lastNumberFound) {
                    lastNumberFound = num;  // Update the last number found
                } else {
                    return false;  // If the number is not strictly greater than the last, return false
                }
            }
        }
        
        return true;  // All numbers were in strictly increasing order
    }
};