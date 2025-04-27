class Solution {
public:
    bool areOccurrencesEqual(string s) {
         map<char, int> mpp;
        // Count occurrences of each character in the string
        for(int i = 0; i < s.length(); i++) {
            mpp[s[i]]++;
        }

        // Initialize the iterator to the first element in the map
        map<char, int>::iterator it = mpp.begin();
        // Store the occurrence count of the first character
        int count = it->second;

        // Iterate through the map and check if all values are equal to 'count'
        for(auto it : mpp) {
            if(it.second != count) {
                return false;
            }
        }

        return true;
    }
};