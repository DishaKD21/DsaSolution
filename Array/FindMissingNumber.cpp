//find the missing number in array
class Solution {
public:
    int missingNumber(vector<int>& nums) {
        //(n*(n+1))/2 - sum of all elements
        int sum=0;
        for(int i=0;i<nums.size();i++){
            sum=sum+nums[i];
        }
        return ((nums.size()*(nums.size()+1))/2-sum );
    }
};
