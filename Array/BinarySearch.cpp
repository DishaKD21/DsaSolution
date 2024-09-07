//Binary Search
//take a three pointer pointing towards lowest index and highest index tale mid of both value 
//then check if mid is equal to target or not 
class Solution {
public:
    int search(vector<int>& nums, int target) {
        int l=0;
        int h=nums.size()-1;
        int mid=(l+h)/2;
        while(l<=h){
            if(nums[l]==target){
                return l;
            }
            if(nums[h]==target){
                return h;
            }
            if(nums[mid]<target){
                l=mid+1;
                mid=(l+h)/2;
            }
            else if(nums[mid]>target){
                h=mid-1;
                mid=(l+h)/2;
            }
            else if(nums[mid]==target){
                return mid;
            }
        }
        return -1;

    }
};