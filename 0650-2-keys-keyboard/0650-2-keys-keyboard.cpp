class Solution {
public:
    int targetlength;
    int findmin(int curr,int clip)
    {
        if(curr==targetlength)
        {
            return 0;
        }
        if(curr>targetlength) return INT_MAX/2;

        int copypaste=2+findmin(curr*2,curr);
        int pasteonly=1+findmin(curr+clip,clip);
        return min(copypaste,pasteonly);
    }
    int minSteps(int n) {
        if(n==1)
        return 0;

        targetlength=n;
        return 1+findmin(1,1); 
    }
};