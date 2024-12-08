class Solution {
public:
    int maxTwoEvents(vector<vector<int>>& arr) {
        sort(arr.begin(),arr.end(),[](const vector<int>& a,const vector <int>& b)
        {
               return a[1]<b[1];
    });

        int n=arr.size();
        vector<int> maxvalue(n,0);

        maxvalue[0]=arr[0][2];
        for(int i=1;i<n;i++)
        {
            maxvalue[i]=max(maxvalue[i-1],arr[i][2]);
        }

        int result=0;

        for(int i=0;i<n;i++)
        {
            int currvalue=arr[i][2];

            int left=0,right=i-1,besti=-1;

            while(left<=right)
            {
                int mid=left+(right-left)/2;
                if(arr[mid][1]<arr[i][0])
                {
                    besti=mid;
                    left=mid+1;

                }
                else
                {
                    right=mid-1;
                }
            }
            if(besti!=-1)
            {
                currvalue+=maxvalue[besti];
            }
            result=max(result,currvalue);
        }
    return result;
    }
};