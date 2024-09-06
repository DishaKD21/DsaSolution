//majority element
class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int count=0;
       for(int j=0;j<nums.size();j++){
        for(int i=0;i<nums.size();i++){
            if(nums[j]==nums[i]){
                count++;
            }
            }
            if(count> (nums.size())/2)
           { return nums[j];
           }
            }
            return -1;
       }
};