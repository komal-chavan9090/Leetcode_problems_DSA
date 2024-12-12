class Solution {
public:
    bool canPlaceFlowers(vector<int>& flowerbed, int n) {
        int count=0;
        if(n==0) return true;
        if(flowerbed.size()<3){
            if(n<=1){
                if(flowerbed.size()==2 && flowerbed[0]==0 && flowerbed[1]==0) return true;
                else if(flowerbed.size()==1 && flowerbed[0]==0) return true;

                return false ; 
            }
            return false;
        }
        for(int i=0;i<flowerbed.size();i++)
        {
            if(flowerbed[i]==0 && ((i==0 && flowerbed[i+1]==0) || (i==flowerbed.size()-1 && flowerbed[i-1]==0) || (i>0 && i<flowerbed.size()-1 && flowerbed[i-1]==0 && flowerbed[i+1]==0)))
            {
                count++;
                i+=1;
            }
        }

        return (count>=n) ? true : false;
    }
};