//Merge Sorted Array
//starting from the last index of both of the arrays and as that is mentioned that nums1's 
//capacity is m+n so we will put element at there by comparing which is bigger 
class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        vector<int> result;
        int i=m-1;
        int j=n-1;
        int k=m+n-1;
        while(i>=0 and j>=0){
            if(nums1[i]>=nums2[j]){
               nums1[k--]=nums1[i--];
              
            }
            else if(nums2[j]>=nums1[i]){
               nums1[k--]=nums2[j--];  
            } 
        }

        while(j>=0){
             nums1[k--]=nums2[j--];
        }
    }
};