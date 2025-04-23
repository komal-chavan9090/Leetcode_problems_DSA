class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) 
    {
          int i=0; //for nums1
          int j=0; //nums2

          vector<int> result;
          while(j<n && i<m)
          {
             if(nums1[i]<nums2[j])
             { 
                result.push_back(nums1[i]);
                i++;  
             }
             else if(nums1[i]>nums2[j])
             {
                result.push_back(nums2[j]);
                j++;
             }
             else
             {
                result.push_back(nums1[i]);
                result.push_back(nums2[j]);
                i++;
                j++;
             }
          } 

          while(j<n)
          {
            result.push_back(nums2[j]);
            j++;
          }  

        while(i<m)
          {
            result.push_back(nums1[i]);
            i++;
          }  

          nums1=result;
    }
};