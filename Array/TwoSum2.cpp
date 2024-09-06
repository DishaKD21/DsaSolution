//Two Sum 2
//keep two pointer one at last and one at starting and then itrate them add them and compare 
//value with k and then if it is same then break otherwise if it is small then do i++ if it is 
//big then do j--.
class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        vector<int> v1;
        int i=0;
        int j=numbers.size()-1;
        while(i<j){
            if((numbers[i]+numbers[j])==target){
                v1.push_back(i+1);
                v1.push_back(j+1);
                break;
            }
           if((numbers[i]+numbers[j])>target){
            j--;
           }
           else if((numbers[i]+numbers[j])<target){
            i++;
           }
          
        }
        return v1;
    }
};