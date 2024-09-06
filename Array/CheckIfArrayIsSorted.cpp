//check if array is sorted
class Solution {
 public:
    bool check(vector<int>& nums) {
        for(int i=0;i<nums.size();i++){
            if(nums[i]<=nums[i+1]){
                return true;
            }
            else{
                 return false;
            }
        }
        return 0;
    }
};