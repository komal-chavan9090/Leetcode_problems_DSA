class Solution {
public:
     bool isVovel(char c) {
        return c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' ||
               c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U';
    }
    string reverseVowels(string s) 
    {
        int i=0;
        int j=s.length()-1;
        int n=s.length();
        while(i<j)
        {
            while(i<j && !isVovel(s[i]))
            {
                i++;
            }
            while(i<j && !isVovel(s[j]))
            {
                j--;
            }

            if(i<j) {
                swap(s[i],s[j]);
            i++;
            j--;}
        }

        return s;
    }
};
