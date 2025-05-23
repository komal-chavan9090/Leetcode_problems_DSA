class Solution {
    public:
    bool isVowel(char ch)
    {
        return (ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u');
    }
    
    int count_Vowel_At_Most_K_Unique_Vowels(string s,int k)
    {
        unordered_map<char,int> freq;
        int count=0;
        int i=0,j=0;
        while(j<s.size())
        {
            if(!isVowel(s[j]))
            {
                i=j+1;
                j++;
                freq.clear();
                continue;
            }
            freq[s[j++]]++;
            while(freq.size()>k)
            {
                freq[s[i]]--;
                if(freq[s[i]]==0)
                    freq.erase(s[i]);
                i++;
            }
            count+=(j-i+1);
        }
        return count;
    }
    
     int countVowelSubstrings(string word) 
    {
         return ( count_Vowel_At_Most_K_Unique_Vowels(word,5) -  
                     count_Vowel_At_Most_K_Unique_Vowels(word,4));          
    }
};