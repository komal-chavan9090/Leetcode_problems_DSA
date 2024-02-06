class Solution {
public:
    int solve(int k,vector<int>& vec,int index)
    {
        if(vec.size()==1)
        {
            return vec[0];
        }
        
        
        index=(index+k)%vec.size();
        vec.erase(vec.begin()+index);
        return solve(k,vec,index);
        
    }
    int findTheWinner(int n, int k) {
       vector<int> vec;
       for(int i=1;i<=n;i++)
       {
           vec.push_back(i);
       }
       k=k-1;
       
       return solve(k,vec,0);
    }
};