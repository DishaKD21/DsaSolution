//move zeros
//take two pointers both at the begining and move them if zero then swap
class Solution{
public:
void moveZeroes(vector<int>& nums){
int i=0; 
for(int j=0;j<nums.size();j++){
if(nums[j]!=0)
   {
    int c= nums[i];
    nums[i]=nums[j];
    nums[j]=c; 
    i++;
    }
 }
}
};