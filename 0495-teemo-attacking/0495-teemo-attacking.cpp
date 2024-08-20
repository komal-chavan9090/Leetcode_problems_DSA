class Solution {
public:
    int findPoisonedDuration(vector<int>& timeSeries, int duration) 
    {
        int total=0;
        int prev=0;
       int pos=0;
        for(int i=0;i<timeSeries.size()-1;i++)
        {
            pos=timeSeries[i]+duration-1;
            
            total+=duration;
            
           if(pos>=timeSeries[i+1])
           {
            total-=pos-timeSeries[i+1]+1;
           }
        }
        return total+duration;

    }
};