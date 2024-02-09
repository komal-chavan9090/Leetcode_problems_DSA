// class Solution {
// public:

//     string invert(string x)
//     {
//         for(int i=0;i<x.size();i++)
//         {
//             if(x[i]=='0')
//             {
//                 x[i]='1';
//             }
//             else
//             {
//                 x[i]='0';
//             }
            
//         }
//         reverse(x.begin(),x.end());
//         return x;
//     }
//     string solve(int n)
//     {
//         if(n==1)
//         {
//             return "0";
//         }

//         return solve(n-1)+"1"+invert(solve(n-1));
//     }
    
//     char findKthBit(int n, int k) {
       
//         string s= solve(n);
//         return s[k-1];
//     }
// };


class Solution {
public:
    char findKthBit(int n, int k) {
        if(n==1){
            return '0'; 
        }
        if(pow(2,n)/k==2){
            return '1';
        }
        if(k<pow(2,n)/2){
            return findKthBit(n-1,k);
        }
        k = pow(2,n)-k;
        if(findKthBit(n-1,k)=='1'){
            return '0';
        }
        return '1';
    }
};