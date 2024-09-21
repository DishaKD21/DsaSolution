//Find Smallest Letter Greater Than Target
//three pointers low high and mid check if mid is greater than target then return that value 
//otherwise move 
class Solution {
public:
    char nextGreatestLetter(vector<char>& letters, char target) {
        int l=0;
        int h=letters.size()-1;
        if(letters[0]>target || letters[letters.size()-1]<=target){
                return letters[0];
        } 
        char x; 
        while(l<=h)
        {   int mid=(l+h)/2;
            if(letters[mid]>target){
                 x= letters[mid];
                 h=mid-1;
            }  
            else if(letters[mid]<target || letters[mid]==target){
                 l=mid+1;
            }
        } 
        return x;
    }
};