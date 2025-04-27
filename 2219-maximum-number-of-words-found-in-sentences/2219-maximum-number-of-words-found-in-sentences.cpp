class Solution {
public:
int words(string sent) {
int count = 0,n = sent.size();
if(n == 1 && sent == " ") return 0;
for(int i = 0;i < n;i++) if((i == n-1) || (sent[i] == ' ')) count++;
return count;
}
    int mostWordsFound(vector<string>& sentences) {
int maxima = 0;
for(string s:sentences) maxima = max(maxima,words(s));
return maxima;     
    }
};