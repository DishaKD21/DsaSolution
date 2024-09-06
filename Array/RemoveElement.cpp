// Remove Element
// take two pointer keep both of them at zero index and then till i not equal to n run the
//loop then number not equal to value then swap number at i and at j then do increase j else 
//increase i return j 
class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int i = 0;
        int j = 0;
        int n = nums.size();

        while (i != n) {
            if (nums[i] != val) {
                swap(nums[i],nums[j]);
                j++;
            }
            i++;
        }
        return j;
    }
};