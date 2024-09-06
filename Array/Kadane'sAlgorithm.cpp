//kadane's algorithm
class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int sum=0,maxi=nums[0];
        for(auto & it:nums){
            sum=sum+it;
            maxi=max(sum,maxi);
            if(sum<0){
                sum=0;
            }
            
        }
        return maxi;
    }
};