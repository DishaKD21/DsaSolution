//more than n/3 times element
class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
       vector<int> ls;
       map<int,int> mpp;
       for(int i=0;i<nums.size();i++){
           mpp[nums[i]]++;
           if(mpp[nums[i]]==((nums.size())/3)+1)
           {ls.push_back(nums[i]);
           }
           if(ls.size()==2){
            break;
           }
       }
       return ls;   
    }
};