//linear search
class Solution{
    public:
    int searchInSorted(int arr[], int N, int K) 
    { 
        int count=0;
    for(int i=0;i<N;i++){
        if(arr[i]==K){
             return 1;
             break;
        }
    }
      return -1;
    }
};