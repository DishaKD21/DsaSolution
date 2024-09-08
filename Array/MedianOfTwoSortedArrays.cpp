//Median of Two Sorted Arrays
//merge two arrays and then take the first index and the last and find the mid and then print
class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        vector<int> result;
        int m=nums1.size();
        int n=nums2.size();
        int j=0;
        int k=0;
        while(j<m and k<n){
            if(nums1[j]<=nums2[k]){
               result.push_back(nums1[j]);
               j++;
            }
            else if(nums2[k]<=nums1[j]){
               result.push_back(nums2[k]);
               k++;
            } 
        }
        while(j<m){
             result.push_back(nums1[j++]);
        }
        while(k<n){
             result.push_back(nums2[k++]);
        }
        int l=0;
        int h=result.size()-1;
        int mid=(l+h)/2;

        if(h%2==0){
            return static_cast<double>(result[mid]);
        }
        else{
            return ((static_cast<double>(result[mid]+result[mid+1]))/2);
        }
    }
};
