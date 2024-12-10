class Solution {
public:
    bool lemonadeChange(vector<int>& bills) {

        int five=0,ten=0,twe=0;
        for(int i=0;i<bills.size();i++)
        {
            if(bills[i]==5)
            {
                five++;
            }
            else if(bills[i]==10)
            {
                if(five>0)
                {
                    five--;
                }
                else
                {
                    return false;
                }
                ten++;
            }
            else if(bills[i]==20)
            {
                if(ten>0 && five>0)
                {
                    ten--;
                    five--;
                }
                else
                {
                    return false;
                }
                
                twe++;
            }
        }
        return true;
    }
};