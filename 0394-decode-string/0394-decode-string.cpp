class Solution {
public:
    string decodeString(string s) {
        stack<string>st;
        string ss="";
        for(int i=0;i<s.length();i++)
        {
            string dig="";
            if(isdigit(s.at(i)))
            {
                dig+=s.at(i);
                i++;
                while(i<s.length() && isdigit(s.at(i)))
                {
                    dig+=s.at(i);
                    i++;
                }
                i--;
                st.push(dig);
                
            }
            else if (s.at(i) == '[') {
                st.push("[");
                st.push(ss); 
                ss = ""; 
            }
            else if(s.at(i)>='a' && s.at(i)<='z')
            ss=ss+s.at(i);
            else if (s.at(i) == ']') {
                string prev = st.top(); st.pop();
                st.pop();
                int nums = stoi(st.top()); st.pop();

                string temp = "";
                for (int i = 0; i < nums; i++) {
                    temp += ss;
                }
                ss = prev + temp;            }
        }
        return ss;
    }
};