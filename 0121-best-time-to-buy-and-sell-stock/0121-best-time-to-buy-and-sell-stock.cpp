class Solution {
public:
    int maxProfit(vector<int>& prices) {

        if(prices.size()==1)
        return 0;
        int maxprofit;
        int temp=prices[0];
        for(int i=1;i<prices.size()-1;i++)
        {
            temp=min(temp,prices[i]);
              maxprofit=max(maxprofit,prices[i]-temp);
        }
        return maxprofit;
    }
};