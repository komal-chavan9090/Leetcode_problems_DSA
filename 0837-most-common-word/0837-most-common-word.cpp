#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    string mostCommonWord(string paragraph, vector<string>& banned) {
        // Convert banned list to a set for fast lookup
        unordered_set<string> bannedSet(banned.begin(), banned.end());

        // Convert all punctuation in paragraph to spaces
        for (char& c : paragraph) {
            if (ispunct(c)) c = ' ';
        }

        map<string, int> mpp;
        stringstream ss(paragraph);
        string word;

        while (ss >> word) {
            // Convert to lowercase
            for (char& c : word) {
                c = tolower(c);
            }

            if (bannedSet.find(word) == bannedSet.end()) {
                mpp[word]++;
            }
        }

        string ans;
        int maxi = 0;
        for (auto& it : mpp) {
            if (it.second > maxi) {
                maxi = it.second;
                ans = it.first;
            }
        }

        return ans;
    }
};
