class Solution {
public:
    bool check(string temp,string s)
    {
        int pos=temp.find(s);

        if(temp.find(s)!=string::npos && pos==0)
        {
            return true;
        }
        return false;
    }
    bool isPrefixString(string s, vector<string>& words) {
        string temp="";
        for(int i=0;i<words.size();i++)
        {
            temp+=words[i];
            if(s.length() < temp.length()) continue;
             if(check(temp,s))
                  {
                       return true;
                  }
            
          
        }
        return false;
    }
};