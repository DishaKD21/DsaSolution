//rotate array by one/D place
class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int c;
        for(int i=0;i<k;i++){
            c=nums[nums.size()-1];
        for(int j=nums.size()-2;j>=0;j--){
            nums[j+1]=nums[j];
        }
         nums[0]=c;
         
        }     
    }
};