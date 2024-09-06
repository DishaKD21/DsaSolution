//second largest
class Solution {
  public:
    int print2largest(vector<int> &arr){
        int max=arr[0];
        for(int i=0;i<arr.size();i++){
            if(max<arr[i]){
                max=arr[i];
            }
        }
        int secmax=-1;
        for(int i=0;i<arr.size();i++){
            if(max!=arr[i]&& secmax<arr[i]){
                secmax=arr[i];
            }
        }
        return secmax;
    }
};