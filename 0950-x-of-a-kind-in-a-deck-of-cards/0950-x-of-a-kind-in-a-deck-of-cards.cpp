#include <vector>
#include <unordered_map>
#include <numeric> // std::gcd
using namespace std;

class Solution {
public:
    bool hasGroupsSizeX(vector<int>& deck) {
        unordered_map<int, int> count;
        for (int card : deck) {
            count[card]++;
        }

        int g = 0;
        for (auto& [card, freq] : count) {
            g = std::gcd(g, freq);
        }

        return g >= 2;
    }
};
