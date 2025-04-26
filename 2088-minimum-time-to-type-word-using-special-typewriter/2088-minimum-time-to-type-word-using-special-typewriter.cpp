class Solution {
public:
    int minTimeToType(string word) {
       int count = 0;
        char current = 'a';  // Start from 'a'
        
        for(char ch : word) {
            int diff = abs(ch - current);
            int moveTime = min(diff, 26 - diff); // Clockwise or counterclockwise
            count += moveTime + 1; // +1 for typing the character
            current = ch;
        }

        return count;


    }
};