class Solution {
public:
    int countPoints(string rings) {
       if(rings.size() <= 5) return 0;
        
        map<int, set<int>> mpp;

        for(int i = 0; i < rings.length() - 1; i += 2) {
            char ringcolor = rings[i];
            int rodno = rings[i+1] - '0';  // Convert char digit to integer
            
            int colorcode;
            if(ringcolor == 'R') colorcode = 1;
            else if(ringcolor == 'G') colorcode = 2;
            else if(ringcolor == 'B') colorcode = 3;
            
            mpp[rodno].insert(colorcode);
        }

        int count = 0;
        for(auto it : mpp) {
            if(it.second.size() == 3) {  // Rod has all 3 colors
                count++;
            }
        }
        return count;
    }
};