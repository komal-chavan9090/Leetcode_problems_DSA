class Solution {
public:
    int finalValueAfterOperations(vector<string>& op) {
        int x=0;
        for(int i=0;i<op.size();i++)
        {
             if(op[i].find('+')!=string::npos)
             {
                x++;
             }
             else
             {
                x--;
             }
        }
        return x;
    }
};