class Solution {
public:
    bool isBalanced(string num) {
        // int num1=stoi(num);
        // int odd=0,even=0;
        // int dig=0;
        // bool flag=1; //1 means odd and 0 means even 
        // while(num1>0)
        // {
        //     dig=num1%10;
            
        //     if(flag)
        //     {
        //         even+=dig;
        //     }
        //     else
        //     {
        //         odd+=dig;
        //     }
        //     num1=num1/10;
        //     flag=!flag;
        // }
        // if(odd==even) return true;
        // return false;

        int even=0,odd=0;

        for(int i=0;i<num.length();i++)
        {
            if(i%2==0)
            {
                even+=(num[i]-'0');
            }else
            {
                odd+=(num[i]-'0');
            }
        }

        return even==odd;
    }
};