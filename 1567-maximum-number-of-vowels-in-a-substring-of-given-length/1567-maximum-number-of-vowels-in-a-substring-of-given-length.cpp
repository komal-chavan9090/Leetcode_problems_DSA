class Solution {
public:
    bool isVowel(char ch)
    {
        if(ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u') 
        {
            return true;
        }
        return false;
    }
    int maxVowels(string s, int k) {
        int i=0;
        int j=0;
        int maxi=0;
        int vowelCount=0;
        while(j<s.length())
        {
            if(isVowel(s[j])) 
            {
                vowelCount++;
            }
            
           
            while(j-i+1 > k)
            {
                if(isVowel(s[i]))
                {
                    vowelCount--;
                }
                i++;
            }
            j++;
            maxi=max(maxi,vowelCount); 
               
        }
        return maxi;
    }
};