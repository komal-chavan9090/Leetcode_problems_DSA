class Solution {
public:
    string capitalizeTitle(string title) {
          int n = title.length();
        for(int i = 0; i < n; i++) {
            title[i] = tolower(title[i]);  // First make everything lowercase
        }
        
        int i = 0;
        while(i < n) {
            int j = i;
            while(j < n && title[j] != ' ') {
                j++;
            }
            int len = j - i;
            
            if(len > 2) {
                title[i] = toupper(title[i]);  // Capitalize the first letter if length > 2
            }
            
            i = j + 1; // move to next word
        }
        
        return title;
    }
};