//max consecutive 1's
class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int c = 0, maxy = 0;
        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] == 0) {
                c=0;
            } 
            else {
              c++;
              if (maxy < c) {
              maxy = c;
            }
            }
            
        }
         return maxy;
    }
};