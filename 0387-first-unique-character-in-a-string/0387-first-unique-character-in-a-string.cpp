class Solution {
public:
    int firstUniqChar(string s) {
        map<char,pair<int,int>> mpp;

        //first=occurance
        //second = index

        for(int i=0;i<s.length();i++) {
            if(mpp.find(s[i])!=mpp.end())
            {
                auto it=mpp[s[i]];
                int count=it.first;
                int index=it.second;

                mpp[s[i]]={count+1,index}; 
            }
            else
            {
                mpp[s[i]]={1,i};
            }
          
        }

          int mini=INT_MAX;

            for(auto it:mpp)
            {
                int count=it.second.first;
                int index=it.second.second;
                if(count==1)
                {
                    mini=min(mini,index);
                }
            }
            if(mini==INT_MAX) return -1;
            return mini;


    }
};