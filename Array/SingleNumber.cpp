//Single Number
class Solution {
public:
    int singleNumber(vector<int>& nums) {
       int XOR=0;//2
    for(int i=0;i<nums.size();i++){//2
        XOR=XOR^nums[i];//2^2=0
    }
    return XOR;
    }
};
