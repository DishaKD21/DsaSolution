//Power Of Two
//And operation between multiple of 2 and next lower number will always give 0 and other wise it will never be 0.
class Solution {
public:
    bool isPowerOfTwo(int n) {
        return n > 0 && (n & (n - 1)) == 0;
    }
};