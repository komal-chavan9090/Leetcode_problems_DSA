class Solution {
public:
    int countConsistentStrings(string allowed, vector<string>& words) {
         
           map<char,int> mpp;

           for(int i=0;i<allowed.length();i++)
           {
               mpp[allowed[i]]++;
           }
           int count=0;
           for(int i=0;i<words.size();i++)
           {
              string temp=words[i];
              bool flag=true;
              for(int i=0;i<temp.size();i++)
              {
                if(mpp.find(temp[i])!=mpp.end())
                {
                    continue;
                }
                else
                {
                      flag=false;
                }
              }
              if(flag)
              {
                count++;
              }


           }
           return count;

    }
};