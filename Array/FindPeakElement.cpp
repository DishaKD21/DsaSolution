//Find Peak Element
//iterate from left see if any value of i is greater then right side element and  return it
class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        
        int n = nums.size();
        for(int i=0; i<n-1; i++){
            if(nums[i] > nums[i+1]){
                return i;
            }
        }
        return n-1;
    }
};
