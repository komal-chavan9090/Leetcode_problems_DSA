class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) 
    {
          int i=m-1; //for nums1
          int j=n-1; //nums2

         int temp=(m+n)-1;
          while(j>=0 && i>=0)
          {
             if(nums1[i]<nums2[j])
             { 
                nums1[temp]=nums2[j];
                j--;
                temp--;
             }
             else if(nums1[i]>=nums2[j])
             {
                nums1[temp]=nums1[i];
                i--;
                temp--;
             }

          } 
          while(i>=0)
          {
            nums1[temp--]=nums1[i--];
          }
          while(j>=0)
          {
            nums1[temp--]=nums2[j--];
          }
        
    }
};