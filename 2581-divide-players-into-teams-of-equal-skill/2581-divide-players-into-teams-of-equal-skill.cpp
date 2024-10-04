class Solution {
public:
    long long dividePlayers(vector<int>& skill) {
        sort(skill.begin(),skill.end());

        int i=0;
        int j=skill.size()-1;
        int temp1=skill[i]+skill[j];
         long long temp=skill[i]*skill[j];
        i++;
        j--;
       
        
        while(i<j)
        {
            if(skill[i]+skill[j]!=temp1)
            {
                return -1;
            }
            else
            {
                temp+=skill[i]*skill[j];;
                  i++;
                   j--; 
            }
        
        }
        return temp;
    }
};